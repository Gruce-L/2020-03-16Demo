#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//#define MAX = 100;

//�Ա�
//����һ��ö������

//enum Sex
//{
//	//ö�ٳ���
//	Male,
//	Female,
//	Secert,
//};

//����
	//int ADD(int x, int y)
	//{
	//	int z;
	//	z = x + y;
	//	return z;
	//}

int main()
{
	//����
		//1.���泣��
			//int a = 300;
			//3.14;
		
		//2.const���εĳ�����
			//int num = 10;
			//num = 20;
			////���ܷ��䳣����СΪ 0 ������,�����Ǵ����	
			//const int n = 10;
			//int arr[n] = { 0 };
		
		//3.#define����ı�ʶ������
			//int a = MAX;
			//printf("a = %d\n", a);
		
		//4.ö�ٳ���
		//ö�٣�һһ�о�
		//�Ա��С�Ů������
		//��ԭɫ���졢�ơ���
		//int num = 10;
		//enum Sex s = Male;

		//printf("%d\n", Male);		//0
		//printf("%d\n", Female);		//1
		//printf("%d\n", Secert);		//2

	//�ַ����ַ���
		//"abc";		//�����ַ���
		//"";			//���ַ���
		//�ַ�������
		//�ַ����Ľ�β����ŵ�	'\0'	���ַ����Ľ�β��־
			//char arr1[] = "abc";		//������һ��\0��ʾ����
			//char arr2[] = {'a','b', 'c'};
			//printf("%s\n", arr1);
			//printf("%s\n", arr);
			//printf("%d\n", strlen(arr1));		//3
			//printf("%d\n", strlen(arr2));		//���ֵ
		

	//ת���ַ�
		//\t -	ˮƽ�Ʊ��	
		//printf("%c", '\'');
		//printf("\a\a\a\a");
		//printf("%d\n", strlen("c:\test\32\test.c"));		
			//13,\t��һ���ַ���\32��һ���ַ���32Ϊ�˽�����
		//printf("%c\n", '\32');	//��תʮΪ26��26��Ӧ���ַ�Ϊ��
		//printf("%c\n", '\x41');	//\xddΪ16����
		

	//ע��
		//C++ע�ͷ��//
		//Cע�ͷ��/**/�������⣩

	//ѡ�����
		//int input = 0;
		//printf("�ú�ѧϰ\n");
		//printf("�Ƿ�ú�ѧϰ(1/0)��\n");
		//scanf("%d", &input);
		//if (input == 1)
		//	printf("A good offer\n");
		//else
		//	printf("You can`t have a good job\n");

	//ѭ�����
		//	int line = 0;
		//	printf("ѧϰ\n");
		//	while (line<20000)
		//	{
		//		printf("line = %d\n", line);
		//		line++;
		//	}
		//	printf("A good job\n");

	//����
		//int a = 100;
		//int b = 200;
		//int sum = 0;

		//sum = ADD(a, b);
		//printf("%d\n", sum);
	
	//����
		//int a = 3;
		//int b = 5;
		//int c = a&b;		//��(2����λ)��
		//	//3-011		5-101     3&5 = 001
		//int d = a|b;		//��λ��
		//	//111
		//int e = a^b;		//��λ���
		//	//110

	//��ֵ�������
		//int a = 0;			//��������-��ʼ��
		//a = 10;				//��ֵ
		//a += 1;
		//int c = a + b;		//˫Ŀ������
								//��Ŀ��������ֻ��һ��������������
	
	//C������0��ʾ�٣�!0��ʾ��

	return 0;
}