Caesar Cipher Encoder
---------------------

### Description

<div>

The Caesar cipher (a cipher is a method of encrypting data) is one of
the simplest and most widely known encryption techniques. For English
text, the Caesar cipher would work by taking each letter in the
plaintext message and substituting the letter that is `k` letters latter
(allowing wraparound; that is, having the letter **z** followed by the
letter **a**) in the alphabet.

For example, if `k = 3`, then the letter **a** in plaintext becomes
**d** in ciphertext, **B** in plaintext becomes **E** in ciphertext, and
the plaintext message **\"bob, i love you. Alice\"** becomes **\"ere, l
oryh brx. Dolfh\"** in ciphertext. Note that `k` may be negative. It
means that you should substitute the letter in the plaintext message
that is `|k|` letters earlier.

Write a program that prints out the Caesar cipher for the given input
(described in Input Format).

Note: Transform only English alphabet (case-preserving) and preserve
other characters such as Arabic numerals or punctuation.

</div>

### Input

The input contains two lines. Both lines are followed by a newline
character. The first line contains an integer for k (-10000 \<= k \<=
10000), and the second line is a plaintext message.

### Output

Output the ciphertext of the plaintext message in the input using the
Caesar cipher. There is no newline character at the end of the output.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    7
    TAs of the PD1 course are so handsome !!!

#### Output

    AHz vm aol WK1 jvbyzl hyl zv ohukzvtl !!!

</div>

<div>

### Sample2

#### Input

    -105
    a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z.

#### Output

    z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y.

</div>
