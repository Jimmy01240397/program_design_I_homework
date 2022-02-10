XOR Cipher
----------

### Description

<div>

Given a string of text, which is our input data, encrypt the data by
applying the bitwise XOR operator to every character using a given key.

![](/Lec20/XOR Cipher/images/c863db41704f71e81272da277a3016cbeda09d1d.png)For
example, given a plaintext data `TAs are so handsome` and the key `key`,
the result cipher is:

-   Plaintext data: `'T'`, `'A'`, `'s'`, `' '`, `'a'`, \...

-   Key: `'k'`,`'e'`, `'y'`, `'k'`, `'e'`, \...

-   Result (hex): `3f`, `24`, `0a`, `4b`, `04`, `0b`, `0e`, `45`, `0a`,
    `04`, `45`, `11`, `0a`, `0b`, `1d`, `18`, `0a`, `14`, `0e`

Note that you should output the raw result instead of hex value, which
means that it might contain invalid ascii characters in the output.

</div>

### Input

The first line is the key (1 \<= len(key) \<= 1000). The second line is
the given data (1 \<= len(data) \<= 10000).

### Output

The cipher text.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    key
    TAs are so handsome

#### Output

    ?$
    KE
    E
    
    

</div>

<div>

### Sample2

#### Input

    T/dz%-*u`IFa
    .EWS!1qH$a>^`4sG=U7SiVCY|M#^ (iNh8x3`<‍.9IIr"QM+(4S5yc[&m\8

#### Output

    zj3)[=D(x?4=x&    8(bG$C;q>R4JCldXW1mI`|QFv<‍q

</div>
