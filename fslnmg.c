#include<stdio.h>
//递归和非递归分别实现求第n个斐波那契数
//int print(int n)
//{
//	int sum = 0;
//	if (n < 2)
//		return n;
//	else
//		return print(n - 1) + print(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = print(n);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int sum1 = 1;
//	int sum2 = 1;
//	int i = 0;
//	int ret = 0;
//	if (n <= 2)
//		printf("%d", i);
//	for (i = 3; i <= n; i++)
//	{
//		ret = sum1 + sum2;
//		sum1 = sum2;
//		sum2 = ret;
//	}
//	printf("%d", ret);
//	return 0;
//}
//编写一个函数 reverse_string(char* string)（递归实现）
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//void reserve_string(char* string)
//{
//	char* left;
//	char* right;
//	for (left = string, right = string+ my_strlen(string) - 1; left < right; left++, right--)
//	{
//		char ret = *left;
//		*left = *right;
//		*right = ret;
//	}
//}
//int main()
//{
//	char arr[20];
//	scanf_s("%s", arr, 20);
//	reserve_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 1;
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		m = m * i;
//	}
//	printf("%d", m);
//	return 0;
//}
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//}
//int main()
//{
//	test();
//	return 0;
//}
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
