Beverage Shop
-------------

### Description

<div>

Cody has a beverage shop. The following drinks are what he offered:

-   Green tea **G** (500mL): 20 NTD

-   Black tea **B** (500mL): 20 NTD

-   Tieguanyin tea **T** (500mL): 30 NTD

-   White gourd tea **W** (500mL): 15 NTD

-   Tieguanyin green tea **GT** (Tieguanyin tea 250mL + green tea
    250mL): 45 NTD

-   White gourd Tieguanyin tea **WT** (Tieguanyin tea 350mL + white
    gourd tea 150mL): 40 NTD

-   Black tea Latte **BM** (black tea 200mL + milk 300mL): 35 NTD

-   Tieguanyin Latte **TM** (Tieguanyin tea 200mL + milk 300mL): 45 NTD

-   White gourd Latte **WM** (White gourd tea 200mL + milk 300mL): 30
    NTD

The sugar and ice level of each drink are adjustable. Assume that there
are 5 levels for both sugar and ice:

-   Sugar:

    1.  No sugar: 0g

    2.  Low sugar: 3g

    3.  Half sugar: 5g

    4.  Less sugar: 7g

    5.  Standard: 10g

-   Ice:

    1.  No ice: 0g

    2.  Low ice: 30g

    3.  Less ice: 50g

    4.  Normal: 70g

    5.  Extra ice: 100g

Given the ingredient of each drink and list of sales, please help Cody
calculate how much ingredient remained and how much he earned.

</div>

### Input

The input consists of several lines. The first 7 numbers are the amount
of each ingredient. The orders are black tea (L)/ White gourd
(L)/Tieguanyin tea (L)/green tea (L)/milk (L)/sugar (kg)/ice (kg). The
2nd line is the number of sales n. The last n lines are the content of
each sale, which consists of the type of the beverage, sugar level and
ice level.

### Output

The first line contains the remained amount of each ingredient. The
second line is how much Cody earned.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    2 3 3 1 2 2 2 
    8
    B 5/3
    T 3/3
    G 2/5
    TM 2/4
    W 1/3
    WT 3/4
    WT 3/4
    WT 3/5

#### Output

    1500 2050 1250 500 1700 1964 1440 
    250

</div>

<div>

### Sample2

#### Input

    2 1 2 1 3 1 1 
    4
    TM 2/5
    WM 4/4
    TM 1/3
    TM 5/4

#### Output

    2000 800 1400 1000 1800 980 710 
    165

</div>

<div>

### Sample3

#### Input

    2 2 2 1 2 1 2 
    7
    WM 2/4
    B 2/1
    TM 1/3
    WT 1/2
    B 4/1
    W 1/2
    T 4/5

#### Output

    1000 1150 950 1000 1400 980 1720 
    200

</div>
