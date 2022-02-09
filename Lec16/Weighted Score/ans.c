#include <string.h>
int nametopercent(char *str, struct weight chapter[], int chapter_num)
{
    for(int i = 0; i < chapter_num; i++)
    	if(strcmp(str, chapter[i].chapter) == 0) return chapter[i].percent;
    return 0;
}
void calculate (struct report_card card[], struct weight chapter[], int student_num, int chapter_num) 
{
	for(int i = 0; i < student_num; i++)
    {
        card[i].max_score = 0;
    	card[i].min_score = 1000000;
        double all = 0;
        for(int k = 0; k < chapter_num; k++)
        {
            all += (double)card[i].record[k].score * nametopercent(card[i].record[k].chapter, chapter, chapter_num);
            card[i].max_score = card[i].max_score > card[i].record[k].score ? card[i].max_score : card[i].record[k].score;
            card[i].min_score = card[i].min_score < card[i].record[k].score ? card[i].min_score : card[i].record[k].score;
        }
        if(card[i].min_score == 1000000) card[i].min_score = 0;
        card[i].final = (int)(all * 0.01);
    }
}
