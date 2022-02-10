Rotate Image
------------

### Description

<div>

In computer, everything is represented by numbers --- so does image.
Computer stores image as a matrix. A cell in the matrix is a pixel in
the image, and number in the cell represents the color of that pixel.

If we want to rotate an image, it means that we want to rotate the
matrix itself. For example, consider an image as follows:

`| 1 2 3 |`\
`| 4 5 6 |`\
`| 7 8 9 |`

If we want to **rotate this image 90 degrees to the right**, we can
rotate the matrix like this:

`| 7 4 1 |`\
`| 8 5 2 |`\
`| 9 6 3 |`

Now given the degree of **right rotation**, can you help me rotate my
images?

在電腦裡，所有東西都是用數字來表達的------就連圖片也不例外。電腦以矩陣的形式來儲存每一張圖片，矩陣裡的格子代表著圖片的像素，而格子裡的數字就代表了該像素的顏色。

當我們要對圖片做旋轉時，我們實際上就是在旋轉這個矩陣本身。舉例來說，如果有一張圖片長這樣：

`| 1 2 3 |`\
`| 4 5 6 |`\
`| 7 8 9 |`

如果我們想將這張圖片**向右旋轉 90 度**，那麼就等於是把矩陣旋轉成這樣：

`| 7 4 1 |`\
`| 8 5 2 |`\
`| 9 6 3 |`

給定**向右旋轉的角度**，你能將圖片做正確的旋轉嗎？

</div>

### Input

The input consists of 3 part. The first line is an integer, indicates
the degree of right rotation. It will be one of the following numbers:
90, 180 or 270. The second line contains 2 integers m & n, indicates the
dimension of the image. And 3 \<= m, n \<= 100. The following m lines
contain n integers, representing the image itself. Each integer in the
image is in the range of \[0, 100\].

### Output

The rotated image. Each number must follow by a space. You need to print
newline at the end of last line.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    90
    3 4
    1 5 6 7
    5 8 9 2
    3 0 4 7

#### Output

    3 5 1 
    0 8 5 
    4 9 6 
    7 2 7 

</div>
