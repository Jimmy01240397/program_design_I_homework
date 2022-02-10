Image Editor
------------

### Description

<div>

In computer, everything is represented by numbers --- so does image.
Computer stores image as a matrix. A cell in the matrix is a pixel in
the image, and number in the cell represents the color of that pixel.

Today, Ariel wants to do a image editor which can rotate, flip
vertically, flip horizontally and crop images.

There are five operations, rotate(**r**), vertical flip(**v**),
horizontal flip(**h**), crop(**c**), output(**p**) images.

For example, consider an image as follows:

`| 1 2 3 |`\
`| 4 5 6 |`\
`| 7 8 9 |`

1.  Rotate(**r**)

    Two parameters are rotating the image 90 degrees to right or
    left(**l**/**r**) and the number of rotations, respectively. For
    example:

    `r r 10` rotate the image 90 degrees to right 10 times.

    `r l 1` rotate the image 90 degrees to left once.

    If we want to **rotate this image 90 degrees to the right**, we can
    rotate the matrix like this:

    `| 7 4 1 |`\
    `| 8 5 2 |`\
    `| 9 6 3 |`

2.  vertical flip(**v**)

    \"flip\" or \"mirror\" an image in the vertical direction (up-down).

    `| 7 8 9 |`\
    `| 4 5 6 |`\
    `| 1 2 3 |`

3.  horizontal flip(**h**)

    \"flip\" or \"mirror\" an image in the horizontal direction
    (left-right).

4.  crop(**c**)

    Four parameters are left, right, upper, lower boundary. For example:

    `c 1 1 1 3`

    Then the new image is:

    `| 1 |`\
    `| 4 |`\
    `| 7 |`

5.  output(**p**)

    Output the current image!

------------------------------------------------------------------------

在電腦裡，所有東西都是用數字來表達的------就連圖片也不例外。電腦以矩陣的形式來儲存每一張圖片，矩陣裡的格子代表著圖片的像素，而格子裡的數字就代表了該像素的顏色。

今天 Ariel 想要做個圖片編輯器，可以旋轉、垂直/水平翻轉以及裁切圖片。

共有五種操作，分別為旋轉(**r**)、垂直翻轉(**v**)、水平翻轉(**h**)、裁切圖片(**c**)、輸出圖片(**p**)

如果有一張圖片長這樣：

`| 1 2 3 |`\
`| 4 5 6 |`\
`| 7 8 9 |`

經過不同操作，會得到不同的結果。

一、 旋轉(**r**)

後面會有兩個參數，分別為向左/向右旋轉 90
度(**l**/**r**)以及會旋轉幾次，ex:

`r r 10` 向右旋轉 10 次

`r l 1` 向左旋轉 1 次

當我們要對圖片做旋轉時，我們實際上就是在旋轉這個矩陣本身。

如果我們想將這張圖片**向右旋轉 90 度**，那麼就等於是把矩陣旋轉成這樣：

`| 7 4 1 |`\
`| 8 5 2 |`\
`| 9 6 3 |`

二、垂直翻轉(**v**)

從上向下 180 度翻轉。

`| 7 8 9 |`\
`| 4 5 6 |`\
`| 1 2 3 |`

三、水平翻轉(**h**)

從左向右 180 度翻轉。

`| 3 2 1 |`\
`| 6 5 4 |`\
`| 9 8 7 |`

四、裁切圖片(**c**)

後面會有四個參數，分別為左邊界、右邊界、上邊界、下邊界，ex:

`c 1 1 1 3`

經過裁切後

`| 1 |`\
`| 4 |`\
`| 7 |`

五、輸出圖片(**p**)

將目前的圖片輸出!

</div>

### Input

The second line contains 2 integers m & n, indicates the dimension of
the image. And 1\<= m, n \<= 100. The following m lines contain n
integers, representing the image itself. Each integer in the image is in
the range of \[0, 1000\]. Then, an integer x represents the number of
operations. The following x lines are operations, execute operations
according to the operation\'s format.

### Output

Output the current image while executing \'p\' operation. Each number
must follow by a space. You need to print newline at the end of last
line.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    2 4
    1 2 3 4
    5 6 7 8
    6
    r r 1
    p
    h
    p
    c 1 2 3 4
    p

#### Output

    5 1 
    6 2 
    7 3 
    8 4 

    1 5 
    2 6 
    3 7 
    4 8 

    3 7 
    4 8 

</div>

<div>

### Sample2

#### Input

    3 4
    274 2 100 5
    222 1 50 70
    10 44 34 79
    8
    v
    p
    c 2 4 1 3
    p
    r l 11
    p
    r r 22
    p

#### Output

    10 44 34 79 
    222 1 50 70 
    274 2 100 5 

    44 34 79 
    1 50 70 
    2 100 5 

    2 1 44 
    100 50 34 
    5 70 79 

    79 70 5 
    34 50 100 
    44 1 2 

</div>
