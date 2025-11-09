#include <stdio.h>

int stringLength(char s[]) {
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}

void stringCopy(char dest[], char src[]) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void stringAppend(char s1[], char s2[]) {
    int i = stringLength(s1);
    int j = 0;
    while(s2[j] != '\0') {
        s1[i] = s2[j];
        i++; j++;
    }
    s1[i] = '\0';
}

int stringCompare(char s1[], char s2[]) {
    int i = 0;
    while(s1[i] == s2[i]) {
        if(s1[i] == '\0')
            return 0;
        i++;
    }
    return s1[i] - s2[i];
}

int main() {
    char a[100], b[100];

    scanf("%s %s", a, b);

    printf("Length of a = %d\n", stringLength(a));

    stringCopy(b, a);
    printf("Copy = %s\n", b);

    stringAppend(a, b);
    printf("Append = %s\n", a);

    printf("Compare result = %d", stringCompare(a, b));

    return 0;
}
