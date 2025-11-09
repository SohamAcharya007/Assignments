#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);

    int i = 0, j = strlen(s) - 1, flag = 1;

    while(i < j) {
        if(s[i] != s[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if(flag) printf("Palindrome");
    else printf("Not Palindrome");

    return 0;
}
