Collatz conjecture (3n + 1 Problem)
-----------------------------------

### Description

<div>

**Collatz conjecture**, also known as **3n+1 problem**, which is a
conjecture in mathematics that is about a sequence defined as follows:
Let `S1` be a positive integer which is the start of the sequence, and

-   if `Sn` is **even**, then `Sn+1 = Sn / 2`

-   if `Sn` is **odd**, then `Sn+1 = 3 * Sn + 1`

The conjecture is that for any given positive integer `S1` (\<= 10\^5),
the sequence will reach 1.

e.g. Given `S1 = 22`, the sequence will be:
`22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1`

As students of NCKU, we are interested in this conjecture, please write
a program to help us do some research in this conjecture.

</div>

### Input

A positive integer S1, (1 \<= S1 \<= 10\^5)

### Output

Two integer L, M within a line, where L represents the length of the
sequence and M is the maximum number of the sequence.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    22

#### Output

    16 52

</div>

<div>

### Sample2

#### Input

    999

#### Output

    50 11392

</div>
