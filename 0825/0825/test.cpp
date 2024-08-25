#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "windows.h"
#include "string.h"
//extern	int g_val;
//const int abc = 1;
//#define MAX 10000;
//
//enum Sex
//{
//	//默认从0开始
//	MALE = 3,//赋初值后续的递增
//	FEMALE,
//	SECRET
//};
//
//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

int main()
{
	//printf("Sex is %d\n",Sex::MALE);
	//printf("g_val is %d\n", g_val);
	//char ch = 'a';
	//int age = 20;
	//short num = 8;
	//float weight = 55.99;
	//double doub_weight = 55.9999;
	//int a = sizeof(char);
	//printf("Hello World %d\n", a);
	//printf("ch is %d,int age is %d,num is %d,weith is %f,double weight is %lf\n", ch, age, num, weight, weight);
	//printf("char is %d,int is %d, short is %d,float is %d,double is %d\n", sizeof(char), sizeof(int), sizeof(short), sizeof(float), sizeof(double));

	////int ch2;

	////for (ch2 = 48; ch2 <= 100; ch2++) {
	////	printf("ASCII 值 = %d, 字符 = %c\n", ch2, ch2);
	////}

	//char chA = 'A';
	//char str[20] = "www.runoob.com";
	//float flt = 10.234;
	//int no = 150;
	//double dbl = 20.123456;
	//printf("字符为 %c \n", chA);
	//printf("字符串为 %s \n", str);
	//printf("浮点数为 %f \n", flt);
	//printf("整数为 %d\n", no);
	//printf("双精度值为 %lf \n", dbl);
	//printf("八进制值为 %o \n", no);
	//printf("十六进制值为 %x \n", no);

	//int inta = 0;
	//int intb = 0;
	//printf("请输入两个整数:\n");
	//scanf("%d %d", &inta, &intb);
	//int sum = inta + intb;
	//printf("a + b 等于%d\n", sum);

	//if (sum > 50)
	//{
	//	printf("sum 大于50\n");
	//}
	//else
	//{
	//	printf("sum 小于等于50\n");
	//}

	//int i = 0;
	//int SUMa = 0;
	//for (i = 0; i < 20; i++)
	//{
	//	SUMa += i;
	//}
	//printf("SUMa 等于:%d\n",SUMa);
	//system("pause");

	//int arr[10] = { 0 };
	//int j = 0;
	//for (j = 0; j < 10; j++)
	//{
	//	scanf("%d", &arr[j]);
	//}

	//int max = arr[0];

	//for (j = 0; j < 10; j++)
	//{
	//	if (arr[j] > max)
	//	{
	//		max = arr[j];
	//	}
	//}
	//int *p = arr;
	//for (j = 0; j < 10; j++)
	//{
	//	printf("%d ", *p);
	//	p++;
	//}
	//printf("输入的十个数最大的是%d\n",max);

	//字符数组 -- 数组是一组相同类型的
	//char st_arr1[] = "hello world";
	//char st_arr2[] = { 'a','b','c' };
	//printf("st_arr1 is %s", st_arr1);
	//printf("st_arr2 is %s", st_arr2);

	//char arr1[] = "abc";
	//char arr2[3] = {'a','b','c'};
	//int length1 = strlen(arr1);
	//int length2 = strlen(arr2);

	//printf("%s,length is %d\n",arr1,length1);
	//printf("%s,length is %d\n",arr2,length2);
	//printf("c:\\test\\test.cpp");
	//printf("\a\a\a\a\a");

	//if (boolean_expression 1)
	//{
	//	/* 当布尔表达式 1 为真时执行 */
	//}
	//else if (boolean_expression 2)
	//{
	//	/* 当布尔表达式 2 为真时执行 */
	//}
	//else if (boolean_expression 3)
	//{
	//	/* 当布尔表达式 3 为真时执行 */
	//}
	//else
	//{
	//	/* 当上面条件都不为真时执行 */
	//}

	//int line = 0;
	//while (line < 30000)
	//{
	//	printf("写代码:%d\n", line);
	//	line += 10;
	//	line = ADD(line, 1000);
	//}

	//if (line == 30000)
	//{
	//	printf("OK");
	//}
	int num[10] = {1,2,3,4,5,6,7,8,9,10};
	char ch11[10] = { 'a','b','c','d' };//不完全初始化，剩余的默认为0

	return 0;
}

