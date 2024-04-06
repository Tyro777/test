#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 100
int main()
{
   

    int i, j, n, a[N], x, k,b[N];
    scanf("%d", &n);
    for (i = 0;i < n;i++) {
        scanf("%d", &a[i]);
       
    }
    for (i = 1;i < n ;i++) {
        x = a[i];
        for (j = i - 1;j >= 0 && x < a[j];j--) {
            a[j + 1] = a[j];
        }
        a[j + 1] = x ;
        for (k = 0;k < n;k++) {
            printf("%d  ", a[k]);
        }printf("\n");
    }printf("\n\n");
    for (i = 0;i < n;i++) {
        scanf("%d", &b[i]);

    }
    xuanze(b,n);
    return 0;
}
