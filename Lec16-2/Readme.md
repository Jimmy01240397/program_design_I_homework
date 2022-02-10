Lec16-2
=======
The Sly TA and His Sly Gun
--------------------------

### Description

<div>

Chou is a secret agent of his country. One day, he is assigned a job to
find the stolen treasure of his country. To help him fulfill the job,
his boss gave him a weapon called SlyGun, as the name indicated, there
are two possible ways, front and back, for the gun to fire, and the
direction of the next fire will be decided by following process:

1.  SlyGun will be assigned a floating point number

2.  The given floating number will be divided into 4 bytes

3.  Treat the 4 bytes as unsigned characters and sum them up into an
    unsigned character

4.  The SlyGun will fire forward if the sum of 4 bytes is even,
    backward, otherwise

![Screenshot from 2022-01-04
18-38-50.png](/Lec16-2/The%20Sly%20TA%20and%20His%20Sly%20Gun/images/2516c52e66c26e06652820d3df42d522bbcf15a4.png)

![](https://i.makeagif.com/media/10-28-2015/Bsr1dr.gif)

</div>

### Input

First line contains an integer N indicates the number of fires following
are N floating point numbers Fi each occupies a line 0 \< N \<= 1000 0.0
\<= Fi \<= 1000.0

### Output

\"Front\" and \"Back\" for each fire, each occupies a line

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    4
    925.887024
    768.018005
    345.265015
    551.627014

#### Output

    Front
    Front
    Front
    Front

</div>

<div>

### Sample2

#### Input

    10
    344.606995
    943.013000
    276.812988
    944.718994
    916.382996
    336.312988
    115.228996
    748.950012
    996.010010
    682.520020

#### Output

    Front
    Front
    Back
    Front
    Front
    Back
    Front
    Front
    Back
    Back

</div>
