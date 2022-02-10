\[25 Points\] Order Recovery
----------------------------

### Description

<div>

小混蛋工廠最近遇到了大麻煩！

他們的系統不知道出了什麼問題，接收到的訂單可能會少字，並以奇怪的格式呈現。

請協助他們恢復訂單內容，並告訴他們該訂單要的貨到底是什麼！

舉例來說，當訂單收到的是 `ter:mel`，代表要的貨有兩個（以 `:`
隔開），其中一個包含字串 `ter`，另一個包含字串 `mel`。

然而，工廠內有太多東西了，以符合 `ter` 來說，可能是 `water`，可能是
`battery`，也可能是 `butter`。（沒錯，這間工廠什麼都有。）

因此小混蛋工廠的員工決定只選擇「最先符合該字串」的物品，當作客人要的貨，上述三項的話，將會選擇
`water` 當作結果。

（因為 `water`
是在第三個字母開始符合，其他兩者都是在第四個字母才開始符合。）

當然，若有兩個以上字串符合上述情況，則優先選擇字數最短的字串，字數相同時，則比較兩字串各字元，優先選擇字元較前面的字串。

例如：訂單要求 `ham`，則 `hammer` 和 `hamburger` 將選擇 `hammer`。

又例如：訂單要求 `yo`，則 `yolk` 和 `yoyo` 將選擇 `yolk`（因為順序上 `l`
比 `y` 前面）。

最後回到訂單的舉例，若 `ter` 選出的貨為 `water`，`mel` 選出的貨為
`melon`，則最後以 `+` 連結，輸出 `water+melon`。

另外，每張訂單最少有 1 樣物品，但最多不會超過 30 樣物品。

------------------------------------------------------------------------

Bestards\' Factory has a big trouble!

Somewhere is wrong in their system, so the order they received may miss
some characters, and is showed in a strange way.

Please help them recover the order, and tell they what the customers
want.

For example, if the order\'s content is `ter:mel`, it means there are
two items（separated by `:`）, one includes substring `ter`, and the
other includes substring `mel`.

However, there are too many goods, we use `ter` as an example, it may be
`water`, `battery`, or `butter`. (Yah, the factory sells everything!)

Hence we choose the goods that 「is matched by the substring from the
more forward position」, as the goods that the customers want.

In the example, we will choose `water`. (Since `water` matches `ter`
from the third position, while the other two match from the fourth
position.)

If there are at least two goods meet the condition, then we choose the
string with shorter length.

If the length are the same, then compare two strings, and choose the one
that is less than the other.

For example, if `ham`, then `hammer` and `hamburger`, we choose
`hammer`.

Another example, if `yo`, then `yolk` and `yoyo`, we choose `yolk`.
(Since in ascii, `l` is prior to `y`.)

Back to the first example, if `ter` represents for `water`, and `mel`
represents for `melon`, then concatenate them by using `+` and print out
`water+melon` as the result.

Every order orders at least 1 goods, but won\'t exceed 30 goods.

</div>

### Input

輸入為一字串，其中以 \':\' 分隔訂單物品。 The input is a string, and the
goods are separated by \':\'.

### Output

將各物品以 \'+\' 連結，輸出該筆訂單內容。 Concatenate each goods by
using \'+\', and then print it out.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>
    #include <‍string.h>
    #define GOODS_SIZE 120
    #define MAX_ORDER_SIZE 30
    #define MAX_NAME_LEN 15

    void recovering_order(char *, char **);

    char names[GOODS_SIZE][MAX_NAME_LEN] = {
        "aluminum", "ammunition", "orange", "aspirin", "ax",
        "basketball", "zipper", "bell", "blanket", "drum",
        "canvas", "flute", "eraser", "mirror", "comb",
        "eggplant", "diamond", "zucchini", "door", "butter",
        "egg", "dart", "chair", "encyclopedia", "china",
        "fan", "glue", "elevator", "flower", "hat",
        "garlic", "strawberry", "glove", "flour", "ice",
        "ship", "hammer", "fur", "key", "honey",
        "grape", "icecream", "lock", "iron", "ivory",
        "jacket", "oil", "uniform", "kiwi", "pan",
        "helmet", "keyboard", "yoyo", "jet", "knife",
        "tie", "lemon", "xerox", "ink", "mutton",
        "newspaper", "melon", "coconut", "motorcycle", "longan",
        "nail", "rice", "magnet", "peanut", "ointment",
        "oar", "jeans", "nut", "arrow", "oven",
        "jewel", "wool", "noodle", "pencil", "lamp",
        "refrigerator", "needle", "roast", "vest", "yarn",
        "saw", "hamburger", "soap", "glass", "wine",
        "tangerine", "pillow", "umbrella", "zinc", "train",
        "uglifruit", "toast", "underwear", "vanilla", "jeep",
        "unicycle", "vase", "rope", "violin", "warship",
        "volleyball", "water", "yogurt", "submarine", "passionfruit",
        "yacht", "rose", "window", "yolk", "kite",
        "liquor", "xylophone", "toothbrush", "battery", "doll"
    };

    int main(void) {
        char order[500] = "", *result = NULL;
        scanf("%s", order);
        recovering_order(order, &result);
        printf("%s", result);
        free(result);
        return 0;
    }

<div>

### Sample1

#### Input

    ter:mel

#### Output

    water+melon

</div>

<div>

### Sample2

#### Input

    nut:il

#### Output

    nut+oil

</div>

<div>

### Sample3

#### Input

    in:lo:low

#### Output

    ink+lock+flower

</div>
