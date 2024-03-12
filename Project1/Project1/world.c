#define _CRT_SECURE_NO_WARNINGS
#define Max 100
#include<stdio.h>
#include<math.h>
int b = 2121;
void test() {
	printf("test()--%d\n", b);
}

void test3(double r,double h,double v) {
	const double pi = acos(-1.0);
	
	v = pi * r * r * h;
	printf("v=%lf\n", v);
	
}//圆柱体积


int main() {
	test();
	int a = 1123;
	printf("%d\n", a);
	extern int abo;
	printf("abo--=%d\n", abo);

	printf("加法");
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);//加法
	printf("%.8f\n", 7.0 / 9.0);


	printf("圆柱的体积");
	double r, h;
    double v = 0; ;
	scanf("%lf%lf", &r, &h);
	test3(r,h,v);


	int c = 0;
	int d = 0;
	int m ,n;
	scanf("%d%d", &n, &m);
	c = (4 * n - m) / 2;
	d = n - c;
	if (m % 2 == 1 || c < 0 || d < 0)
		printf("no answer\n");
	else
		printf("%d  %d\n", c, d);
	
		double i = 0.0;
		double o = 0.0;
		double p = i / o;
		printf("%f\n", p);
		char arr1[] = "abc";
		char arr2[] = {'a','b','c','\0'};
		printf("%s\n", arr1);
		printf("%s\n",arr2 );
		int j = 0;
		printf("加入比特\n");
		while (j < 20) {
			printf("敲一行代码\n");
			j++;
			
		}
		if (j >= 20)
			printf("拿一个好offer\n");

		
    return 0;
}
