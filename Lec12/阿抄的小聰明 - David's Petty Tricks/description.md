阿抄的小聰明 - David\'s Petty Tricks
------------------------------------

### Description

<div>

阿抄身為一個開明且優秀的教師，不會做一些對學生學習沒有益處的事，例如公開成績時他從不將學生的成績排序。－－至少表面上是。

今天，阿抄終於忍不住了決定好好的排一下，看看到底學生們到底做的多糟，\
然而，阿抄用陣列儲存學生的原始成績資料的資料庫都是公開的，突然排序勢必引起軒然大波，\
聰明的他想到：『只要我把記憶體位址拿來排序另外儲存，大家就只會看到奇怪的資料了，我真棒。』

問題是，雖然阿抄能夠寫出檢測用的程式，卻沒辦法寫出這個偷偷排序的函式（對，邏輯一點問題都沒有），\
請幫幫阿抄完成，維護他的表面吧。

### Problem Requirement

------------------------------------------------------------------------

\
請仔細觀察 Loader
Code，**設計出可以通過**`main()`**中各個檢測的函式**`sort_pointer()`。註解中會告訴你各個測試的檢測對象。\
Please carefully read the loader code, **design the
function**`sort_pointer()`**so that all tests in**`main()`**are
passed**. Purpose of each tests are written in the comments.\

### The \"Address of every`arr[]`entries appears in`ptr_arr[]`\" Check

-   此檢查用來確定`arr[0]`\~`arr[n]`的位址都有出現在`ptr_arr[]`中一次且僅有一次。\
    The verifies that the addresses of`arr[0]`\~`arr[n]`appears
    in`ptr_arr[]`once and only once.

```{=html}
<!-- -->
```
-   以
    [XOR-sum](https://stackoverflow.com/questions/17284337/what-is-an-xor-sum)
    來執行 [checksum](https://en.wikipedia.org/wiki/Checksum)
    的方式檢查，有興趣可以點開連結閱讀。\
    Performing [checksum](https://en.wikipedia.org/wiki/Checksum) with
    the
    [XOR-sum](https://stackoverflow.com/questions/17284337/what-is-an-xor-sum)
    method to verify. You can read about it by clicking into the links.\

### **void** sort\_pointer**(int \*\***ptr\_arr**, int \***arr**, int** size**)**

-   **由大到小**排序指向`arr[]`之中各個元素的指標，存入`ptr_arr`之中。\
    Sort the values within`arr[]`in **descending order**, and store the
    pointer of the elements into`ptr_arr`.

-   你**不應該**對`arr`做出任何的改動。\
    You **should not** make any change to`arr`.

### Judging

------------------------------------------------------------------------

1.  本題的評分方法較為特殊，**你不需要自己撰寫任何關於輸出的程式碼**，而是觀察
    main function 的動作，補完程式碼並讓程式正確執行。\
    This is a custom judge problem. **You don\'t need to write any
    program outputting text**, finish the program so that the main
    function can be executed successfully.

2.  `assert()`這個 macro
    在**括號中的值為**`false`**時會報錯並直接結束程式**。你需要讓程式完整執行完才能獲得分數。\
    **When the expression with the parenthesis of the
    macro**`assert()`**evaluates to**`false`**, the program will raise
    an error and shut-down itself.** You must let the program fully
    execute in order to get the points.

### Trivia

------------------------------------------------------------------------

1.  `<type> **ptr` 等，稱作 **Pointer-to-Pointer**，而[不是 Double
    Pointer]{.underline}。

    Things like `<type> **ptr`, are called **Pointer-to-Pointer**, [not
    Double Pointer.]{.underline}

2.  兩個 pointer
    相減，得到的差的型態其實是`ptrdiff_t`而不是`int`，其定義於`<stddef.h>`中。\
    The result when subtracting two pointers actually has a type
    of`ptrdiff_t`, not`int`, defined in`<stddef.h>`.

</div>

### Input

The 1st line is a integer N, indicating how many entries are in the
array. 1 ≤ N ≤ 100 The 2nd line lists the entries of the array, starting
from index 0. All numbers appearing in the array are within the range
\[1, 1000\].

### Output

The program should successfully execute, Printing a single line of
string, \"All test passed successfully! :)\"

### Loader Code

<div>

Your code will be judge using this program:

</div>

    /* Loader Start */
    #include <‍stdio.h>
    #include <‍stdint.h>
    #include <‍assert.h>

    // Function Declairation 
    void sort_pointers(int **ptr_arr, int *arr, int size);

    // Main Function
    int main(){
        // Read length of array
        int N;
        scanf("%d", &N);
        
        // Read entries of array, starting from idx = 0, also store a copy
        int arr[N], backup[N];
        for(int i = 0; i <‍ N; ++i){
            scanf("%d", &arr[i]);
            backup[i] = arr[i];
        }

        // Sort the pointers of arr[] into ptr_arr[]
        int *ptr_arr[N];
        sort_pointers(ptr_arr, arr, N);

        // Check if arr[] is unchanged
        for(int i = 0; i <‍ N; ++i){
            assert(arr[i] == backup[i]);
        }

        // Check if all entry of ptr_arr[] are pointers of arr[] entries
        for(int i = 0; i <‍ N; ++i){
            assert((ptr_arr[i] >= arr) && (ptr_arr[i] <‍ &arr[N]));
        } 

        // Check if value pointed by pointers in ptr_arr[] are in descending order
        for(int i = 0; i <‍ N - 1; ++i){
            assert(*ptr_arr[i] >= *ptr_arr[i + 1]);
        }

        // Check if address of every arr[] entries appears in ptr_arr[]
        uintptr_t a = (uintptr_t)arr, b = (uintptr_t)ptr_arr[0];
        for(int i = 1; i <‍ N; ++i){
            a ^= (uintptr_t)&arr[i];
            b ^= (uintptr_t)ptr_arr[i];
        }
        assert(a == b);

        // Success if program runs until here.
        printf("All test passed successfully! :)\n");
        return 0;
    }

<div>

### Sample1

#### Input

    7 
    7 2 5 4 3 6 1

#### Output

    All test passed successfully! :)

</div>

<div>

### Sample2

#### Input

    5
    7 21 5 22 100

#### Output

    All test passed successfully! :)

</div>
