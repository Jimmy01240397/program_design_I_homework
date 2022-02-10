Secret Value
------------

### Description

<div>

~~2021/11/05 Updated Description! (Incorrect, Removed)~~

[2021/11/09 **Added information about calculating GCD(a,
0).**]{.underline}

------------------------------------------------------------------------

David is trying to calculate the \"secret value\" of numbers.\
The secret value of integer `N` is calculated as:

1.  **If** `N` **is a one-digit integer, the secret value is itself.**

2.  Split the number into upper part and lower part.\
    If there are an odd number of digits, the middle digit belongs to
    the lower part.

    -   The integer 121088 gets divided into 121 and 088.

    -   The integer 12345 gets divided into 12 and 345

3.  Find the two parts\' **greatest common divisor(GCD)**. The result is
    called `k`.

    -   Please keep in mind that **GCD(a, 0) = GCD(0, a) = \|a\|.**

    -   The result of GCD(a,b) is the greatest non-negative integer k
        satisfices that a = ck, b = dk. Read
        [This](https://en.wikipedia.org/wiki/Greatest_common_divisor#Definition)
        to know more.

4.  Sum up `N` **itself** and the **secret value of** `k`.

**David hate huge numbers, so you MUST answer in modular 10007.\
Your work will be judged by** [**running the loader
section**]{.underline}**, so please implement the functions provided!**

------------------------------------------------------------------------

### Example (Sample Input 1)

For `N` = 2424, we can split it into 24 and 24, whose GCD is also 24, so
the result `k` of 2424 is 24.\
Now we need to know the secret number of 24 to sum up with `N`.

For `N`= 24, we can split it into 2 and 4, whose GCD is 2, so the result
`k` of 24 is 2.

Since 2 has only one digit, the secret value of 2 is 2

Hence, we can get the secret value of [2424 = 2424 + secret value of 24
= 2424 + 24 + secret value of 2 = 2450]{.underline}

</div>

### Input

A single integer N 1 ≦ N ≦ 2,147,483,647

### Output

The secret value of N, mod 10007

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #define MODULUS 10007
    int getSecret(int n);
    int gcd(int a, int b);

    int main(){
        int n;
        scanf("%d", &n);
        printf("%d", getSecret(n));
        return 0;
    }

<div>

### Sample1

#### Input

    2424

#### Output

    2450

</div>

<div>

### Sample2

#### Input

    99

#### Output

    108

</div>

<div>

### Sample3

#### Input

    121088

#### Output

    1016

</div>
