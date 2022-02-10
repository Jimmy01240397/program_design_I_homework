Lec04
=====

EAN-13
------

### Description

<div>

In Taiwan, manufacturers of goods put a barcode on each product. This
code identifies both the manufacturer and the product. Among a variety
of different formats of the barcodes, one of these is known as EAN-13,
which represents a thirteen-digit number. For example: 4 710367 663270.

The EAN-13 is composed of the following four components:

1.  GS1 prefix: The first three digits usually identify the GS1 Member
    Organization which the manufacturer has joined.

2.  Manufacturer code: This is a unique code (variable-length) assigned
    to each manufacturer by the numbering authority indicated by the GS1
    Prefix.

3.  Product code: The product code, which immediately follows
    manufacturer code, is assigned by the manufacturer.

4.  Check digit: This is an additional digit, used to verify that a
    barcode has been scanned correctly.

To calculate the check digit, follow the three steps below:

1.  Numbering the positions from the right (exclude check digit), the
    odd positions in the twelve-digit number are weight of 3 and the
    even positions are weight of 1. Multiply each data digit with its
    corresponding weight.

    For example:

    > data: 4 7 1 0 3 6 7 6 6 3 2 7
    >
    > weight: 1 3 1 3 1 3 1 3 1 3 1 3

2.  Calculate the sum of the results from step 1.

3.  Subtract the sum from **the nearest multiple of 10 that is equal to
    or higher than the sum (see hint)**. The result is the check digit.

Write a program that calculate the check digit.

Reference: <https://en.wikipedia.org/wiki/International_Article_Number>

</div>

### Input

Three integers (1 digit, 6 digits and 5 digits) which form the first
twelve-digit number of the EAN-13.

### Output

Output the check digit that your program calculate.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    4 710367 66327

#### Output

    0

</div>

<div>

### Sample2

#### Input

    4 006381 33393

#### Output

    1

</div>

Lena\'s pudding plan
--------------------

### Description

<div>

Lena loves to eat pudding, one day, she receives several boxes of
puddings from her friend Anetta. The puddings are handmade and can only
leave for a week. Lena does not want any pudding to become spoiled, and
she wants to have the same number of puddings each day. Please help her
to deal with a plan to take these puddings in the coming week.

There are three boxes of puddings, you have to find out how many
puddings that Lena can take in each day of a week (**7 days**),
moreover, how many puddings will be left if she wishes to have the same
number of puddings each day.

![](https://c.tenor.com/mYhkXUCEi00AAAAC/86eighty-six-86anime.gif)

</div>

### Input

Three integers in a single line that indicates the number of puddings in
each box. There are not more than 10000 puddings in each box.

### Output

Two integers x and y in a single line, where x indicates the number of
puddings that Lena can take for each day, and y means the number of
puddings left.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    9112 9213 1709

#### Output

    2862 0

</div>

<div>

### Sample2

#### Input

    4972 1970 979

#### Output

    1131 4

</div>

<div>

### Sample3

#### Input

    1287 5609 393

#### Output

    1041 2

</div>

<div>

### Sample4

#### Input

    2551 229 8342

#### Output

    1588 6

</div>

Polynomial Calculation
----------------------

### Description

<div>

Read a floating-point number for `x` and calculate the value of the
following polynomial:

> 𝟕𝐱⁴ - 𝟖𝐱³ - 𝐱² + 𝟔𝐱 - 𝟐𝟐

</div>

### Input

A floating-point number to read for x.

### Output

The result should be displayed with one digit after the decimal point.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    5.5

#### Output

    5055.2

</div>

<div>

### Sample2

#### Input

    0

#### Output

    -22.0

</div>

Temperature conversion
----------------------

### Description

<div>

Give you a floating-point number that represent Celsius. Please convert
it to Fahrenheit. Fahrenheit = Celsius \*9/5 + 32

</div>

### Input

A floating-point number that represent Celsius. (-273.15 \<= t \<=
10\^4)

### Output

A floating-point number with two digits after the decimal point that
represents Fahrenhelt.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    4794.71

#### Output

    8662.48

</div>

<div>

### Sample2

#### Input

    5970.84

#### Output

    10779.51

</div>

