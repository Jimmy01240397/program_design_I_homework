Rearrange Chatting History
--------------------------

### Description

<div>

Nowadays, \"LINE\" is a well known communication application. \"LINE\"
provides a feature that you can store your chatting history into text
files(`.txt`). Unfortunately, you get a text file with incorrect order.
Therefore, your task is to rearrange the chatting history into the
ascending order with timestamp (**00:00 - 23:59**). Assume that at most
one message per minute and the history is always on the same day.

現今，\"LINE\"是個知名的通訊應用程式。"
LINE"提供了一項功能，你可以將聊天記錄存儲到文本文件(`.txt`)中。很不幸的是，你拿到了一份錯誤順序的文本文件。因此，你的任務就是將聊天紀錄依照時間升序(**00:00
- 23:59**)重新排序。假設每分鐘最多只有一則訊息且記錄一定都是在同一天。

</div>

### Input

First line is the total message (\<= 100). Then, the followings are the
each message information separated by newline with the format:
hour:miniute name content.

### Output

All message information in correct order with the format same as Input.

### Loader Code

<div>

Your code will be judge using this program:

</div>

    #include <‍stdio.h>
    #include <‍stdlib.h>
    #define MESSAGE_LENGTH 64
    #define NAME_LENGTH 10

    struct timestamp {
        int hour, minute;
    };

    struct message_info {
        struct timestamp time;
        char name[NAME_LENGTH];
        char message[MESSAGE_LENGTH];
    };

    int cmp(const void *a, const void *b);
    void sort_message(struct message_info *m, int *total);

    int main(void) {
        struct message_info m[100];
        int total;
        scanf("%d", &total);
        for(int i = 0; i <‍ total; i++) {
            scanf("%d:%d %s %[^\n]", &m[i].time.hour, &m[i].time.minute, m[i].name, m[i].message);
        }
        sort_message(m, &total);
        for(int i = 0; i <‍ total; i++) {
            printf("%02d:%02d %s %s\n", m[i].time.hour, m[i].time.minute, m[i].name, m[i].message);
        }
        return 0;
    }

<div>

### Sample1

#### Input

    9
    09:30 STUDENT I'm worried that I won't pass PD1.
    09:00 TA Hello everyone.
    09:35 TA Why do you think so?
    09:46 TA Send a sticker.
    09:41 STUDENT However, today is the final exam.
    09:01 TA If anyone has question about PD1.
    09:45 TA Well, I can just say "Haiya".
    09:02 TA If no. Hope everyone will be statisfied with your grade.
    09:40 STUDENT Because I still have lots of practices to do.

#### Output

    09:00 TA Hello everyone.
    09:01 TA If anyone has question about PD1.
    09:02 TA If no. Hope everyone will be statisfied with your grade.
    09:30 STUDENT I'm worried that I won't pass PD1.
    09:35 TA Why do you think so?
    09:40 STUDENT Because I still have lots of practices to do.
    09:41 STUDENT However, today is the final exam.
    09:45 TA Well, I can just say "Haiya".
    09:46 TA Send a sticker.

</div>

<div>

### Sample2

#### Input

    5
    10:27 B Good morning.
    00:14 A Good night.
    17:41 B Good evening.
    12:54 A Good afternoon.
    22:50 A Good night again.

#### Output

    00:14 A Good night.
    10:27 B Good morning.
    12:54 A Good afternoon.
    17:41 B Good evening.
    22:50 A Good night again.

</div>
