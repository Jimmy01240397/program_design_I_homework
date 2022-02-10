Calculating Volume
------------------

### Description

<div>

Read an integer `mode`, you need to calculate the volume for the mode.
In different modes, you need to read different number of double
precision floating-points and then print out the volume that is rounded
to 2 decimal places. The followings are 4 modes:

1.  Mode 1:\
    In this mode, you need to `scanf` **a double precision
    floating-point which represents the length of cube(立方體)**.\
    **volume = length \* length \* length.**

2.  Mode 2:\
    In this mode, you need to `scanf` **three double precision
    floating-points which sequentially represent length, width and
    height of cuboid(長方體)**.\
    **volume = length \*** ** **width \* height.**

3.  Mode 3:\
    In this mode, you need to `scanf` **two double precision
    floating-points which sequentially(依序) represents the radius and
    height of cylinder(圓柱體)**.\
    **volume = 3.14 \* radius \* radius \* height.**

4.  Mode 4:\
    In this mode, you need to `scanf` **an double precision
    floating-point which represents the length of
    regular tetrahedron(正四面體).\
    volume = √2 / 12 \* length \* length \* length.**

Given 1 \<= `mode`\<= 4, each double precision floating-point is in
range 1 \~ 100

------------------------------------------------------------------------

**Hint**:

1.  You can use the **sqrt()** and **pow()** function by using the
    following preprocessor directive:\
    `#include <math.h>`

2.  All the values should be double precision floating-point, including
    **PI(3.14)**.

讀入一個整數
`mode`，你必須計算該模式下的體積。在不同模式中，你必須要能讀入不同個數的雙精度浮點數(double)並且印出體積(四捨五入至小數點後第2位)。以下為4種模式
:

1.  模式 1:\
    在模式 1 中，你必須 `scanf`
    **一個雙精度浮點數代表立方體的長度(length)**。\
    **立方體體積 = 長度 \* 長度 \* 長度。**

2.  模式 2:\
    在模式 2 中，你必須 `scanf`
    **三個雙精度浮點數依序代表長方體的長(length)、寬(width)、高(height)**。\
    **長方體體積 = 長 \* 寬 \* 高**。

3.  模式 3:\
    在模式 3 中，你必須 `scanf`
    **兩個雙精度浮點數依序代表圓柱體的半徑(radius)、高(height)**。\
    **圓柱體體積 = 3.14 \* 半徑 \* 半徑 \* 高**。

4.  模式 4:\
    在模式 4 中，你必須 `scanf`
    **一個雙精度浮點數代表四面體的長度(length)**。\
    **四面體體積 = √2 / 12 \* 長度 \* 長度 \* 長度**。

給定 1 \<= `mode` \<= 4 且每個雙精度浮點數的範圍會在 1 \~ 100。

------------------------------------------------------------------------

**提示:**

你可以藉由使用`#include<math.h>` 來呼叫函式 **sqrt()** 和 **pow()**。

所有的值都必須使用雙精度浮點數來計算，包含**PI(3.14)**。

</div>

### Input

Include 2 lines. First line represents the mode. Second line is the
information for the mode.

### Output

Double precision floating-point is rounded to 2 decimal places.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    1
    6

#### Output

    216.00

</div>

<div>

### Sample2

#### Input

    2
    6 8 10

#### Output

    480.00

</div>
