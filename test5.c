//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define N 100
//int main()
//{
//   
//
//    int i, j, n, a[N], x, k,b[N];
//    scanf("%d", &n);
//    for (i = 0;i < n;i++) {
//        scanf("%d", &a[i]);
//       
//    }
//    for (i = 1;i < n ;i++) {
//        x = a[i];
//        for (j = i - 1;j >= 0 && x < a[j];j--) {
//            a[j + 1] = a[j];
//        }
//        a[j + 1] = x ;
//        for (k = 0;k < n;k++) {
//            printf("%d  ", a[k]);
//        }printf("\n");
//    }printf("\n\n");
//    for (i = 0;i < n;i++) {
//        scanf("%d", &b[i]);
//
//    }
//    xuanze(b,n);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define N 100
//int main() {
//	int a[N], i, t, j, k  ;
//	for (i = 0;i < 10;i++) {
//      scanf("%d", &a[i]);
//	}
//	
//    k = 0;
//    for (j = 1;j < 10 - 1;j++) {
//        if (a[j] > a[k])
//            k = j;
//    }
//    t = a[0];
//    a[0] = a[k];
//    a[k] = t;
//
//        printf("%d ", a[0]);
//
//	
//		return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define N 100
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int tmp = 0;
//    printf("��������������: ");
//    scanf("%d %d", &m, &n);
//
//    while (tmp = m % n)
//    {
//        m = n;
//        n = tmp;
//    }
//    printf("���Լ��Ϊ:%d\n", n);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#include <time.h>
//
//
//
//void game()
//
//{
//
//	int num = rand() % 100 + 1;
//
//	int guess = 0;
//
//	while (1)
//
//	{
//
//		printf("��������µ���1~100��");
//
//		scanf("%d", &guess);
//
//		if (guess < num)
//
//		{
//
//			printf("��С��\n");
//
//		}
//
//		else if (guess > num)
//
//		{
//
//			printf("�´���\n");
//
//		}
//
//		else
//
//		{
//
//			printf("��ϲ�㣡�¶���\n");
//
//			break;
//
//		}
//
//	}
//
//}
//
//
//
//int main()
//
//{
//
//
//
//	int input = 0;
//
//	srand((unsigned int)time(NULL));
//
//	do
//
//	{
//
//		printf("��������Ϸ������1��ʼ������0�˳�\n");
//
//		scanf("%d", &input);
//
//		switch (input)
//
//		{
//
//		case 1:
//
//			game();
//
//			break;
//
//		case 0:
//
//			printf("�����˳�\n");
//
//			break;
//
//		default:
//
//			printf("����������������룡\n");
//
//			break;
//
//		}
//
//	} while (input);
//
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        int j = 0;
//        for (j = 2; j <= i; j++)
//        {
//            if (i % j == 0)
//            {
//                break;
//            }
//        }
//        if (i == j)
//        {
//            count++;
//            printf("%d ", i);
//        }
//    }
//    printf("\ncount=%d\n", count);
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>
//int main() {
//	char input[20];
//	system ("shutdown - s - t 60");
//	while (1) {
//		printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ���������룺��������ȡ���ػ�\n");
//	    scanf("%s", &input);
//		if (strcmp("������", input) == 0) {
//			system("shutdown -a");
//			break;
//		}
//
//	}
//	return 0;
//
//}
#include<time.h>
void menu() {
	printf("**************************\n");
	printf("**********1.Play**********\n");
	printf("**********0.Exit**********\n");
	printf("**************************\n");
}
void game() {
	int input = rand()%100+1;
	int n = 0;
	
	while (1) {
		printf("������֣�\n");

		scanf("%d", &n);

		if (input > n) {
			printf("��С�ˣ����²�\n\n");
		}
		else if (input < n) {
			printf("�´��ˣ����²�\n\n");
		}
		else {
			printf("�¶��ˣ���ϲ��\n\n\n");
			break;
		}
	}
}
int main() {
	
	srand((unsigned int)time(NULL));
	int i = 0 ;
	
	do {
		menu();

		printf("��ѡ��\n");

		scanf("%d", &i);

       
		switch (i) {

		case 1:
			game();
			printf("������\n\n");
			break;
		case 0:
			printf("�˳���Ϸ\n\n");
			break;
		default:
			printf("ѡ���������ѡ��\n\n");
		}
	} while (i);
	

}