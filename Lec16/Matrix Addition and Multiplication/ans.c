#define max(a,b) (a > b ? a:b)
#define min(a,b) (a < b ? a:b)
void add_mat(const struct mat *m1_p, const struct mat *m2_p, struct mat *result_p)
{ // matrix addition
    (*result_p).row = max((*m1_p).row,(*m2_p).row);
    (*result_p).col = max((*m1_p).col,(*m2_p).col);
    for(int i = 0; i < (*result_p).row; i++)
        for(int k = 0; k < (*result_p).col; k++)
			(*result_p).value[i][k] = (i < (*m1_p).row && k < (*m1_p).col ? (*m1_p).value[i][k] : 0) + (i < (*m2_p).row && k < (*m2_p).col ? (*m2_p).value[i][k] : 0);
}

void mul_mat(const struct mat *m1_p, const struct mat *m2_p, struct mat *result_p) { // matrix multiplication
    (*result_p).row = (*m1_p).row;
    (*result_p).col = (*m2_p).col;
    for(int i = 0; i < (*result_p).row; i++)
        for(int k = 0; k < (*result_p).col; k++)
        {
            (*result_p).value[i][k] = 0;
            for(int j = 0; j < (*m1_p).col; j++)
				(*result_p).value[i][k] += (*m1_p).value[i][j] * (*m2_p).value[j][k];
        }
}
