\[20 Points\] String Combination
--------------------------------

### Description

<div>

沒有錯，又是組合！

給予 n 個字串及數字 k，請將所有可能的組合列出來。

例如：給予 `n = 5`, `k = 2`，以及 `andy becky cindy jacky willy`
五個字串，

代表從 5 個字串中挑選 2
個出來，注意，須根據字串給予時的順序組合進行列印。詳細請見範例。

------------------------------------------------------------------------

Yah, Combination Again!

Given n strings and number k, please print all possible combinations
out.

For example, given `n = 5`, `k = 2`, and `andy becky cindy jacky willy`
five strings,

which means that you have to choose 2 strings from the 5 strings.

Notice that you need print out them according to the given order. See
examples.

</div>

### Input

輸入第一行為 n 跟 k，第二行有 n 個字串（以空格分開）。 1 \<= n \<=
20，且每個字串不超過十個字。 Print out k strings from the n strings,
according to the given order in the input.

### Output

印出 n 個字串取 k 個的結果，須根據字串給予時的順序組合進行列印。 Print
out k strings from the n strings, according to the given order in the
input.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    5 2
    andy becky cindy jacky willy

#### Output

    andy becky 
    andy cindy 
    andy jacky 
    andy willy 
    becky cindy 
    becky jacky 
    becky willy 
    cindy jacky 
    cindy willy 
    jacky willy 

</div>

<div>

### Sample2

#### Input

    5 3
    andy becky cindy jacky willy

#### Output

    andy becky cindy 
    andy becky jacky 
    andy becky willy 
    andy cindy jacky 
    andy cindy willy 
    andy jacky willy 
    becky cindy jacky 
    becky cindy willy 
    becky jacky willy 
    cindy jacky willy 

</div>

<div>

### Sample3

#### Input

    8 1
    andy becky cindy jacky larry mandy sandy willy

#### Output

    andy 
    becky 
    cindy 
    jacky 
    larry 
    mandy 
    sandy 
    willy 

</div>
