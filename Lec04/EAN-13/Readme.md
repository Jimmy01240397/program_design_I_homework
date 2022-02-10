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
