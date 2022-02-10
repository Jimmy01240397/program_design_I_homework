Combination Again (Oh come on)
------------------------------

### Description

<div>

Although you guys have done Combination in lecture 7 before (right?),
you all notice that a factorial of a large number may cause overflow
even with type `unsigned long`(what a nightmare. We all have learnt that
there is another definition of combination:

C(n, m) =

1.  `1`, if m == 0 or m == n

2.  `C(n - 1, m - 1) + C(n - 1, m)`, otherwise

Please try to calculate the combination again with this definition.

</div>

### Input

A line with two integers represent n and m respectively. (1 \<= m \<= n
\<= 30)

### Output

An integer which represents C(n, m).

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    25 8

#### Output

    1081575

</div>

<div>

### Sample2

#### Input

    28 25

#### Output

    3276

</div>
