#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}
//5 5 5 5 ...

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c = 6
//	b = ++c, c++, ++a, a++;//c = 8 a = 7 b = 7
//	b += a++ + c;//b = 23
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int shang = a / b;
//    int yu = a % b;
//    printf("%d %d",shang,yu);
//        return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int it = 0;
//    while (scanf("%d", &it))
//        if (it > 140)
//        {
//            printf("Genius");
//        }
//    return 0;
//
// 
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while (scanf("%d %d", &a, &b) != EOF)
//        if (a > b)
//            printf("a>b\n");
//        else if (a == b)
//            printf("a=b\n");
//        else
//            prinrf("a<b\n");
//    return 0;
//}

int main()
{
    int a = 0;
    char ch = '*';
    while (scanf("%d", &a) != EOF)
        ch *= a;
    printf("%s\n", ch);
        return 0;
}