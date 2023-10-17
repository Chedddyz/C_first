#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;


//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b && a == c && b == c)
//                printf("Equilateral triangle!\n");
//            else if (a == b && a != c)
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}

//乘法口诀表
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for( a=1 ; a<=9; a++)
//	{
//		b = 1;
//		while ( b<=9 )
//		{
//			c = a * b;
//			printf("%d*%d=%d ",a, b, c);
//			b++;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//定义数组储存值
//	int i[10] = { 0 };
//	//提示用户输入
//	printf("请输入十个整数，并用空格隔开\n");
//	//输入值
//	for (int a = 0; a < 10; a++)
//	{
//		scanf("%d", &i[a]);
//	}
//	//储存最大值
//	int max = 0;
//	//判断最大值
//	for (int b = 0; b < 10; b++)
//	{
//		if (max < i[b])
//			max = i[b];
//	}
//	printf("最大值为%d\n", max);
//	return 0;
//}

//int main()
//{
//	double sum = 0.0;
//	int sign = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += sign * 1.0 / i;
//		sign = -sign;
//	}
//	printf("%lf ", sum);
//	return 0;
//}

//判断闰年并打印 1.能被4整除，不能被100整除  2.能被四百整除
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//1到100，出现了多少个数字9
int main(void)
{
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i / 10 == 9)
			count++;
		if (i % 10 == 9)
			count++;
	}
	printf("%d\n", count);
}