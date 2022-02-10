Odd Magic Square
----------------

### Description

<div>

The **odd** magic square consists of consecutive integers (starting with
1 and ending with n²) placed into`n`rows by `n` columns.

The sum of each row, each column and each diagonal are the same.

**Hint:**

1.  Place number 1 in the middle of first row.

2.  Check if the **upper right** grid is empty:

-   if empty: fill the next number in this **upper right** grid

-   if not empty: fill the next number in the **bottom of current grid**

3.  Check if the last step **exceeds the boundary**, you need to return
    to the **other side**.

    You can see the following example to understand the process !

奇數魔方陣是指在`n`x`n`的方陣中，放入從1開始到n\^2的連續數字。

使每一行、每一列與每條對角線的和皆相同。

提示:

1.  首先在第一列的最中間那個方格填入1。

2.  接著檢查該方格的**右上方**是否為空的:

-   如果是空的: 將下個數字填入**右上方的方格**

-   如果不是空的: 將下個數字填入**當前方格的正下面那格**

3.  如果在上一步會**超出邊界**，則需要返回**另一邊**

    你可以看下方的範例來了解過程!

**For example:**`n` **= 3**

step1:

0 **1** 0

0 0 0

0 0 0

step2:

0 1 0

0 0 0

0 0 **2**

step3:

0 1 0

**3** 0 0

0 0 2

step4:

0 1 0

3 0 0

**4** 0 2

Finally, after 9 steps:

8 1 6

3 5 7

4 9 2

</div>

### Input

There is an odd integer between 1 and 50

### Output

Output the square. There is a space after each number.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    5

#### Output

    17 24 1 8 15 
    23 5 7 14 16 
    4 6 13 20 22 
    10 12 19 21 3 
    11 18 25 2 9 

</div>

<div>

### Sample2

#### Input

    7

#### Output

    30 39 48 1 10 19 28 
    38 47 7 9 18 27 29 
    46 6 8 17 26 35 37 
    5 14 16 25 34 36 45 
    13 15 24 33 42 44 4 
    21 23 32 41 43 3 12 
    22 31 40 49 2 11 20 

</div>
