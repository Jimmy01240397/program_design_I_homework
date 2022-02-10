Lec13
=====
Big Big Numbers Addition
------------------------

### Description

<div>

You might know that computer can only represent a limited range of
numbers. For a 32-bit machine, it can only deal with signed integers
within \[-2147483648, 2147483647\]. But is there no any other way for
computers to deal with a number out of this range, for real?

Recall your memory in elementary school, how do you perform an addition?
Everyone might know this way:

      1234
    +  456
    -------
      1690

You take digits at same position, add them together. If the result is
bigger than 9, carry 1 into next round. Repeat these step until last
digit is processed.

If we use string to represent an integer, and use the addition process
above to calculate, digits by digits, then there will be no range
problem.

Now, given two VERY LARGE positive integers, can you add them together?

大家應該都知道，電腦能夠表示的數值範圍是非常有限的。一台 32
位元的電腦，最多只能表達在 \[-2147483648 - 2147483647\]
這個範圍內的有號整數而已。但難道真的沒有任何辦法能讓電腦進行超過這個範圍的整數運算嗎？

回想看看你在小學學算術時，你是怎麼進行加法的？我猜大家都學過直式加法，像是：

      1234
    +  456
    -------
      1690

這樣，把在同一個位數的位元相加，如果結果大於 9，就進 1
到下一位數去。重複這個步驟直到最左邊的數字計算完畢。

如果我們能用字串的方式來表示整數，然後用這個方法將他們一位一位相加，那就不會有超出範圍無法計算的問題了。

現在，給定你兩個**超大**的正整數，你能把他們加起來嗎？

</div>

### Input

The arguments passed to your function will be two strings a and b,
representing the VERY LARGE integers. The maximum length of these
strings do not exceed 100.

### Output

You have to put the result of a + b into argument res. We guarantee that
there will be enough space to hold the result of addition.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>
    #include<‍string.h>

    void add(char a[], char b[], char res[]);

    int main(){
        char a[100], b[100], res[105];
        scanf("%s %s", a, b);
        add(a, b, res);
        printf("%s", res);
        return 0;
    }

<div>

### Sample1

#### Input

    12345 6789

#### Output

    19134

</div>

<div>

### Sample2

#### Input

    12345678900000000 87654321

#### Output

    12345678987654321

</div>
Caterpillars Line Up
--------------------

### Description

<div>

A caterpillar has a head \'A\', a tail \'Z\' and a body with `n` lower
case letters. (`n`\>=0)

Now several caterpillars stand in line but some caterpillars\' direction
isn\'t correct. Please help them to line up again!

</div>

### Input

A string.

### Output

A string.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>
    #include<‍stdbool.h>

    void lineup_again(char line[]);
    void swap(char *a, char *b);
    void reverse_caterpillar(char *l, char *r);

    int main() {
        char line[1000000];
        scanf("%s", line);
        lineup_again(line);
        printf("%s", line);
    }

<div>

### Sample1

#### Input

    AhuZZrvlAArZ

#### Output

    AhuZAlvrZArZ

</div>

<div>

### Sample2

#### Input

    ZgogcngqrAZAZxuuAZigkxA

#### Output

    ArqgncgogZAZAuuxZAxkgiZ

</div>
Game Patapon
------------

### Description

<div>

Patapon 是一款音樂節奏遊戲，你必須跟著節奏輸入指定的動作，才能打倒怪物！

在本題中有三種合法節奏（也就是接下來所謂的「指令」）：

PATA PATA PATA PON：可以前進一步。

PON PON PATA PON：可以原地攻擊怪物，扣除怪獸一滴血。

CHAKA CHAKA PATA PON：可以後退一步並防禦怪物攻擊。

以下有幾個注意事項：

當距離怪物超過 3 時，無論如何攻擊都攻擊不到怪物；但若跟怪物距離為 0
時，會直接被怪物踩爛死掉。

遊戲時可能會打錯遊戲指令，在這題也是，當出現不合法動作（例如：CHAKA
CHAKA PON PON），會直接被忽略。

每當做十個動作「後」（無論是否為合法動作），怪物會進行一次攻擊，如果攻擊前的該動作並非防禦（也就是
CHAKA CHAKA PATA PON），會直接被怪物打敗然後死掉。

但若在怪物攻擊前將怪物血量打至零，算成功打敗怪物。

每次最多進行三十次動作，請將每次遊戲進行的結果印出！（參考下方 I/O
說明）

------------------------------------------------------------------------

Patapon is a music game, you have to follow the rhythm and enter the
commands to beat out the monster!

There are three kinds of valid rhythm (or we say 「command」 below):

PATA PATA PATA PON: move one step forward

PON PON PATA PON：no move and attack on the monster (one blood)

CHAKA CHAKA PATA PON：move one step backward and defend the monster\'s
attack

Notices:

When the distance between you and the monster is bigger than 3, you can
never attack on the monster.

But if the distance is 0, the monster will trample on you, and you will
die.

Sometimes there are some wrong commands, for example, CHAKA CHAKA PON
PON, those commands will be ignored with no effect.

After entering ten commands (no matter the command is valid or not), the
monster will attack on you.

If the command before the monster\'s attack is not the defence (i.e.
CHAKA CHAKA PATA PON), you will be attacked and die.

But, if the monster\'s blood is 0 before the monster attacks on you,
then it means you beat out the monster.

There are at most 30 commands in one round, please print out the result
of the game! (See I/O description)

![未命名.png](/Lec13/Game%20Patapon/images/39bb8c69a871341bdf5da3b52e19534040db90b4.png)

</div>

### Input

一開始給兩個數字，分別為「與怪獸的距離」和「怪獸的血量」。
接著給予一字串，分別是每個動作指令，並以 . 或 , 隔開，最後會有一換行。
There are two numbers, the first one is 「the distance to the monster」,
and the second one is 「the monster\'s bloods」 Then, given a string
that contains commands separated by \'.\' or \',\'. Followed by a
newline.

### Output

若成功打敗怪物，印出 \"YES\"
以及一空格，最後印出遊戲中打敗怪物前「合法指令」的數量。
反之，若失敗（包含玩家死掉或指令輸完但怪物沒死），印出 \"NO\"
以及一空格，最後印出遊戲中怪物剩餘的血量。 If you beat out the monster
successfully, print out \"YES\" and one space, then print out the count
of 「the valid commands」 before beating out the monster. On the
contrary, if failed (e.g. you died or the commands end before beating
out the monster), print out \"NO\" and one space, then print out the
remaining bloods of the monster.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    5 4
    PATA PATA PATA PON,PON PON PATA PON.PON PON PATA PON,PATA PATA PATA PON.PATA PATA PATA PON,CHAKA CHAKA PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,CHAKA CHAKA PATA PON.PON PON PATA PON,PATA PATA PATA PON,CHAKA PATA PATA PON,PON PATA PATA PON,PON PON PATA PON

#### Output

    YES 13

</div>

<div>

### Sample2

#### Input

    5 4
    PATA PATA PATA PON.PON PON PATA PON.PON PON PATA PON.PATA PATA PATA PON.PATA PATA PATA PON.CHAKA CHAKA PATA PON.PON PON PATA PON.PON PON PATA PON.PON PON PATA PON.PON PON PATA PON.PON PON PATA PON.PATA PATA PATA PON.PON PON PATA PON

#### Output

    YES 10

</div>

<div>

### Sample3

#### Input

    5 4
    PATA PATA PATA PON,PON PON PATA PON,PON PON PATA PON,PATA PATA PATA PON,PATA PATA PATA PON,CHAKA CHAKA PATA PON,PATA PATA PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PATA PATA PATA PON,PON PON PATA PON

#### Output

    NO 1

</div>

<div>

### Sample4

#### Input

    5 4
    PATA PATA PATA PON,PATA PATA PATA PON,PATA PATA PATA PON.PATA PATA PATA PON,PATA PATA PATA PON.PATA PATA PATA PON,PATA PATA PATA PON.PATA PATA PATA PON

#### Output

    NO 4

</div>

<div>

### Sample5

#### Input

    5 4
    PATA PATA PATA PON.PATA PATA PATA PON.PON PON PATA PON.CHAKA CHAKA PATA PON.PON PON PATA PON.PON PON PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,CHAKA CHAKA PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,PON PON PATA PON.PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,CHAKA CHAKA PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON,PON PON PATA PON.CHAKA CHAKA PATA PON

#### Output

    NO 3

</div>
IEEE Reference Format
---------------------

### Description

<div>

大家一定都有寫報告的經驗對吧？寫報告的時候最重要的，就是要把你引用的來源給註記清楚。在資訊系，我們寫報告時很常會引用來自
IEEE 的論文或期刊，IEEE 規範的會議論文引用格式為：

> J. K. Author, "Title of paper," in Abbreviated Name of Conf.,
> (location of conference is optional), (Month and day(s) if provided)
> year, pp. xxx-xxx.

一個實際範例如下：

> Y. Azar et al., \"28 GHz propagation measurements for outdoor cellular
> communications using steerable beam antennas in New York city,\" 2013
> IEEE International Conference on Communications (ICC), Budapest, 2013,
> pp. 5143-5147, doi: 10.1109/ICC.2013.6655399.

這裡頭包含了以下元素：

主要作者：J. K. Author，\"et al.\" 代表有複數作者但未全數列出，範例內為
`Y. Azar et al.`\
論文標題：Title of paper，範例內為
`28 GHz propagation measurements for outdoor cellular communications using steerable beam antennas in New York city`\
會議名稱：Abbreviated Name of
Conf.，範例內為`2013 IEEE International Conference on Communications (ICC)`\
會議舉辦地點（選填）：(location of conference is
optional)，範例內為`Budapest`\
會議舉辦時間：(Month and day(s) if provided)
year，年份為必填、月份與日期選填。範例內為`2013`\
出版物資訊：pp.
xxx-xxx，包含頁碼和數位物件辨識碼等，範例內為`pp. 5143-5147, doi: 10.1109/ICC.2013.6655399`

給定以上資訊，請你把所有的資訊組合在一起，組成符合 IEEE
論文引用格式的字串。

</div>

### Input

The arguments will include the information mentioned above. Include
authors, title, conference name, location, date and page information.

### Output

Your function have to return a string of information about this paper
that match the IEEE reference format.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>
    #include<‍string.h>

    char *reference(char author[], char title[], char conference[], char location[], char date[], char ppdoi[]);

    int main(){
        char author[100], title[150], conference[150], location[30], date[5], ppdoi[60];
        scanf("%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]", author, title, conference, location, date, ppdoi);
        printf("%s", reference(author, title, conference, location, date, ppdoi));
        return 0;
    }

<div>

### Sample1

#### Input

    Y. Azar et al.
    28 GHz propagation measurements for outdoor cellular communications using steerable beam antennas in New York city
    2013 IEEE International Conference on Communications (ICC)
    Budapest
    2013
    pp. 5143-5147, doi: 10.1109/ICC.2013.6655399

#### Output

    Y. Azar et al., "28 GHz propagation measurements for outdoor cellular communications using steerable beam antennas in New York city," 2013 IEEE International Conference on Communications (ICC), Budapest, 2013, pp. 5143-5147, doi: 10.1109/ICC.2013.6655399.

</div>

<div>

### Sample2

#### Input

    K. He, X. Zhang, S. Ren and J. Sun
    Deep Residual Learning for Image Recognition
    2016 IEEE Conference on Computer Vision and Pattern Recognition (CVPR)
    Las Vegas, NV
    2016
    pp. 770-778, doi: 10.1109/CVPR.2016.90

#### Output

    K. He, X. Zhang, S. Ren and J. Sun, "Deep Residual Learning for Image Recognition," 2016 IEEE Conference on Computer Vision and Pattern Recognition (CVPR), Las Vegas, NV, 2016, pp. 770-778, doi: 10.1109/CVPR.2016.90.

</div>
Number Sum Calculator
---------------------

### Description

<div>

Please calculate the sum of the numbers.

**Hint: Use** `strtok()` **and** `atoi()`

</div>

### Input

A string whose length isn\'t greater than 100. Every number is separated
by \'+\'.

### Output

The sum of the numbers.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include<‍stdio.h>
    #include<‍string.h>
    #include<‍stdlib.h>

    #define N 100

    int addition(char str[]);

    int main() {
        char str[N];
        scanf("%s", str);
        int sum = addition(str);
        printf("%d", sum);
        return 0;
    }

<div>

### Sample1

#### Input

    1+2+3+4+5

#### Output

    15

</div>

<div>

### Sample2

#### Input

    1+22+333

#### Output

    356

</div>
Rising Hope
-----------

### Description

<div>

Divination is a traditional way to predict future. Now given a string
`R` as the result of a magician doing some divination, please calculate
the \"Hope point\" from this string.

Hope points starts from `0`, you should scan result string from start to
end, if the character is `P`(Positive), means the hope is rising by 1

if the character is `N`(negative), means the hope point is decreased by
1.

0 \<= length of `R` \<= 1000

`R` may contain every upper case letters.

占卜是一種傳統的預測未來手段，
不論是把龜殼拿去火烤，觀察茶葉渣，請水晶球幫你看透真相（有時候是看透程式碼的bug）或是一群人聚在一起跳奇怪的舞蹈都是占卜手段。今天你得到一個字串
`R`， 代表占卜的結果，請你以這個字串計算『希望值』(Hope point)

希望值一開始為 0，若占卜結果中包含`P`(Positive)就會上升1,
包含`N`(negative)則會下降1

0 \<=`R` 的長度 \<= 1000

`R` 可能包含所有大寫字母

<https://youtu.be/IzhMzY5avLI>

</div>

### Input

A string as function input

### Output

An integer

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>
    #include <‍string.h>

    int rising_hope(char *R);

    int main(int argc, char *argv[])
    {
        char in[1005];

        scanf("%s", in);
        int hope = rising_hope(in);
        printf("%d\n", hope);

        return 0;
    }

<div>

### Sample1

#### Input

    A

#### Output

    0

</div>

<div>

### Sample2

#### Input

    PPAP

#### Output

    3

</div>

<div>

### Sample3

#### Input

    PPNPPNP

#### Output

    3

</div>

<div>

### Sample4

#### Input

    LISA

#### Output

    0

</div>
Sorting Student Name
--------------------

### Description

<div>

你還記得 [PK 學園轉學生](https://ckj.imslab.org/#/problems/QJd9kELj6SEL)
嗎？

來了一個轉學生，表示班上有很多同學的座號需要被改變，座號的排序規則為：

\- 從名字拼音的開始排序，比較接近 `a` 的座號會比較前面

\- 大小寫字母沒有分別 (ex. `AMY` 與 `amy` 視作完全相同)

\-
如果剛好出現兩個班上學生姓名的前面字母完全相等，則名字較短的座號會比較前面。
(ex. `Sam` 與 `Samuel`， `Sam` 的座號會比較小)

請你 **按照座號**，印出所有班上學生的名稱！

\-\-\--

Do you remember [PK high school transfer
student](https://ckj.imslab.org/#/problems/QJd9kELj6SEL)?

The sorting rules of student number are listed below:

\- Sorted by the letter of name, if the letter is closer to `A`, the
student number is smaller. (For instance, the student number of `Chloe`
is smaller than that of `Sam` because compare with `C` and `S`,`C` is
closer to `A`)

\- It is no different between lowercase and uppercase (ex. `AMY` and
`amy` are the same)

\- In this case, `Sam` and `Samuel`, the letters of `Sam` is the same as
the first three letters of `Samuel`, but the length of `Sam` is shorter
than that of `Samuel`, `Sam`\'s student number is smaller than Samuel.

Please base on the student number, print the name of all students in
this class!

</div>

### Input

First line is a number (N) represents for how many students are there in
the class. Following strings are the students\' names. 2 \<= N \<= 100 2
\<= length of students\' names \<= 100

### Output

Sorted students\' names.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    3
    Saiko
    Nendou
    saiki

#### Output

    Nendou
    saiki
    Saiko

</div>

<div>

### Sample2

#### Input

    6
    pat
    patsy
    patrick
    percy
    philemen
    penelope

#### Output

    pat
    patrick
    patsy
    penelope
    percy
    philemen

</div>
String Insertion
----------------

### Description

<div>

Given a paragraph `P` and 2 strings `s`, `t`, find all string `s` in
paragraph`P` and insert a string `t` after string `s`.

Note: The size of the modified paragraph `P` is shorter than 100000 and
the size of both string `s` and string `t` are less than 100.

</div>

### Input

The first part is the paragraph P itself. It may contain multiple lines.
There is a line \"\-\--\" after the paragraph P. The last two lines are
string s and string t. Both string s and string t are followed by a
newline character, which is not belong to string s and string t.

### Output

The modified paragraph.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍string.h>
    #define MAX_LEN_P 100000
    #define MAX_LEN_S 100

    void strins(char *P, char *s, char *t);

    int main() {
      char P[MAX_LEN_P + 1], s[MAX_LEN_S + 2], t[MAX_LEN_S + 2];
      size_t P_len = 0;
      for (char buf[MAX_LEN_P + 1] = ""; strcmp(buf, "---\n"); fgets(buf, MAX_LEN_P + 1, stdin)) {
        size_t len = strlen(buf);
        if (len + P_len > MAX_LEN_P) {
          fprintf(stderr, "The length of the paragraph exceeds %d\n", MAX_LEN_P);
          return 1;
        }
        strncat(P, buf, len + 1);
        P_len += len;
      }
      fgets(s, MAX_LEN_S + 2, stdin);
      s[strlen(s) - 1] = '\0';  // remove newline
      fgets(t, MAX_LEN_S + 2, stdin);
      t[strlen(t) - 1] = '\0';  // remove newline
      strins(P, s, t);
      printf("%s", P);
      return 0;
    }

<div>

### Sample1

#### Input

    abc
    def
    abcdef
    abc def
    ---
    abc
    d

#### Output

    abcd
    def
    abcddef
    abcd def

</div>

<div>

### Sample2

#### Input

    hello world
    ---
    o
    o

#### Output

    helloo woorld

</div>
