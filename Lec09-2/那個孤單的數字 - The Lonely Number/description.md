那個孤單的數字 - The Lonely Number
----------------------------------

### Description

<div>

這個世界是上時時刻刻都在發生著排擠的狀況，就連數字的世界也是。真可憐。\
給定 `N`
個的數字，依據以下規則將其全部分成三個數字一組的小組，請你找到無法被分組的那個可憐蟲。\
Every second, someone is getting excluded from his group, and so does it
happens in the world of numbers.\
Given N numbers, group them into triads according to the following
rules. Please find the lonely pitiful number.

-   每個數組中的三個數字 a, b, c，必須可以滿足 a + b = c。\
    The 3 numbers a, b, c in each groups must satisfy the formula a + b
    = c.

-   **提供的數字可能重複，但各個成員只能被使用一次**。\
    **Each numbers might be given many times, but each occurrence can
    only be used once.**

    -   E.g.,
        `input = [1, 2, 3, 1, 2, 3, 8], group = [[1, 2, 3], [1, 2, 3]], output = [8]`

-   `N` = 3k + 1，`k` ∈ ℕ，必定可以組成 `k` 個數組。\
    `N` = 3k + 1, `k` ∈ ℕ. It is guaranteed that `k` different triads
    can be made.

-   每組輸入皆只有一個正確的孤單數字，但有**可能有不同的分組方法**。\
    Each set of inputs are guaranteed to have only 1 correct lonely
    number, but **might have multiple ways to group the numbers**.

### Sample Description

**nums = \[1, 2, 3, 3\]\
**可以組成`[[1, 2, 3]]`而多餘的 3 會被留下來，因此輸出為 3。\
Can be grouped into`[[1, 2, 3]]`, with the redundant 3 getting excluded,
so the output should be 3.

**nums = \[1, 3, 4, 2, 2, 4, 3, 5, 8, 3\]\
**可以被分成`[[1, 2, 3], [2, 3, 5], [4, 4, 8]]`，或`[[1, 3, 4], [2, 2, 4], [3, 5, 8]]`，皆會留下一個孤單的
3，因此輸出為 3。\
Can be grouped
into`[[1, 2, 3], [2, 3, 5], [4, 4, 8]]`or`[[1, 3, 4], [2, 2, 4], [3, 5, 8]]`,
both excluding the redundant 3, so the output is also 3.\

</div>

### Input

First line consists a integer, tells how many numbers will be given. 1 ≤
N ≤ 50，N = 3k + 1，k ∈ ℕ Following is N numbers each separated with a
space. 1 ≤ k ≤ 100

### Output

The single lonely number. You don\'t need to mind what are the groups.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    4
    1 2 3 3

#### Output

    3

</div>

<div>

### Sample2

#### Input

    10
    1 3 4 2 2 4 3 5 8 3

#### Output

    3

</div>

<div>

### Sample3

#### Input

    13
    2 8 4 2 2 5 8 3 5 8 3 4 2

#### Output

    8

</div>
