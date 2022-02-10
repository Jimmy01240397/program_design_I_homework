Sum the values
--------------

### Description

<div>

Given an array\'s initial address(means arr\[0\]) which contains 5
elements, please print out the sum of these five elements.

給定一個陣列的起始記憶體位置並且這個陣列包含五個元素，請你輸出陣列所有元素的和

</div>

### Input

Input arr is a pointer to an array address

### Output

Your function need to assign correct value(int type) to variable result.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>

    void star(int*, int*);

    int main()
    {
        int arr[5], result;
        for(int i=0; i<‍5; i++)
            scanf("%d", &arr[i]);
        
        star(arr, &result);

        printf("%d", result);

        return 0;
    }

<div>

### Sample1

#### Input

    1 2 3 4 5

#### Output

    15

</div>

<div>

### Sample2

#### Input

    900 904 262 677 562

#### Output

    3305

</div>
