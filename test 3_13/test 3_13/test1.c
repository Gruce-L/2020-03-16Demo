#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//#define MAX = 100;

//性别
//创建一个枚举类型

//enum Sex
//{
//	//枚举常量
//	Male,
//	Female,
//	Secert,
//};

//函数
	//int ADD(int x, int y)
	//{
	//	int z;
	//	z = x + y;
	//	return z;
	//}

int main()
{
	//常量
		//1.字面常量
			//int a = 300;
			//3.14;
		
		//2.const修饰的常变量
			//int num = 10;
			//num = 20;
			////不能分配常量大小为 0 的数组,下面是错误的	
			//const int n = 10;
			//int arr[n] = { 0 };
		
		//3.#define定义的标识符常量
			//int a = MAX;
			//printf("a = %d\n", a);
		
		//4.枚举常量
		//枚举：一一列举
		//性别：男、女、其他
		//三原色：红、黄、蓝
		//int num = 10;
		//enum Sex s = Male;

		//printf("%d\n", Male);		//0
		//printf("%d\n", Female);		//1
		//printf("%d\n", Secert);		//2

	//字符和字符串
		//"abc";		//字面字符串
		//"";			//空字符串
		//字符数组中
		//字符串的结尾处存放的	'\0'	是字符串的结尾标志
			//char arr1[] = "abc";		//最后会有一个\0表示结束
			//char arr2[] = {'a','b', 'c'};
			//printf("%s\n", arr1);
			//printf("%s\n", arr);
			//printf("%d\n", strlen(arr1));		//3
			//printf("%d\n", strlen(arr2));		//随机值
		

	//转义字符
		//\t -	水平制表符	
		//printf("%c", '\'');
		//printf("\a\a\a\a");
		//printf("%d\n", strlen("c:\test\32\test.c"));		
			//13,\t是一个字符，\32是一个字符，32为八进制数
		//printf("%c\n", '\32');	//八转十为26，26对应的字符为→
		//printf("%c\n", '\x41');	//\xdd为16进制
		

	//注释
		//C++注释风格：//
		//C注释风格：/**/（有问题）

	//选择语句
		//int input = 0;
		//printf("好好学习\n");
		//printf("是否好好学习(1/0)？\n");
		//scanf("%d", &input);
		//if (input == 1)
		//	printf("A good offer\n");
		//else
		//	printf("You can`t have a good job\n");

	//循环语句
		//	int line = 0;
		//	printf("学习\n");
		//	while (line<20000)
		//	{
		//		printf("line = %d\n", line);
		//		line++;
		//	}
		//	printf("A good job\n");

	//函数
		//int a = 100;
		//int b = 200;
		//int sum = 0;

		//sum = ADD(a, b);
		//printf("%d\n", sum);
	
	//交换
		//int a = 3;
		//int b = 5;
		//int c = a&b;		//按(2进制位)与
		//	//3-011		5-101     3&5 = 001
		//int d = a|b;		//按位或
		//	//111
		//int e = a^b;		//按位异或
		//	//110

	//赋值和运算符
		//int a = 0;			//创建变量-初始化
		//a = 10;				//赋值
		//a += 1;
		//int c = a + b;		//双目操作符
								//单目操作符：只有一个操作数：！等
	
	//C语言用0表示假，!0表示真

	return 0;
}