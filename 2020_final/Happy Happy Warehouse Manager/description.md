Happy Happy Warehouse Manager
-----------------------------

### Description

<div>

Mr. Huang is a worker who works in a warehouse. He loves to stake things
up to build a tower, Every time the factory sends him newly manufactured
goods, he will stack them on the top of his tower. Once a shop asking
for goods, the goods that are on the top of the tower will be sent out
first. After a busy day, goods on that tower may change a lot, which
left him a difficult job to record. Now, you are asked to help him to
maintain his happy tower.

There are three kinds of goods: `Juice`, `Wine` and `Laptop`. (I know
that stacking laptop with drinks is a bad idea, but Mr. Huang loves to
do that\...) These are defined in the loader.

Then you will receive a list of records that represents what happened
today, the record looks like:

`Produce Juice 5`, this means that factory sends Mr. Huang 5 boxes of
juice.

`Consume 7`, means a shop asking for 7 boxes of goods (You don\'t need
to concern what is in those box, just send them out).

After a busy day, you have to list the things left on the tower from the
top.

`Hint`: You may implement using linked list to maintain that stack.

黃桑是一個快樂的倉儲工，他最喜歡把所有的東西都疊成高高塔。當工廠送來了新的貨物，他都會將他們疊到他的高塔上，而當有商店要批貨時，他也會直接將高塔頂端的貨物寄出去給他們。由於業務繁忙，因此每天高塔上的貨物變動會很大，這會讓每天的結算變得非常麻煩，現在要麻煩你替他設計一個倉儲系統，幫幫黃桑統計每天的貨物吧\~!

黃桑經手的貨物總共有三種:
`果汁`、`紅酒`跟`筆記型電腦`。(我知道把這些東西疊在一起不是個好主意，但親愛的黃先生喜歡\.....)詳細的定義請見Loader。

每天結束後，你都會從黃桑那拿到一張記滿當日進出貨物的紀錄，紀錄長得像這樣:

`Produce Juice 5`, 代表工廠送來了5箱果汁。

`Consume 7`,
代表有商店批了7箱貨(你不需要在意箱子裡裝的是甚麼東西，把東西送出去就對了)。

當你統計完之後，請將塔上剩餘的東西從上至下列出。

`系統提示`: 或許你可以用linked list 的方式在你的電腦中蓋出虛擬的高塔。

</div>

### Input

A list of records with EOF terminated. Hint: To generate EOF manually
while you are testing your code locally, press ctrl+Z on windows and
ctrl+D on linux.

### Output

A list of remained goods from top to bottom. The output format is:
\"Good\_type x remain\_count\" follows a newline character. If the tower
is empty, you need to print \"Empty\" followed by a newline character.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>
    #include <‍string.h>

    const char *good_types[] = {
        "Juice",
        "Wine",
        "Laptop"
    };

    void *produce(void *top_of_stack, const char *good_type, size_t count);
    void *consume(void *top_of_stack, size_t count);
    void list_remain(void *top_of_stack);

    int main() {
        char record[64], *job, *good;
        size_t count;
        void *top_of_stack = NULL;
        while (fgets(record, 64, stdin)) {
            job = strtok(record, " ");
            if (!strcmp(job, "Produce")) {
                good = strtok(NULL, " ");
                count = atol(strtok(NULL, " "));
                for (int i = 0; i <‍ 3; i++) {
                    if (!strcmp(good, good_types[i])) {
                        top_of_stack = produce(top_of_stack, good_types[i], count);
                        break;
                    }
                }
            }
            else if (!strcmp(job, "Consume")) {
                count = atol(strtok(NULL, " "));
                top_of_stack = consume(top_of_stack, count);
            }
        }
        list_remain(top_of_stack);
        return 0;
    }

<div>

### Sample1

#### Input

    Produce Juice 10
    Produce Laptop 5
    Consume 3
    Consume 3
    Produce Wine 2

#### Output

    Wine x 2
    Juice x 9

</div>

<div>

### Sample2

#### Input

    Produce Juice 1
    Consume 1

#### Output

    Empty

</div>

<div>

### Sample3

#### Input

    Produce Juice 2
    Produce Laptop 10
    Produce Wine 1
    Produce Juice 100
    Produce Juice 10

#### Output

    Juice x 110
    Wine x 1
    Laptop x 10
    Juice x 2

</div>
