#include <stdio.h>
#include <string.h>

// strend возвращает 1 - если t в конце s и 0 - в противном 
int strend(char *s, char *t) {
    int len_s, len_t; //len_s, len_t -- длина строк s и t соответственно 
    len_s = strlen(s);
    len_t = strlen(t);
    if (len_s < len_t) {
        return 0;
    }
    if ( strcmp(s + len_s - len_t, t) == 0) // s + len_s - len_t --указатель на конец строки s длиной len_t

        return 1;
    return 0;
}

int main() {
    char s[100], t[100];
    printf("Enter a string s: ");
    scanf("%s", s);
    printf("Enter a string t: ");
    scanf("%s", t);
    if (strend(s, t)) {
        printf("t is at the end of s.\n");
    } else {
        printf("t is not at the end of s.\n");
    }
    return 0;
}
