Shin\'s Attacking Zone
----------------------

### Description

<div>

As the leader of the 86 spearhead squadron, Shin\'s main job is to guide
the squadron members to the right place. He will receive the coordinates
of the enemies from the handler during the mission, all he has to do is
convert the coordinates into directions and distances that will become
the instructions of the squadron members.

![](https://c.tenor.com/Z34tCoScISsAAAAC/86anime-eighty-six.gif)

</div>

### Input

First line contains an integer N which indicates the number of the
enemies. Next, follows a list of coordinates (x, y) of the enemies,
where each coordinate of an enemy occupies a line. 1 \<= N \<= 1024
-1000 \<= x, y \<= 1000, where origin is (0, 0)

### Output

N lines of the direction DIR and the distance DIST of enemies where the
direction comes first followed by the distance and closed by a newline
character. 0 \<= DIR \<360, where 0 represents the positive x axis and
increases through counterclockwise. Both DIR and DIST should be rounded
to the hundredths.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>
    #include <‍math.h>

    #define MAX_N 1024

    void convert_to_polar(int *coords, int N);

    int main()
    {
        int N, coords[MAX_N + 1][2];
        scanf("%d", &N);
        
        for (int i = 0; i <‍ N; i++)
            scanf("%d%d", &coords[i][0], &coords[i][1]);
        
        
        convert_to_polar((int *) coords, N);
        
        return 0;
    }

<div>

### Sample1

#### Input

    4
    1 1
    -2 2
    -3 -3
    4 -4

#### Output

    45.00 1.41
    135.00 2.83
    225.00 4.24
    315.00 5.66

</div>

<div>

### Sample2

#### Input

    4
    3 4
    -3 4
    -3 -4
    3 -4

#### Output

    53.13 5.00
    126.87 5.00
    233.13 5.00
    306.87 5.00

</div>
