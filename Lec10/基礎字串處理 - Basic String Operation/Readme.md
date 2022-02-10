基礎字串處理 - Basic String Operation
-------------------------------------

### Description

<div>

給定一個字串 `str1` 以及數個指令，請根據指令對字串進行處理並執行動作。\
可能會出現的指令如下：`PRINT` `REVERSE` `TO_LOWER` `TO_UPPER` `REMOVE`
`COMPRESS`。\
下方是各個指令的詳細解釋；建議各位使用 function 來執行各個指令。\
**每個指令的 output 後必須分行！**

\
Given a string of characters`str1`and a list of commands, perform
operations according to the commands.\
The possible commands are: `PRINT` `REVERSE` `TO_LOWER` `TO_UPPER`
`REMOVE` `COMPRESS`.\
Command descriptions are in the following section. Using functions to
treat each commands is recommended, though not required.\
Remember to break the line after each command\'s output!

### 指令說明 / Command Description

------------------------------------------------------------------------

**PRINT**

-   印出 `str1`當下的狀態。\
    Print the current state of the string

-   這個指令不應該對`str1`做出任何改動。\
    No modification should occur on `str1`

**\
\
REVERSE**

-   將`str1`頭尾顛倒。\
    Reverse`str1`.

-   假設`str1 = "Mine 123! @@"`執行結果應為`str1 = "@@ !321 eniM"`。\
    E.g.`str1 = "Mine 123! @@"`Becomes`str1 = "@@ !321 eniM"`.

-   你應該改變 `str1`的內容並**印出來**。\
    You should modify the data in`str1`and **print the modified
    string**.

**\
\
TO\_UPPER**

-   將字串內**所有小寫字母**轉成對應的大寫字母。\
    Transform **all lower-case alphabets** in the string to upper-case.

-   不需要對非字母的字元做出任何改動。\
    Non-alphabet character remains the same.

-   你應該改變 `str1`的內容並**印出來**。\
    You should modify the data in `str1`and **print the modified
    string**.

**\
\
TO\_LOWER**

-   將字串內**所有大寫字母**轉成對應的小寫字母。\
    Transform **all upper-case alphabets** in the string to lower-case.

-   不需要對非字母的字元做出任何改動。\
    Non-alphabet character remains the same.

-   你應該改變 `str1` 的內容並**印出來**。\
    You should modify the data in `str1` and **print the modified
    string**.

**\
\
REMOVE \<target\>**

-   自`str1`移除所有字元
    \<target\>。所有剩下來的字元必須**向前推移填滿所有空位**。\
    From `str1`, **remove** **all occurrence** of the character
    \<target\>. The remaining characters must be **shifted to the front
    to fill up the blanks**.

-   假設`str1 = ['a', 'p', 'p', 'l', 'e', '\0'], target = 'p'`,
    執行結果應為`str1 = ['a', 'l', 'e', '\0']`。有注意到長度變短了嗎？\
    e.g., `str1 = ['a', 'p', 'p', 'l', 'e', '\0'], target = 'p'`, the
    result should be `str1 = ['a', 'l', 'e', '\0']`. Notice the length
    of the string is shortened.

-   **執行完成後至少會留下 1 個字元。**\
    **There will be at least 1 character left in the string after
    removal.**

-   空白`' '`也可能是被移除的目標。\
    Spaces`' '`might also be the target to remove.

-   你應該改變 `str1` 的內容並**印出來**。\
    You should modify the data in `str1` and **print the modified
    string**.

**\
\
COMPRESS**

-   使用 **Run-Length Encoding** 來對`str1`進行壓縮。以下為 Run-Length
    Encoding 的執行步驟：\
    Use **Run-Length Encoding** to compress`str1`. The following is how
    to Run-Length Encoding:

    -   從`str1[0]`開始。\
        Start from `str1[0]`.

    -   計算選到的字元連續出現了幾次。\
        Count the number of **contiguous subsequent occurrences** of the
        picked character.

    -   將其改成`-<字元><出現次數>`的形式。**注意前面有個減號**，用來標示被壓縮的字元。\
        Transform into the form as `-<char><occurrence>` . **Note that
        there is a minus sign in front of the pair**, used to mark which
        character is getting encoded**.**

    -   假設`str1 = "aaaabbbcccikK"`執行結果應為`str1 = "-a4-b3-c3-i1-k1-K1"`。請注意，**大小寫英文字母被視為不同的字元**。\
        e.g., `str1 = "aaaabbbcccikK"` becomes
        `str1 = "-a4-b3-c3-i1-k1-K1"`. Notice that **lower and upper
        case alphabets are considered different characters**.

    -   假設`str1 = "AaaaC@@---  """"`執行結果應為`str1 = "-A1-a3-C1-@2--3- 2-"3"`。請注意，**空白和減號也會被處理**。\
        e.g.,`str1 = "AaaaC@@---  """"` becomes
        `str1 = "-A1-a3-C1-@2--3- 2-"3"`. Notice that **spaces and minus
        signs are also being encoded.**

-   你應該改變 `str1` 的內容並**印出來**。\
    You should modify the data in `str1` and **print the modified
    string**.

### 提示與建議 / Tips and Suggestions

------------------------------------------------------------------------

1.  當在 `scanf()` 中使用 `%s` 時，**會取用直到下個 white space
    character**(例如空白`' '`, 換行`'\n'` , 水平 / 垂直 Tab`'\t'` /
    `'\v'`等等) **之前的所有字元**。**而這個字元則會留在 input
    中不被讀取**。\
    When using `%s` in `scanf()`, **all inputs until the next trailing
    whitespace character** (e.g., spaces`' '`, newline`'\n'`, horizontal
    / vertical tabs`'\t'` / `'\v'`) **will be consumed**, **but the
    whitespace character will remain untouched**.\
    \

2.  `getchar()` **可以從 input 中移除一個
    character**，可參考以下使用例：\
    `getchar()` **can be used to remove a character from input**. The
    following is a simple example:

```{=html}
<!-- -->
```
    /* 自 input 中移除一個字元並將該字元賦值給 a。 與 scanf("%c", &a) 相同效果。
       Remove 1 character from input and assign the character to a. Has same effect as scanf("%c", &a). */
    char a = getchar(); 

    /* 僅自 input 中移除一個字元。
       Remove 1 character from input. No assignment happens here. */
    getchar();

3.  `==`**無法用來比較字串** 。\
    `==`**cannot be used to compare strings.\
    \
    **

4.  **你必須在字串結束處加上** `'\0'` **來標示字串終結。\
    **`'\0'`**is required and used to mark the end of character array
    strings.\
    \
    **

5.  每個可以成功執行的指令都會讓你拿到一些分數。\
    Every correctly implemented commands will grant you some points.

</div>

### Input

First line is the original string \`str1\`. ∘ Might contain all
Printable ASCII Code Characters, expect DEL. (a.k.a, ACSII Code 32\~126)
∘ Through the whole program (including this input), the string will not
be longer than 1024 characters. (1025 if terminating \'\\0\' included)
The second line contains a integer \`N\`, denotes how many commands
would be executed. ∘ 1 ≤ \`N\` ≤ 100 The following \`N\` Lines are the
commands.

### Output

Print everything the commands requires you to.

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    ABC   %%%
    10
    REVERSE
    COMPRESS
    REMOVE -
    REMOVE  
    REMOVE 1
    REMOVE B
    REMOVE C
    TO_LOWER
    COMPRESS
    TO_UPPER

#### Output

    %%%   CBA
    -%3- 3-C1-B1-A1
    %3 3C1B1A1
    %33C1B1A1
    %33CBA
    %33CA
    %33A
    %33a
    -%1-32-a1
    -%1-32-A1

</div>

<div>

### Sample2

#### Input

    AAAAA - -  BBCC
    1
    PRINT

#### Output

    AAAAA - -  BBCC

</div>

<div>

### Sample3

#### Input

    AAAAA - -  BBCC
    1
    REVERSE

#### Output

    CCBB  - - AAAAA

</div>

<div>

### Sample4

#### Input

    AAAAA - -  BBCC
    1
    COMPRESS

#### Output

    -A5- 1--1- 1--1- 2-B2-C2

</div>

<div>

### Sample5

#### Input

    aaaaa - -  bbCC
    1
    TO_UPPER

#### Output

    AAAAA - -  BBCC

</div>

<div>

### Sample6

#### Input

    AAAAA - -  BBCC
    1
    REMOVE B

#### Output

    AAAAA - -  CC

</div>
