#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define Max(X,Y) (X>Y?X:Y)
int main() {
    /*
    int i=0;
    printf("加入比特\n");
    while (i < 20000) {
        printf("敲一行代码,%d\n",i);
        i++;
        
    }
    if(i>=20000)
        printf("拿一个好offer\n");
    double a = 12345678954321;
    printf("%f %e %g", a, a, a);*/
    extern Add(int, int);
    extern MAX(int, int);
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = Add(a, b);
    printf("%d\n", sum);
    int max = Max(a, b);
    printf("%d\n", max);
    int max1 = MAX(a, b);
    printf("%d\n", max1);
    int* p = &a;
    *p = 56;
    printf("%d\n", a);
    printf("%p\n", p);
    printf("%d\n", sizeof(p));
    unsigned int c = 20;
    typedef unsigned int u_int;
    u_int d = -78;
    printf("%u %u", c, d);
    return 0;
}