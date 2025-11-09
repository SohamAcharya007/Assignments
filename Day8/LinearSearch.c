#include <stdio.h>

int main() {
    int n, key, flag = 0;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Element found at index %d", i);
            flag = 1;
            break;
        }
    }

    if(!flag)
        printf("Element not found");

    return 0;
}
