#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Tuzi(int a) {
	if (a == 0) {
		return 0;
  
	}
		
	if (a <= 2) {
		return 1;
	}
	return Tuzi(a - 1) + Tuzi(a - 2);
}

int main(){
    //两数相加
	/*int a = 0;
	int age = 0;
	int sum = 0;
	printf("两数相加\n");
	scanf("%d %d", &a, &age);
	 sum= a + age;
	
	printf("sum=%d\n", sum);
	
	printf("hello world\n");*/


	////三位数反转
	//int b = 0;
	//int m = 0;
	//printf("三位数反转\n");
	//scanf("%d",&b);
	//m = (b % 10) * 100 +( b / 10 % 10 )* 10 + b / 100;
	//
	//printf("%d\n",m );


	////交换变量
	//printf("交换变量\n");
	//scanf("%d %d", &a, &age);
	//printf("%d %d\n", age, a);



	////三整数排序,从大到小
	//int c, d, e;
	//printf("三整数排序,从大到小\n");
	//scanf("%d%d%d", &c, &d, &e);
	//
	///*if (c >= d && d >= e)
	//	printf("%d %d %d\n", c, d, e);
	//else if (c >= e && e >= d)
	//	printf("%d %d %d\n", c, e, d);
	//else if (d >= c && c >= e)
	//	printf("%d %d %d\n", d, c, e);
	//else if (d >= c && d >= e)
	//	printf("%d %d %d\n", d, e, c);
	//else if (e >= c && c >= d)
	//	printf("%d %d %d\n", e, c, d);
	//else
	//	printf("%d %d %d\n", e, d, c);*/
	//int t = 0;
	//if (c < d) {
	//	t = c;c = d;d = t;           
	//}
	//if (c < e) {
	//	t = c;c = e;e = t;
	//}
	//if (d < e) {
	//	t = d;d = e;e = t;
	//}
	//printf("%d %d %d\n", c, d, e);
	int a, b;
	scanf("%d", &a);

	printf("%d个月有几只兔子\n", a);
	b = Tuzi(a);
	printf("%d个月有%d只兔子\n", a, b);
	int m=0,n=1;
	int c;
	if (a == 0)
		printf("%d\t", m);
	else 
		printf("%d\t%d\t", m, n);
	for (int i = 0;i < a-1;i++) {
		c = m + n;
	    m = n;
	    n = c;
		printf("%d\t", c);

	}
		

		



	return 0;

	
}
