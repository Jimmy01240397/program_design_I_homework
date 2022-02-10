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
