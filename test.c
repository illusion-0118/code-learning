#include <stdio.h>
#include <string.h>
#include <math.h>
////////////////////////////////////////
//�ݹ�
//��򵥵ĵݹ�
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}//error��stack overflow -- ջ���
//ջ�� --�ֲ������������β�
//���� --��̬���ٵ��ڴ棬malloc��calloc
//��̬�� --ȫ�ֱ�����static���εı���
//
//�ݹ�ı�Ҫ������
//1�����������������������������������ʱ�򣬵ݹ�㲻�ټ���
//2��ÿ�εݹ����֮��Խ��Խ�ӽ��������������
//
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺1234����� 1 2 3 4.
//void print(n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	//print(1234)
//	//print(123)4
//	//print(12)3 4
//	//print(1)2 3 4
//	return 0;
//}
//��д���������ַ����ĳ���
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "XJTU" };
//	//intlen = strlen(arr);//���ַ�������
//	//printf()��
//	//
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}
//�������������ʱ����(count)�أ�
//int my_strlen(char* str)
//{
//	//�����жϵ�һ���ַ��Ƿ�Ϊ��\0����������ǣ������������˵ݹ�
//	if (*str != '\0')
//		return 1 + my_strlen(1 + str);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = { "XJTU" };
//
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}
