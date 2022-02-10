Look Up the Word in the Dictionary
----------------------------------

### Description

<div>

Jack wants to search a word. Please help him to find which page he
should turn to.

**Hint**: use `strcmp()`

</div>

### Input

There are 10 records in a dictionary and a target word.

### Output

Return the target page. If the target word is not in the dictionary,
return 0.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>
    #include<‍string.h>
    #define N 10

    typedef struct dict_t_struct {
        char word[10];
        int page;
    } dict_t;

    int search(dict_t arr[], char target[]);

    int main() {
        dict_t dictionary[N];
        char targetWord[10];

        for(int i=0; i<‍N; i++) 
            scanf("%s %d\n", dictionary[i].word, &dictionary[i].page);
        
        scanf("%s", targetWord);
        int targetPage = search(dictionary, targetWord);
        printf("%d", targetPage);
        return 0;
    }

<div>

### Sample1

#### Input

    apple 2
    banana 5
    cow 7
    dog 9
    element 13
    frog 22
    go 44
    horse 51
    in 52
    jet 100
    element

#### Output

    13

</div>

<div>

### Sample2

#### Input

    apple 2
    banana 5
    cap 6
    dog 9
    element 13
    frog 22
    go 44
    horse 51
    in 52
    jet 100
    cow

#### Output

    0

</div>
