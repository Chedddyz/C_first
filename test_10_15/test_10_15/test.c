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

//�˷��ھ���
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
//	//�������鴢��ֵ
//	int i[10] = { 0 };
//	//��ʾ�û�����
//	printf("������ʮ�����������ÿո����\n");
//	//����ֵ
//	for (int a = 0; a < 10; a++)
//	{
//		scanf("%d", &i[a]);
//	}
//	//�������ֵ
//	int max = 0;
//	//�ж����ֵ
//	for (int b = 0; b < 10; b++)
//	{
//		if (max < i[b])
//			max = i[b];
//	}
//	printf("���ֵΪ%d\n", max);
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

//�ж����겢��ӡ 1.�ܱ�4���������ܱ�100����  2.�ܱ��İ�����
//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//1��100�������˶��ٸ�����9
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