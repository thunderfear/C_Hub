#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <malloc.h> //��Ӧcalloc

// char�ַ� short2���ֽڣ������� %d���� %c�ַ� %f���㣨С���� %p��ַ��ʽ %x16��������
// exturn �����ⲿ����������ԭ�еĻ������������һ���µ���Ŀ �ڳ�����extern�ɽ�����Ŀ�еı������õ�����������

//�ӷ�����
////int num = 0;
////int num2 = 0;
////int main()
////{
////
////	scanf_s("%d%d",&num,&num2);
////	int sum = 0;
////	sum = num + num2;
////	printf("sum = %d\n", sum);
////	return 0;
////}



//const���εĳ�����
//int main()
//{
//	//int n = 10;
//	//int arr[n] = { 0 };//��ʱ�������ʽarr'[]'���뺬�г���ֵ�����С�n�����ǳ�����
//
//
//	//const - �����ԡ�const���εĳ����������ܸı�
////	const int num = 4;   //n ���г����ԣ����Ǳ���
////	printf("%d\n", num);
////	num = 8;//������Ϊ��const ʹnum = 4 �����Ըı�����num = 8 ���ܴ�ӡ
//}





//#define ����ı�ʶ������
//#define MAX 10          //define ����ı�ʶ������(������#define��ȫ�ֱ����;ֲ������У���Ӱ�����ִ��)
//
//int main()
//{//MAX��ʱ�ǳ�����#define ���Է��ھֲ��������ʹ�á�
//	//int MAX = 10;  ��ʵ����Ʊ��� int MAX = 10���ھֲ������в����ã����Ʋ�C���Ե�ִ��˳�������������£�������������ִ�С�
//	int arr[MAX] = { 0 };//���ޡ�{0}���ᱨ��δ���õľֲ�����
//	printf("%d\n", MAX);
//}
//ö�ٳ���--һһ�оٵĳ��������ɱ��ı䣩
// ����
//enum Color          enum--ö�ٹؼ���//��enum����ö�٣���һ���������ͣ����ڶ���һ��Ԥ�����������������Щ����������ֵ�ǹ̶��ģ����ܱ��޸ġ�����ʹ��enum������궨��
//{
//	yellow,
//	white,
//	pink,
//};
//int main()
//{
	//printf("%d\n", yellow);
	//printf("%d\n", white);
	//printf("%d\n", pink);
	/*enum Color color = white;*/     

	//�ַ���
//	char arr1[] = "blank";
//	char arr2[] = { 'b','l','a','n','k',0};//�������Ӻ���arr1 �� arr2 ��� arr1ĩβ����һ��\0,\0Ϊ����
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);//�����������⡣��������0֮��������Ϊblank
	/*char arr[] = "abc";//����һ���ַ������ͣ����ַ��������󳤶�
	char arr1[] = { 'a','b','c' };
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr1));
	printf("%c\n", 'a');*/
 //arr1�ַ����������������
 
 
 
//ת���ַ�
//int main
// {
//	printf("c:\test\32\test.c");     //---������������ ���Ϊc:    est��   
//									 //��Ϊ'/'Ϊת���ַ� ��Ҫ��"/"��//��ֹ��������ת��
//   }
// ������ӡһ�������ķ��ŵ�ʱ�� �ڴ˷���ǰ�����һ��/ ʹ��ת��
//       \tˮƽ�Ʊ��,Ҳ����һ������
//      \xdd dd��ʾ����ʮ�����Ƶĵ�����
// 	   \ddd ��ʾ1-3���˽������� �˽������֡���0-7 ���ܳ���8 �������﷨
//printf("%c\n",'\x61'); //������Ϊa ��ӦASCII��Ϊ113 


//if else �ж�
/*	int input = 0;
	printf("�������\n");
	printf("������������1/0��>:");
	scanf(" %d", &input);//�˴���������� int input
	if (input == 1)
		printf("an offer\n");
	else
		printf("keep the fuck on\n");*/

		
//ѭ��
	/*int line = 0;
	while(line < 20000)
	{
		printf("һ�д���%d\n",line);//��ʱ��line����ʾ����
		line++;
	}
	printf("ok");*/

/*C for ѭ��
for ѭ�������дһ��ִ��ָ��������ѭ�����ƽṹ��
�﷨
C ������ for ѭ�����﷨��
for (init; condition; increment)
{
	statement(s);
}/*

/*������ for ѭ���Ŀ�������
init �����ȱ�ִ�У���ֻ��ִ��һ�Ρ���һ��������������ʼ���κ�ѭ�����Ʊ�����Ҳ���Բ�������д�κ���䣬ֻҪ��һ���ֺų��ּ��ɡ�
�����������ж� condition�����Ϊ�棬��ִ��ѭ�����塣���Ϊ�٣���ִ��ѭ�����壬�ҿ���������ת�������� for ѭ������һ����䡣
��ִ���� for ѭ������󣬿���������������� increment ��䡣������������ѭ�����Ʊ����������������գ�ֻҪ����������һ���ֺų��ּ��ɡ�
�����ٴα��жϡ����Ϊ�棬��ִ��ѭ����������̻᲻���ظ���ѭ�����壬Ȼ�����Ӳ�ֵ����Ȼ�������ж�����������������Ϊ��ʱ��for ѭ����ֹ��*/

//��

/*int main()
{

	for (int a = 10; a < 20; a = a + 1)
	{
		printf("a ��ֵ�� %d\n", a);
	}

	return 0;
}
*/

/*do...while ѭ��
���� for �� while ѭ������������ѭ��ͷ������ѭ���������� C �����У�do...while ѭ������ѭ����β���������������
do...while ѭ���� while ѭ�����ƣ����� do...while ѭ����ȷ������ִ��һ��ѭ����

C ������ do...while ѭ�����﷨��
do
{
	statement(s);

} while (condition);
�������ʽ������ѭ����β��������ѭ���е� statement(s) ��������������֮ǰ����ִ��һ�Ρ�
�������Ϊ�棬����������ת������� do��Ȼ������ִ��ѭ���е� statement(s)��������̻᲻���ظ���ֱ������������Ϊ��Ϊֹ��

*/
//��
/* int main()
{
	int a = 10;
	do
	{
		printf("a ��ֵ�� %d\n", a);
		a = a + 1;
	} while (a < 20);

	return 0;
} */


	
	//����
//���������ֵ
//int num = 10;
//	int main()
//{
//	int num = 1;
//	printf("num = %d'\n", num);
//	return 0;
//
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("���ֵ��%d\n", num1);
//	else
//		printf("���ֵ����%d\n", num2);
//	return 0;
//
//}

/*int max(int num1, int num2);
int main()
{
	int a = 100;
	int b = 200;
	int q;
	q = max(a, b);
	printf("MAX value is :%d\n", q);
}
int max(int num1, int num2)//����������������������
{
	int q;
	if (num1 > num2)
		q = num1;
	else
		q = num2;

}
*/
//������������ͳ��ȣ�sizeof ���ڼ�������������ͳ���
//int main()
//{
//	int a = 20;
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof (int));
//	return 0;
//}




//���� "()"-------ǿ��ת��
//����
/*int main()
{         //����һ������a
	//int a = 3.14;  //�˴�����ʾ���ӡ�int��ת��Ϊ��double�����ܻᶪʧ���ݣ���ʱ���Խ�3.14ǰ���Ϊ int a = (int)3.14,��ʱ(int)�Ὣ3.14�����͵�С��ǿ��ת��ΪintҲ�������Ρ�
	int  a = (int)3.14;
	printf("a = %d\n", a);        
}*/

//��Ŀ(����������)������ ������
//��
/*int main()
{
	int a = 10;
	int b = 20;
	int max = 0; 
	max = (a > b ? a : b);        //exp1?exp2:exp3 �������˴��ʺ�:exp1���������ǳ���������exp2,���ǲ�����=��������exp3
	printf("MAX = %d\n", max);
}*/



//�������ò�����-------"()"
/*int ADD(int x, int y)  //��������ADD
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = ADD(a, b);  //�˴�"()"������a �� b
	printf("sum = %d\n", sum);
	return 0;
}*/




//�����ؼ���
// auto
//int main()
//{
//	/*auto*/ int a = 0;//�ֲ�����-�Զ����� auto������
//}
//register --�Ĵ����ؼ���
//int main()
//{
//	register int a = 10;        //�����顱��a�洢���Ĵ�����
//}
//sigened      //int ����ı����з���--singed int �ȼ��� int
//unsinged     //�޷��Ŷ���
//unsigned int num = -1;//�޷��ž��������Ǹ�������num������ֵ��Ȼ����ֵ
//����ķ��������ܸ��ؼ��ֳ�ͻ�������ظ�������

//typedef���Ͷ���
//typedef unsigned int u_int;    //���¶���unsigned int ---u_int ����Ч��һ��  
//unsigned int a = 20;
//u_int a = 20;
// 
//void test() //����һ��test����
//{
//	static int q = 1;   //ʹq��Ϊ�ֲ�����		static���ξֲ�������ʹ�ֲ��������������ӳ���	     
//	q++;	
//	printf("q = %d\n", q);
//}
//int main()
//{
//	int a = 0;
//	while (a < 5) 
//	{
//		test();   //��ת������test��ִ�У�testִ�н����󷵻ص�while�м���ִ�С�
//		a++;
//	}
//}

//int main()
//{
//	extern int g_val;  //extern�����������
//	printf("g = %d\n",g_val);//��static���뵽add.c��ʱ�������������ܱ����á�
//							 //static����ȫ�ֱ���ʱ����add.c�У��ı����������þ�̬��ȫ�ֱ���ֻ���������ڵ��ļ���ʹ�á�
//}
//int ADD(int x, int y)
//{
//	int q = 0;								//�˴�����add.c�ļ���
//	q = x + y;
//	return q;
//}

//����һ���ⲿ����
//extern int ADD(int, int);    //�����ⲿ����������static�����ⲿ����ʱ�����ܵ���.��ʱstatic�ı��˺������������ԡ�
//int main()                   //�������ԣ��ⲿ��������----->�ڲ���������
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("sum = %d\n", sum);
//}

//����#define����ĳ���
// #define MAX 100;
//��Ķ���
//#define MAX 100;
//#define MAX(X,Y?XY)
//#define MAX(X,Y) (X>Y?X:Y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);	
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//}


//ָ��
/*int main()
{
	//int a = 590;
	//int* p = &a;    
	//*p = 20;      //*-�����ò�����
	char ch = 's';
	char* pc = &ch;
	//*pc = 'q';

	//printf("%p\n", &a);
	//printf("% p\n",p);
	printf("%d\n",sizeof(pc));
}*/


////�ṹ��
////struct -�ṹ��ؼ���
//struct BOOK
//{
//	char name[20];
//	short prise;
//};   //���ֺŲ���ȱ�������������͵�
//int main()
//{
//	struct BOOK b1 = { "C���Գ������",55 };
//	struct BOOK* pb = &b1;
//	//printf("����%s\n", (*pb).name);       //ʹ��ָ���ӡ���� �۸�
//	//printf("�۸�%dԪ\n", (*pb).prise);
//	printf("�۸�%d\n", pb->prise); //->  �﷨�� �ṹ��->��Ա
//	                               //->  �﷨�� �ṹ��.��Ա
//	printf("����%s\n", pb->name);
//	//printf("����:%s\n", b1.name);
//	//printf("�۸�:%dԪ\n", b1.prise);
//	b1.prise = 5;
//	printf("�޸ĺ�ļ۸�:%d\n", b1.prise);
//}



////ѭ����֧
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue; //��ֹ����ѭ�� continue����Ĵ��벻����ִ��
//		printf("i = % d \n", i);
//		i++;
//	}
//}

//getchar putchar 
//getchar������ʹ�ü��������������ĸ��putchar����ӡ��ʹ�õ���ĸ
//����һ����������ĳ���
//int ch = 0;
//int ret = 0;
//char password = { 10 };
//printf("��������")��








//n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int sum = 1;
//	int i = 0;
//	scanf_s("%d",&a);
//	for (n = 0; n <= a; n++)
//	{
//		for (i = 1; i <= 5; i++)
//		{
//			sum = i * sum;
//		}
//	}
//	
//	printf("sum = %d\n",sum);
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//	}
//	if (i == 3)
//		printf("������󳬹������˳�����\n");
//	return 0;
//}


//main()
//{	
//	char ch [] = "this is a test";
//	int i = 0;
//	char c = getchar();           /*������Ӧ����putcharѭ��ֱ��ȡ�������ַ���*/
//	int left = 0;
//	int right = strlen(ch) - 1;
//	while(left<=sizeof(ch))
//	{	
//		putchar(ch[c]);
//		left++;
//	}
//}


//int main() {
//	char ch[] = "this is a test";
//	int i = 0;
//	char c = getchar();
//	int left = 0;
//
//	while (left <= sizeof(ch)) {
//		putchar(ch[c]);
//		left++;
//	}
//
//	return 0;
//}


//����
//void clean(int number)/*������ʽ ����(��ʽ + ����)*/
//{
//	printf(".516*\n");
//}
//int sum(int a, int b)
//{
//	int ret = a + b;
//	printf("ret=%d\n", ret);
//	return ret;/*�����������ֵ���ظ�sum*/
//}
//int main()
//{
//	clean(1);   /*���ú���*/
//	int num = sum(5,10);
//}



////����������
//void fool();/*ȫ�ֱ������������ñ������������������Ѱ���ҵĺ���*/
//void foo()
//{
//	printf("156");
//}
//
//int main()
//{
//	foo();
//	fool();
//}
//
//void fool()
//{
//	printf("fool\n");
//}

//����Ĳ����ɾ��
// void show(int arr[],int size);	
//int main()
//{
//	int arr[7] = { 1,2,3,4,5 };
//	int menu;
//	int core = -1;
//	int num = 0;
//	int capcity = 7; 
//	int size = 5;//��ǰ�����б�����ЧԪ�صĸ���
//	arr[size++] = num;
//
//
//
//	show(arr, size);
//	bool isRunning = true;
//	while (isRunning)
//	{
//		int op = menu();
//		switch (op)
//		{
//		case 1:
//		{	//��������
//			printf("�����������");
//			scanf("%d", &core);
//			arr[size++] = core;
//			if (size == capcity)
//			{
//				printf("�������ܲ���");
//			}
//		}
//		break;
//		case 2:
//		{	show(num, size);
//			break;
//			default:
//			break;
//		}
//		case 4:
//		{
//			isRunning = false;
//		}
//
//		system("pause");
//		system("cls");
//	}
//}
//
//
//void show(int arr[],int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int menu()
//{
//	printf("-------------------");
//	printf("----1.��������-----");
//	printf("----2.��ʾ����-----");
//	printf("----3.ɾ������-----");
//	printf("----4.�˳�����-----");
//	printf("-------------------");
//	int select = -1;
//	printf("ѡ�����");
//	scanf("%d", &select);
//	return select;
//}




////ð������
//void show(int arr[], int size);
//void boob(int arr[], int size);
//void selectSort(int arr[], int size);
//int main()
//{
//	int arr[5] = { 2,7,3,9,6 };
//	show(arr, 5);
//	boob(arr, 5);
//	show(arr, 5);
//	printf("---------------\n");
//
//	int nums[5] = {6,8,9,5,1};
//	show(nums,5);
//	selectSort(nums, 5);
//	show(nums, 5);
//
//}
//void show(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	putchar('\n');
//}
//
//void boob(int arr[], int size)
//{
////	//�����������ڵ�����Ԫ�رȽϣ������㣨����/���򣩾ͽ�����ֱ���������Ϊֹ��
////	for (int i = 0; i < size - 1; i++)//���ѭ��������������
////	{
////		for (int k = 0; k < size - 1-i; k++)
////		{
////			if (arr[k] > arr[k + 1])
////			{
////				int tmp = arr[k];
////				arr[k] = arr[k + 1];
////				arr[k + 1] = tmp;
////			}
////		}
////	}
////}
//
////ð������Ľ�
//	for (int i = 0; i < size - 1; i++)//���ѭ��������������
//	{
//		bool isOrder = true;//Ĭ���������
//		for (int k = 0; k < size - 1-i; k++)
//		{
//			if (arr[k] > arr[k + 1])
//			{
//				int tmp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = tmp;
//				isOrder = false;
//			}	
//		}
//		printf("i = %d\n", i);
//		if (isOrder)
//		{
//			break;//���������ľ�����forѭ��i��������
//		}
//	}
//
//}
////ѡ������selectSort
//void selectSort(int arr[], int size)
//{
//	int i = 0;
//	for (i = 0; i < size - 1;i++);
//	{
//		int min = i;
//		for (int k = i+1;k<size;k++)//��ʼѭ���ĵĵڶ�λ���֣�Ѱ�ҵ�һ��λ�Ǹ��󣬲����
//		{
//			if (arr[k] < arr[min])
//			{
//				min = k;
//			}
//		}
//		//����
//		if(min != i)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[min];
//			arr[min] = tmp;
//		}
//		
//	}
//
//}




/*
//λ��:�ṹ������γ�Ա����ָ��λ��
struct BitField
{
	unsigned char a : 1;//aֻռ1��bit
	unsigned char b : 4;// 4bit
	unsigned char c : 3;// 3bit
};

struct bit
{
	char a : 3;
	short b : 9;//char b :9;λ��Ĵ�С��Ч
};



int main()
{
	printf("%llu\n", sizeof(struct BitField));
	//���岢��ʼ��
	struct BitField bit = { 1,2,3 };
	//���
	printf("%d %d %d\n", bit.a,bit.b,bit.c);
	//����
	bit.a = 2; // 1 0
	bit.b = 20;// 1 0100
	bit.c = 8;// 1 000
	//���
	printf("%d %d %d\n", bit.a, bit.b, bit.c);
}


typedef struct bits
{
	uint8_t b0 : 1;
	uint8_t b1 : 1;
	uint8_t b2 : 1;
	uint8_t b3 : 1;
	uint8_t b4 : 1;
	uint8_t b5 : 1;
	uint8_t b6 : 1;
	uint8_t b7 : 1;
}bits;//�����˰˸���Ա��ÿ����Առһ��λ
int main()
{
	printf("%llu\n", sizeof(bits));
	uint8_t n = 127;
	//1.ͨ��λ����������е�λ
	//2.ͨ��bits������е�λ
	bits* bits = &n;
	printf("%d %d %d %d %d %d %d\n",bits->b7, bits->b6, bits->b5, bits->b4, bits->b3, bits->b2, bits->b1, bits->b0);

	uint32_t s = 0x12345678;
	for (int i = 0;i<4;i++)
	{
		bits = (uint8_t*) & s + (4-i);
		printf("%d %d %d %d %d %d %d", bits->b7, bits->b6, bits->b5, bits->b4, bits->b3, bits->b2, bits->b1, bits->b0);

	}
}
*/




//����->���г�Ա����һ���ڴ棬ʹ��union�ؼ���
//typedef union Data
//{
//	uint32_t i;
//	char str[4];
//}Data;
//int main()
//{
//	printf("%llu\n", sizeof(Data));
//	Data d = { .i = 5,.str = "hhh" };//ֻ�����һ����ʼ���ĳ�Ա����Ч��
//	printf("%u   %s\n", d.i, d.str);
//	d.i = 0x12345678;
//	for (int i = 0; i < 4; i++)
//	{ 
//		printf("%#x ", d.str[i]);
//	}
//}
//typedef struct string
//{
//	char* str;//��̬����
//	int length;//����
//	union 
//	{
//		int capacity;//����
//		char buf[32];//��̬����
//	};
//	
//	
//}string;
//string str_new(const char* str);
////str ��Ҫ��̬���䣬�����ڴ�ʱ��Ҫ����ʱ��ģ���̬�ڴ�����Ⱦ�̬�ڴ����ࣩܶ
////�����Ǵ洢�ַ����Ƚ϶̵�ʱ��ֱ�Ӵ洢��ջ�����ܳ���ʱ���ٷ��䡣
////�����ַ����ĳ�����������δ洢
//int main()
//{
//	string str = str_new("hello world");
//
//}
//string str_new(const char* str)
//{
//	string s;
//	int len = strlen(str);
//	if (len<32)
//	{
//		strcpy(s.buf, str);
//	}
//	else
//	{
//		s.length = strlen(str);
//		s.capacity = strlen(str);	
//		s.length = strlen(str);
//		s.str = calloc(s.length, sizeof(char) + 1);
//
//	}
//	
//
//}

//�ļ�����


//�ļ��Ĵ���ر�
/*void openAndClose()
{
	//r read ֻ�����ļ������ڴ�ʧ��
	//w ֻд�����ܶ����ļ��������Զ������������Զ����
	//���ļ�
	FILE* fp = fopen("eeee.avi", "a");
	if (!fp)
	{
		perror("open filed\n");//perror׷�Ӵ�����Ϣ
		return;
	}

	fputs("asdad", fp);//fputc������һ���ַ�д�뵽�ļ��еģ�������д���ַ����ġ�������fputs

	//�ر��ļ�
	fclose(fp);//fputc������һ���ַ�д�뵽�ļ��еģ�������д���ַ����ġ�������fputs

}
*/

//void charWrite()
//{
//	FILE* fp = fopen("aad.txt", "w");
//	if (!fp)
//	{
//		perror("open failed");
//		return;
//	}
//	//дһ���ַ�
//	fputc('#', fp);
//	for (int i = 0;i<26;i++)
//	{
//		fputc('A' + i, fp);
//	}
//	
//	char buf[] = "hello world\n";
//	for (int n = 0;buf[n];n++)
//	{
//		fputc(buf[n], fp);
//	}
//	fclose(fp);
//}

////�ַ�����
//void strRead()
//{	
//	FILE* fp = fopen("����.txt", "r");
//	if (!fp)
//	{
//		perror("open failed");
//		return;
//	}
//	char buf[BUFSIZ] = { 0 };
//	//��
//	if (!fgets(buf,BUFSIZ, fp))
//	{
//		printf("read failed\n");
//	}
//	else
//	{
//		puts(buf);
//
//	}
//	fclose(fp);
//}



//�ַ���д
//void strWrite()
//{
//	FILE* fp = fopen("����.txt", "w");
//	if (!fp)
//	{
//		perror("open failed");
//		return;
//	}
//	char buf[BUFSIZ] = { 0 };
//	//д
//	if (0 != fputs("hello world", fp));
//	{
//		perror("write failed\n");
//	}
//	//��ȡ����
//	if(0 != ferror(fp))
//	{
//		perror("error");
//			
//	}
//	fclose(fp);
//}

//
////������д
//typedef struct kid
//{
//	char name[50];
//	int age;
//}kid;
//void bWrite()
//{
//	FILE* fp = fopen("����.txt","wb");
//	if (!fp)
//	{
//		perror("open failed");
//	}
//	//д���ݡ����ַ���
//	size_t len = fwrite("�����Ҫ�����˲������ȥ����ɵ��������ȥ", sizeof(char), 60, fp);
//	printf("write %llu byte\n", len);
//	//д����
//	int nums[5] = {0,1,2,3,4};
//	len = fwrite(nums,sizeof(int),5,fp);
//	printf("write %llu block\n",len); 
//
//	//д�ṹ��
//	kid xiaoliu;
//	strcpy(xiaoliu.name,"С��");
//	xiaoliu.age = 18;
//	len = fwrite(&xiaoliu, sizeof(kid), 1, fp);
//	printf("write %llu block",len);
//
//
//
//	fclose(fp);
//}
//
////�����ƶ�
//void bread()
//{
//	FILE* fp = fopen("����.txt", "rb");
//	if (!fp)
//	{
//		perror("open failed");
//	}
//	//���ַ�
//	char str[60];
//	fread(str, sizeof(char), 60, fp);
//	puts(str);
//	//������
//	int nums[5] = {0};
//	fread(nums, sizeof(int), 5, fp);
//	//��ȡ�ṹ��
//	kid xiaohai;
//	fread(&xiaohai, sizeof(kid), 1, fp);
//	printf("name:%s,age:%d\n",xiaohai.name,xiaohai.age);
//	fclose(fp);
//}
//
////�����д
////fuckingsickworld
//void randreadwrite()
//{
//	FILE* fp = fopen("����.txt", "r");
//	if (!fp)
//	{	
//		perror("open failed");
//
//	}
//	//��ȡһ���ַ�
//	putchar(fgetc(fp));
//	//�ѵ�ǰ�ļ�ָ��ӵ�ǰλ�ú���3���ַ�
//	fseek(fp, 3, SEEK_CUR);
//	putchar(fgetc(fp));
//	//�ѵ�ǰ�ļ�ָ��ӵ�ǰλ��ǰ��3���ַ�
//	fseek(fp, -3, SEEK_CUR);
//	putchar(fgetc(fp));
//	//�����λ����ǰƫ��1
//	fseek(fp, -1, SEEK_END);
//	putchar(fgetc(fp));
//	fseek(fp, 1, SEEK_SET);
//	putchar(fgetc(fp));
//
//
//	fclose(fp);
//	fp = fopen("����.txt", "w");
//	if (!fp)
//	{
//		perror("open failed");
//	}
//	fputc('A', fp);
//	fputc('B', fp);
//	fputc('C', fp);
//	fputc('D', fp);
//	//ABCD
//	fseek(fp,1,SEEK_SET);
//	fputc('a',fp);
//	fclose(fp);
//}
//
////��ȡ�ļ��Ĵ�С
////1.�Լ��߶���ͳ�ƴ�С
//size_t getFileSzie(const char* filename)
//{
//	size_t size = 0;
//	FILE* fp = fopen(filename, "rb");
//	if (!fp)
//	{
//		perror("getFileSize failed");
//		return -1;
//	}
//	char ch;
//	while ((ch = fgetc(fp)) != EOF)
//	{
//		size++;
//	}
//	return size;
//}
////2.���Ը��ݻ�ȡ�ļ�λ��ָ���λ������ȡ
//size_t getFileSzie1(const char*filename)
//{
//	size_t size = 0;
//	FILE* fp = fopen(filename, "rb");
//	if (!fp)
//	{
//		perror("getFileSize failed");
//		return -1;
//	}
//	fseek(fp, 0, SEEK_END);
//	size = ftell(fp);//ftell��ȡ�ļ�ָ���λ��
//	fclose(fp);
//	return size; 
//}
//
//
//int main()
//{
//	//openAndClose();
//	//strRead();
//	//strWrite();
//	//bWrite();
//	//bread();
//	//randreadwrite();
//	printf("size:%llu\n", getFileSzie1("����.txt"));//���ļ��ܵĻ�Ƚ���,���Ҳ�׼
//	return 0;
//	
//}
// 





//�����в���
////main���������ֱ�׼д�� int main()------int main(int argc,char*argv[])
//int main(int argc,char*argv[])
//{
//	for (int i = 0; i < argc; i++)
//	{
//		puts(argv[i]);
//	}
//	//����������ҪIP��ַ�Ͷٿں�
//	if (argc != 3)
//	{
//		printf("input addred and port!\n");
//
//	}
//}



//typedef struct people {
//	int age;
//	char name[10];
//}people;
//
//int main()
//{
//	people p1 = {19,"asda"};
//	printf("%s\n",p1.name);
//
//	people k = { 25,"ball" };
//	people* p3 = &k;
//	printf("%d\n",p3->age);
//}

////�ض�����
//int main()
//{
//	test1
//	//�ض����ļ���
//	freopen("input.txt", "r", stdin);
//	//�ض��������
//	freopen("output.txt","w",stdout);
//	int age = 0;
//	scanf("%d",&age);
//	printf("age is %d\n", age);
//
//	//��stdout�ض��򵽿���̨
//	freopen("CON", "w", stdout);
//
//	freopen("CON", "r", stdin);//��������������ҿ�������
//	int a;
//	printf("intput>");
//	scanf("%d", &a);
//	printf("�������%d\n",a);
//}






//Ԥ������ܺ����ú�

//����������к궨��ı��ʽ����һ�У���\������
//#define LOG_PRINT_HELLO\
//	for(int i = 0;i<=10;i++)\
//	{\
//		printf("hello world\n")\
//	}\
//
//
//int main1()
//{
//	printf("%d\n", __LINE__); //	��ȡ�к�
//	printf("%s\n", __FILE__); //	��ȡ�ļ���
//	printf("%s\n", __FUNCTION__); //������
//	printf("%s\n", __DATE__); //����
//	printf("%s\n", __TIME__); //ʱ��
//
//	//msvc�ṩ����չ
//	printf("%s\n", __func__); //
//	printf("%s\n", __FUNCSIG__); //��ǩ���ĺ���ԭ��
//	printf("%s\n", __TIMESTAMP__); //ʱ���
//}
////�����κ�
//#define EXP 2*5+1
////(2*5+1)���� = 33
//
////���κ�
// 
// 
// 
// 
// 
// 
//#define SQUARE(val)val*val
//#define MAX(a,b) a>b?a:b
//#define DK_CALLOC(count,type)calloc(count,sizeof(type))
//void* DK_calloc(size_t count,const char* typeString)
//{
//	void* tmp = NULL;
//	if (typeString == "int")
//	{
//		tmp = calloc(count, sizeof(int));
//	}
//	else if (typeString == "int")
//	{
//		tmp = calloc(count, sizeof(char));
//	}
//	else if (typeString == "char")
//	{
//		tmp = calloc(count, sizeof(double));
//	}
//	if (!tmp)
//	{
//		printf("%s failed\n", __FUNCTION__);
//		return NULL;
//	}
//	return tmp;
//}
//
//
//int main_1()
//{
//	//printf("%d\n", EXP);
//	//printf("%d\n", EXP*3);  //2*5+1*3 = 13 
//	//printf("%d\n", SQUARE(3));//ƽ��
//	
//	
//	//��������Ϊ����
//	int* p = DK_calloc(1, "int");
//	printf("%d\n",* p);
//	free(p);
//	DK_CALLOC(5, int);
//	DK_CALLOC(5, double);
//	DK_CALLOC(5, char);	
//	struct aa
//	{
//		int c;
//
//	};
//	DK_CALLOC(5,struct aa);
//	free(p);
//}
//
//
//
//
//
//
//
//
//
//
//#define foreach_array(var,arr)
//int main()
//{
//	
//	int nums[5] = { 1,2,3,4,5 };
//	for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
//	{
//		printf("%d ", nums[i]);
//	}
//
//	int tmp;
//	for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
//	{
//		tmp = nums[i];
//
//		printf("%d ", tmp);
//	}
//
//	foreach_array(int v, nums)
//	{
//		printf("%d", v);
//	}
//}






int a = 0;
char b[15];

int main()
{
	scanf("%d", &a);

	if (a == 10)
	{
		strcpy(b, "����"); // ʹ��strcpy���ַ������Ƹ�����b
		if (strcmp(b, "����") == 0) // ʹ��strcmp�Ƚ��ַ����Ƿ����
		{
			printf("%s\n", b);
			printf("ȥҽԺ\n");
		}

	}
	else
	{
		printf("û��\n");
	}

	
	return 0;
}
