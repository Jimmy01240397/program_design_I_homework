The coordinate to the past
--------------------------

### Description

<div>

Matsumoto is a brilliant AI that is built and sent to the past to
prevent a war between humans and AI. When on his way back to the past,
he will receive a set of encoded coordinates indicating where to go.

To decode the coordinates, he has to follow the following steps:

1\. split the received line of characters into two groups: characters at
odd positions and characters at even positions (index starts by 0 and
from left)

2\. sum up the numbers in each group

3\. write these two numbers into hexadecimal

4\. process the two numbers from step 1 if the length of the number is
greater than 1

5\. the coordinate is the concatenate of the result of the two numbers
(the odd one on the left)

The following figure presents an example of the previously shown steps:

![Screenshot from 2021-11-24
17-05-20.png](/Lec09-2/The%20coordinate%20to%20the%20past/images/edfffd77eff297fa25b8ac6af556f793c332f59e.png)Please
help him to decode the coordinate.

![](https://c.tenor.com/3HSEeSLm-k8AAAAC/vivy-vivy-flourite-eyes-song.gif)

松本是個聰明的人工智慧，創造他的人想要將他送回過去阻止一場人類與人工智慧的戰爭。在他穿越的過程中，他會收到一份經過編碼的目的地座標，想要將座標解碼需要透過以下的步驟：

1.  將收到的所有字元分成奇數位與偶數位兩組（從最左邊的開始編號，並且從0開始）

2.  分別計算兩組數字的和

3.  將兩個相加的結果以16進位表示

4.  若有和的位數大於1的，則重複上述步驟

5.  將兩組數字計算的結果串接起來（奇數組的結果在左邊，偶數組的在右邊）

下面是範例二的示意圖：![Screenshot from 2021-11-24
17-05-20.png](/Lec09-2/The%20coordinate%20to%20the%20past/images/edfffd77eff297fa25b8ac6af556f793c332f59e.png)請幫助松本解碼他收到的座標。

</div>

### Input

A newline character terminated string indicates the encoded coordinate.
The length of the string will be greater than 1 and less than 10001.
Each character represents a hexadecimal, the upper case and the lower
case are both possible. 一行以換行字元結尾的字串，代表經過編碼的座標。
該字串的長度介於1到10001間（不包含10001）。
字串中每個字元代表一個16進位數字，且大小寫都有可能。

### Output

A single line that indicates the decoded coordinate, the letter of the
coordinate should be shown in lower case (if any).
解碼後的字串，若字串中有出現英文字母一律以小寫表示。

### Loader Code

<div>

Your code will be judge using this program:

</div>

<div>

### Sample1

#### Input

    1111111111

#### Output

    55

</div>

<div>

### Sample2

#### Input

    ffffffffff

#### Output

    b4b4

</div>
