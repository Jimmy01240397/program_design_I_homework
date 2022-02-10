Permutation
-----------

### Description

<div>

Given a string with n alphabets(A\~Z), print all permutations of it in
alphabetical order. For example, if the input string is `ABC`, then
output should be

`ABC`

`ACB`

`BAC`

`BCA`

`CAB`

`CBA`

**Hint**: You can use recursion to solve this problem.

![Image](/2020_final/Permutation/images/152d2e4bbad027b8fac1f21a65ef0dcf47ad80db.png)

------------------------------------------------------------------------

給定一字串有 n 個相異的字母(A\~Z)，請列出此 n
個字母的所有排列可能性。(依照字典序輸出)

例如輸入為 `ABC`則輸出

`ABC`

`ACB`

`BAC`

`BCA`

`CAB`

`CBA`

**Hint**: 遞迴

</div>

### Input

A string with n alphabets.(1\<=n\<=6)

### Output

Print out n! kinds of permutations. Each permutation is followed by a
newline character \'\\n\'.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    BAKQ

#### Output

    ABKQ
    ABQK
    AKBQ
    AKQB
    AQBK
    AQKB
    BAKQ
    BAQK
    BKAQ
    BKQA
    BQAK
    BQKA
    KABQ
    KAQB
    KBAQ
    KBQA
    KQAB
    KQBA
    QABK
    QAKB
    QBAK
    QBKA
    QKAB
    QKBA

</div>

<div>

### Sample2

#### Input

    ACEG

#### Output

    ACEG
    ACGE
    AECG
    AEGC
    AGCE
    AGEC
    CAEG
    CAGE
    CEAG
    CEGA
    CGAE
    CGEA
    EACG
    EAGC
    ECAG
    ECGA
    EGAC
    EGCA
    GACE
    GAEC
    GCAE
    GCEA
    GEAC
    GECA

</div>
