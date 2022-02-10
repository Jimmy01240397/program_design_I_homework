Poker Hand
----------

### Description

<div>

There are four people `A` ,`B` ,`C` ,`D` . Each of them has one poker
hand which consists of five cards. Each card in the hand will have both
a suit (`clubs`, `diamonds`, `hearts`, or `spades`) and a rank (`2`,
`3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `jack`, `queen`, `king`, or
`ace`). Write a program that prints out their order **from highest to
lowest**.

The categories of hand, from highest to lowest, are listed below:

1.  straight flush (both a straight and a flush)

2.  four-of-a-kind (four cards of the same rank)

3.  full house (a three-of-a-kind and a pair)

4.  flush (five cards of the same suit)

5.  straight (five cards with consecutive ranks)

6.  three-of-a-kind (three cards of the same rank)

7.  two pairs

8.  pair (two cards of the same rank)

9.  high card (any other hand)

We abbreviate ranks and suits as follows (letters may only be
lower-case):

Ranks: `2 3 4 5 6 7 8 9 t j q k a`

Suits: `c d h s`

Cards are always **compared by rank first**, and only then by suit. We
compare suits using the **\'reverse alphabetical order\'** ranking:
spades (highest), hearts, diamonds, clubs (lowest).

If any number of poker hands are **in the same category**, follow the
rules below (simplified, not the standard way):

1.  straight flush: The one with the higher ranking top card is better.
    If they are the same, compare the suit of the top cards. (for
    straight: `2 3 4 5 6` \~ `t j q k a`)

2.  four-of-a-kind: The one with the higher ranking set of four cards is
    better.

3.  full house: The one with the higher ranking set of three cards is
    better.

4.  flush: Same as 1.

5.  straight: Same as 1.

6.  three-of-a-kind: Same as 3.

7.  two pairs: The hand with the highest ranking pair wins. If they have
    the same rank, compare the highest suit of the highest ranking pair.

8.  pair: Same as 7.

9.  high card: Same as 1.

Note: not allow the use of jokers, and assume that aces are high.

</div>

### Input

The input contains four lines. Each line is followed by a newline
character. These four lines also represent four hands of five cards for
A, B, C, D respectively.

### Output

List A, B, C, D in the order from best to worst according to their poker
hands. Each letter is followed by a space.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    ts js qs ks as
    9s 9h 9d 9c 8s
    8h 8d 8c 7s 7h
    6s 6h 6d 5s 4s

#### Output

    A B C D 

</div>

<div>

### Sample2

#### Input

    ts js qh as kh
    3d 3s 3h 2h 2s
    jc qc kc 7c 8c
    2c 3c 4c 5c 6c

#### Output

    D B C A 

</div>

<div>

### Sample3

#### Input

    ah 3h 4h 9h th
    8h 8s jh jd 4c
    2s 2d 2c 2h 3s
    jc js 5h 5c 3d

#### Output

    C A D B 

</div>
