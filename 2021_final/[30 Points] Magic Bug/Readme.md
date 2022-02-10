\[30 Points\] Magic Bug
-----------------------

### Description

<div>

司波達也是名魔法工程師，平常的工作是替客戶調校及改善魔法道具（想不到吧，魔法也跟程式一樣喔～），今天他接到了一個棘手的案子，不管用什麼方式都找不到
Bug
在哪裡，因此他決定直接把魔法道具的記憶體倒出來看看，請你幫他開寫一支程式來印出魔法道具的記憶體內容。

你的程式會得到兩個數字：stb 跟 num，其中 num 是長度固定為 8
位元組的數字，而 stb
代表司波想要檢測的記憶體內容的開頭。司波每次固定檢查從 stb 開始的 8
個位元，為了避免模糊焦點，請將不需要被檢測的記憶體內容設為 0。

Tatsuya is a magic engineer whose daily job is to calibrate and improve
the magic tools. One day he got sucked in a tricky job that an unknown
bug takes him a week and still no progress. To find out the mistake of
the magic program, he decides to dump the entire memory of the magic
tool, please help him to fulfill that.

Your program will recieve two integer: stb and num, where num is an
8-byte number, and stb indicates the begining bit that Tatsuya
interested in. Notice that only 8 bits will be checked each time, please
zero out the rest of bits to zero before print out the content.

![Screenshot from 2022-01-10
18-58-51.png](/2021_final/%5B30%20Points%5D%20Magic%20Bug/images/510d94bb3ee8cb778ce3016d5ce8f1426d60c836.png)

![](http://5b0988e595225.cdn.sohucs.com/images/20190310/8e8de645effc4993a1da8e22bbf7006d.gif)

</div>

### Input

輸入的第一行是一個整數 N 代表記憶體內容的數量，之後的 N
行皆是記憶體內容，且輸入符合「stb-num」的格式，其中 stb
代表要檢查的記憶體區段的起始位置，而 num 為一個固定為 8 位元組的 16
進位數字。 The first line contains an integer N that indicates the
number of memory contents to print. The rest of N lines are the memory
content in the format \"stb-num\" where stb indicates the start bit, and
num is an integer in hex format with fixed length in 8 bytes.

### Output

對於每行記憶體內容，請印出相對應的二進位內容。 N lines of integers in
binary format, there should be a whitespace between two bytes of with in
an integer.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    6
    6-0x36c3bf4154901a51
    24-0x6cd08f786630bc7d
    7-0x49662b322f44fe5
    4-0xd19c56a0052f04e
    24-0x50f25f5349ba72e6
    27-0x4486df6f6fdda642

#### Output

    00000000 00000000 00000000 00000000 00000000 00000000 00011010 01000000 
    00000000 00000000 00000000 00000000 01100110 00000000 00000000 00000000 
    00000000 00000000 00000000 00000000 00000000 00000000 01001111 10000000 
    00000000 00000000 00000000 00000000 00000000 00000000 00000000 01000000 
    00000000 00000000 00000000 00000000 01001001 00000000 00000000 00000000 
    00000000 00000000 00000000 00000111 01101000 00000000 00000000 00000000 

</div>

<div>

### Sample2

#### Input

    11
    48-0x3f9b91e666a0e8b
    15-0x64feb3044281b8ad
    25-0x5256e33a7882f5d1
    47-0x75f7469226eb2fdd
    27-0xe1013e93f389ce9
    45-0x74205f5211db3a0
    18-0xf58b2e3427ec21d
    15-0x65e523c00e7427f3
    9-0x49028dfe4917ca7e
    20-0x70222da20482132a
    30-0x373d4c0b087bcc49

#### Output

    00000000 11111001 00000000 00000000 00000000 00000000 00000000 00000000 
    00000000 00000000 00000000 00000000 00000000 00000001 10000000 00000000 
    00000000 00000000 00000000 00000000 01111000 00000000 00000000 00000000 
    00000000 01110111 00000000 00000000 00000000 00000000 00000000 00000000 
    00000000 00000000 00000000 00000001 00111000 00000000 00000000 00000000 
    00000000 00000010 00000000 00000000 00000000 00000000 00000000 00000000 
    00000000 00000000 00000000 00000000 00000010 01111100 00000000 00000000 
    00000000 00000000 00000000 00000000 00000000 01110100 00000000 00000000 
    00000000 00000000 00000000 00000000 00000000 00000001 11001010 00000000 
    00000000 00000000 00000000 00000000 00000100 10000000 00000000 00000000 
    00000000 00000000 00000000 00001011 00000000 00000000 00000000 00000000 

</div>

<div>

### Sample3

#### Input

    6
    7-0x1151b9a4384027f7
    26-0x5d63ecf71ec5a259
    54-0x606a23ce0dfa5d1c
    19-0x1f4b24710d61928b
    1-0xbd1352f748aa177
    42-0xad8c1441228c898

#### Output

    00000000 00000000 00000000 00000000 00000000 00000000 00100111 10000000 
    00000000 00000000 00000000 00000011 00011100 00000000 00000000 00000000 
    00100000 01000000 00000000 00000000 00000000 00000000 00000000 00000000 
    00000000 00000000 00000000 00000000 00000101 01100000 00000000 00000000 
    00000000 00000000 00000000 00000000 00000000 00000000 00000001 01110110 
    00000000 00000000 11000000 00000000 00000000 00000000 00000000 00000000 

</div>

<div>

### Sample4

#### Input

    1
    26-0x463180af3385451e

#### Output

    00000000 00000000 00000000 00000011 00110000 00000000 00000000 00000000 

</div>
