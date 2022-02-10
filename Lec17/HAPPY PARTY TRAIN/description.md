HAPPY PARTY TRAIN
-----------------

### Description

<div>

One tourist train is departing, and it\'s powered by a steam locomotive.

Unfortunately, when passengers holding a party in cars,

the coal used as fuel in the back of the locomotive is on fire, burning
red.

And every car contains different number of flammable items.

When passengers see the fire coming, they try to move these items to
prevent fire burn to their car.

If number of peoples in the car \>= amounts of flammable items, fire
will not burn to this car and the following cars.

Otherwise, passengers in this car will evacuate to the the next car.

Now you know the number of people & flammable items in each car,

Please calculate how many cars will be burnt by fire.

This train is represented with linked-list，each `Car` node\'s `next`
will point to the next car，last cat will points to `NULL`

![Image](https://i.imgur.com/sK1mOQQ.png)

一列鐵道觀光專車在春天來臨的花香中，乘著無盡想像發車了

為了為乘客們帶來種種回憶，主辦單位特別使用蒸氣火車頭牽引這列專車

很不幸的，乘客們正在車廂中開派對時，車頭後作為燃料的煤炭起火了，正發出熊熊火光

而後方每節車廂中都有數量不等的易燃物

當大家發現火災發生時，便試著將易燃物搬開來避免火勢延燒

若該節車廂人數 \>=
易燃物數量時，火勢便會停止蔓延，不會延燒到該節和後續的車廂

但若人數不足，則車廂中所有人都會移往下一節車廂逃生

直到延燒停止或所有乘客無處可逃並跳車為止。

你已知的有每節車廂中的人數及易燃物數量

請計算火勢總共會延燒幾節車廂？

這列火車以 linked-list 形式紀錄，每個 `Car` 節點的 `next`
會指向下一節車廂，最後一節車廂則指向 `NULL`\
![Image](https://i.imgur.com/sK1mOQQ.png)

<https://youtu.be/eVwdeIDjXeM>

</div>

### Input

Head node of the linked-list representing the train.

### Output

Return one integer how many car is on fire.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>

    struct Car {
        int passenger;
        int flammable;
        struct Car *next;
    };

    void attachCar(struct Car *head, int passenger, int flammable) {
        struct Car *curr = head;
        while(curr->next) curr = curr->next;             // Find the end of the train

        struct Car *newcar = malloc(sizeof(struct Car)); // Make a new car
        newcar->passenger = passenger;                   // Let passengers in
        newcar->flammable = flammable;                   // Load flammable items
        newcar->next = NULL;                             // This is the last car

        curr->next = newcar;                             // Attach new car to the train
    }

    int fire(struct Car *head);

    int main(int argc, char *argv[])
    {
        int cars;
        int human[13], moeru[13];

        struct Car head;
        head.next = NULL; // passenger & flammable for head in useless

        scanf("%d", &cars);
        for (int i = 0; i <‍ cars; ++i) {
            scanf("%d", &human[i]);
        }
        for (int i = 0; i <‍ cars; ++i) {
            scanf("%d", &moeru[i]);
        }

        for (int i = 0; i <‍ cars; ++i) {
            attachCar(&head, human[i], moeru[i]);
        }

        printf("%d", fire(&head)); // The train is on fire now

        return 0;
    }

<div>

### Sample1

#### Input

    9
    2 1 4 7 4 8 3 6 4
    5 9 8 6 1 3 5 2 4

#### Output

    3

</div>

<div>

### Sample2

#### Input

    4
    17 17 11 8
    23 35 36 37

#### Output

    2

</div>
