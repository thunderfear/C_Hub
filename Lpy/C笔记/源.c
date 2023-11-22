#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <malloc.h> //对应calloc

// char字符 short2个字节，短整型 %d整形 %c字符 %f浮点（小数） %p地址形式 %x16进制数字
// exturn 声明外部变量——在原有的基础工程上添加一个新的项目 在程序中extern可将新项目中的变量引用到基础工程中

//加法代码
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



//const修饰的常变量
//int main()
//{
//	//int n = 10;
//	//int arr[n] = { 0 };//此时报错：表达式arr'[]'必须含有常量值，其中“n”不是常量。
//
//
//	//const - 常属性。const修饰的常变量，不能改变
////	const int num = 4;   //n 具有常属性，但是变量
////	printf("%d\n", num);
////	num = 8;//报错因为有const 使num = 4 不可以改变所以num = 8 不能打印
//}





//#define 定义的标识符常量
//#define MAX 10          //define 定义的标识符常量(经测试#define在全局变量和局部变量中，不影响代码执行)
//
//int main()
//{//MAX此时是常量，#define 可以放在局部变量里可使用。
//	//int MAX = 10;  经实验控制变量 int MAX = 10；在局部变量中不可用，经推测C语言的执行顺序（无特殊命令下）按照行数依次执行。
//	int arr[MAX] = { 0 };//若无“{0}”会报错：未引用的局部变量
//	printf("%d\n", MAX);
//}
//枚举常量--一一列举的常量（不可被改变）
// 例：
//enum Color          enum--枚举关键，//’enum‘（枚举）是一种数据类型，用于定义一组预定义的整数常量。这些整数常量的值是固定的，不能被修改。可以使用enum来替代宏定义
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

	//字符串
//	char arr1[] = "blank";
//	char arr2[] = { 'b','l','a','n','k',0};//开启监视后发现arr1 与 arr2 输出 arr1末尾出现一个\0,\0为结束
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);//输出结果有问题。。。加入0之后输出结果为blank
	/*char arr[] = "abc";//定义一个字符串类型，对字符串进行求长度
	char arr1[] = { 'a','b','c' };
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr1));
	printf("%c\n", 'a');*/
 //arr1字符串长度输出结果随机
 
 
 
//转义字符
//int main
// {
//	printf("c:\test\32\test.c");     //---输出结果有问题 结果为c:    est→   
//									 //因为'/'为转义字符 需要将"/"→//防止将代码变成转义
//   }
// 如果想打印一个单独的符号的时候 在此符号前面加上一个/ 使其转义
//       \t水平制表符,也就是一个缩进
//      \xdd dd表示两个十六进制的的数字
// 	   \ddd 表示1-3个八进制数字 八进制数字——0-7 不能出现8 不符合语法
//printf("%c\n",'\x61'); //输出结果为a 对应ASCII表为113 


//if else 判断
/*	int input = 0;
	printf("加入比特\n");
	printf("继续？？？（1/0）>:");
	scanf(" %d", &input);//此处报错需调用 int input
	if (input == 1)
		printf("an offer\n");
	else
		printf("keep the fuck on\n");*/

		
//循环
	/*int line = 0;
	while(line < 20000)
	{
		printf("一行代码%d\n",line);//此时的line是显示行数
		line++;
	}
	printf("ok");*/

/*C for 循环
for 循环允许编写一个执行指定次数的循环控制结构。
语法
C 语言中 for 循环的语法：
for (init; condition; increment)
{
	statement(s);
}/*

/*下面是 for 循环的控制流：
init 会首先被执行，且只会执行一次。这一步允许声明并初始化任何循环控制变量。也可以不在这里写任何语句，只要有一个分号出现即可。
接下来，会判断 condition。如果为真，则执行循环主体。如果为假，则不执行循环主体，且控制流会跳转到紧接着 for 循环的下一条语句。
在执行完 for 循环主体后，控制流会跳回上面的 increment 语句。该语句允许更新循环控制变量。该语句可以留空，只要在条件后有一个分号出现即可。
条件再次被判断。如果为真，则执行循环，这个过程会不断重复（循环主体，然后增加步值，再然后重新判断条件）。在条件变为假时，for 循环终止。*/

//例

/*int main()
{

	for (int a = 10; a < 20; a = a + 1)
	{
		printf("a 的值： %d\n", a);
	}

	return 0;
}
*/

/*do...while 循环
不像 for 和 while 循环，它们是在循环头部测试循环条件。在 C 语言中，do...while 循环是在循环的尾部检查它的条件。
do...while 循环与 while 循环类似，但是 do...while 循环会确保至少执行一次循环。

C 语言中 do...while 循环的语法：
do
{
	statement(s);

} while (condition);
条件表达式出现在循环的尾部，所以循环中的 statement(s) 会在条件被测试之前至少执行一次。
如果条件为真，控制流会跳转回上面的 do，然后重新执行循环中的 statement(s)。这个过程会不断重复，直到给定条件变为假为止。

*/
//例
/* int main()
{
	int a = 10;
	do
	{
		printf("a 的值： %d\n", a);
		a = a + 1;
	} while (a < 20);

	return 0;
} */


	
	//函数
//求函数的最大值
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
//		printf("最大值是%d\n", num1);
//	else
//		printf("最大值是是%d\n", num2);
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
int max(int num1, int num2)//函数返回两个数中最大的数
{
	int q;
	if (num1 > num2)
		q = num1;
	else
		q = num2;

}
*/
//求操作数的类型长度，sizeof 用于计算操作数的类型长度
//int main()
//{
//	int a = 20;
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof (int));
//	return 0;
//}




//符号 "()"-------强制转换
//例：
/*int main()
{         //创建一个变量a
	//int a = 3.14;  //此处会提示：从“int”转换为“double”可能会丢失数据，此时可以将3.14前面改为 int a = (int)3.14,此时(int)会将3.14浮点型的小数强制转换为int也就是整形。
	int  a = (int)3.14;
	printf("a = %d\n", a);        
}*/

//三目(条件操作符)操作符 “？”
//例
/*int main()
{
	int a = 10;
	int b = 20;
	int max = 0; 
	max = (a > b ? a : b);        //exp1?exp2:exp3 “？”此处问号:exp1成立吗？若是成立则运行exp2,若是不成立=则输出结果exp3
	printf("MAX = %d\n", max);
}*/



//函数调用操作符-------"()"
/*int ADD(int x, int y)  //创建函数ADD
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = ADD(a, b);  //此处"()"引用了a 和 b
	printf("sum = %d\n", sum);
	return 0;
}*/




//常见关键字
// auto
//int main()
//{
//	/*auto*/ int a = 0;//局部变量-自动变量 auto会隐藏
//}
//register --寄存器关键字
//int main()
//{
//	register int a = 10;        //“建议”把a存储到寄存器中
//}
//sigened      //int 定义的变量有符号--singed int 等价于 int
//unsinged     //无符号定义
//unsigned int num = -1;//无符号就算数字是负数对于num来讲数值依然是正值
//定义的符号名不能跟关键字冲突，不能重复！！！

//typedef类型定义
//typedef unsigned int u_int;    //重新定义unsigned int ---u_int 作用效果一样  
//unsigned int a = 20;
//u_int a = 20;
// 
//void test() //创建一个test函数
//{
//	static int q = 1;   //使q变为局部变量		static修饰局部变量，使局部变量生命周期延长。	     
//	q++;	
//	printf("q = %d\n", q);
//}
//int main()
//{
//	int a = 0;
//	while (a < 5) 
//	{
//		test();   //跳转到函数test中执行，test执行结束后返回到while中继续执行。
//		a++;
//	}
//}

//int main()
//{
//	extern int g_val;  //extern调用外域变量
//	printf("g = %d\n",g_val);//当static加入到add.c中时这个局外变量不能被引用。
//							 //static修饰全局变量时（在add.c中）改变其作用域。让静态的全局变量只能在其所在的文件中使用。
//}
//int ADD(int x, int y)
//{
//	int q = 0;								//此代码在add.c文件中
//	q = x + y;
//	return q;
//}

//声明一个外部函数
//extern int ADD(int, int);    //调用外部函数，当用static修饰外部函数时，不能调用.此时static改变了函数的连接属性。
//int main()                   //连接属性：外部连接属性----->内部连接属性
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("sum = %d\n", sum);
//}

//利用#define定义的常量
// #define MAX 100;
//宏的定义
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


//指针
/*int main()
{
	//int a = 590;
	//int* p = &a;    
	//*p = 20;      //*-解引用操作符
	char ch = 's';
	char* pc = &ch;
	//*pc = 'q';

	//printf("%p\n", &a);
	//printf("% p\n",p);
	printf("%d\n",sizeof(pc));
}*/


////结构体
////struct -结构体关键字
//struct BOOK
//{
//	char name[20];
//	short prise;
//};   //；分号不可缺少用来结束类型的
//int main()
//{
//	struct BOOK b1 = { "C语言程序设计",55 };
//	struct BOOK* pb = &b1;
//	//printf("书名%s\n", (*pb).name);       //使用指针打印名字 价格
//	//printf("价格%d元\n", (*pb).prise);
//	printf("价格%d\n", pb->prise); //->  语法： 结构体->成员
//	                               //->  语法： 结构体.成员
//	printf("名字%s\n", pb->name);
//	//printf("书名:%s\n", b1.name);
//	//printf("价格:%d元\n", b1.prise);
//	b1.prise = 5;
//	printf("修改后的价格:%d\n", b1.prise);
//}



////循环分支
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue; //终止本次循环 continue后面的代码不会再执行
//		printf("i = % d \n", i);
//		i++;
//	}
//}

//getchar putchar 
//getchar是用来使用键盘上你输入的字母，putchar来打印你使用的字母
//创建一个输入密码的程序
//int ch = 0;
//int ret = 0;
//char password = { 10 };
//printf("输入密码")；








//n的阶乘
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
//		printf("请输入密码:");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//	}
//	if (i == 3)
//		printf("密码错误超过三次退出程序\n");
//	return 0;
//}


//main()
//{	
//	char ch [] = "this is a test";
//	int i = 0;
//	char c = getchar();           /*接下来应该让putchar循环直到取完整个字符串*/
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


//函数
//void clean(int number)/*函数形式 名字(形式 + 名字)*/
//{
//	printf(".516*\n");
//}
//int sum(int a, int b)
//{
//	int ret = a + b;
//	printf("ret=%d\n", ret);
//	return ret;/*将计算出的数值返回给sum*/
//}
//int main()
//{
//	clean(1);   /*调用函数*/
//	int num = sum(5,10);
//}



////函数的声明
//void fool();/*全局变量先声明，让编译器不报错，继续向后寻找我的函数*/
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

//数组的插入和删除
// void show(int arr[],int size);	
//int main()
//{
//	int arr[7] = { 1,2,3,4,5 };
//	int menu;
//	int core = -1;
//	int num = 0;
//	int capcity = 7; 
//	int size = 5;//当前数组中保存有效元素的个数
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
//		{	//插入数据
//			printf("输入插入数据");
//			scanf("%d", &core);
//			arr[size++] = core;
//			if (size == capcity)
//			{
//				printf("已满不能插入");
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
//	printf("----1.插入数据-----");
//	printf("----2.显示数据-----");
//	printf("----3.删除数据-----");
//	printf("----4.退出程序-----");
//	printf("-------------------");
//	int select = -1;
//	printf("选择操作");
//	scanf("%d", &select);
//	return select;
//}




////冒泡排序
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
////	//规则依次相邻的两个元素比较，若满足（降序/升序）就交换，直至排序完成为止。
////	for (int i = 0; i < size - 1; i++)//外层循环，控制趟数。
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
////冒泡排序改进
//	for (int i = 0; i < size - 1; i++)//外层循环，控制趟数。
//	{
//		bool isOrder = true;//默认是有序的
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
//			break;//如果是有序的就跳出for循环i不再增加
//		}
//	}
//
//}
////选则排序selectSort
//void selectSort(int arr[], int size)
//{
//	int i = 0;
//	for (i = 0; i < size - 1;i++);
//	{
//		int min = i;
//		for (int k = i+1;k<size;k++)//开始循环的的第二位数字，寻找第一二位那个大，并输出
//		{
//			if (arr[k] < arr[min])
//			{
//				min = k;
//			}
//		}
//		//交换
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
//位段:结构体的整形成员可以指定位数
struct BitField
{
	unsigned char a : 1;//a只占1个bit
	unsigned char b : 4;// 4bit
	unsigned char c : 3;// 3bit
};

struct bit
{
	char a : 3;
	short b : 9;//char b :9;位域的大小无效
};



int main()
{
	printf("%llu\n", sizeof(struct BitField));
	//定义并初始化
	struct BitField bit = { 1,2,3 };
	//输出
	printf("%d %d %d\n", bit.a,bit.b,bit.c);
	//复制
	bit.a = 2; // 1 0
	bit.b = 20;// 1 0100
	bit.c = 8;// 1 000
	//输出
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
}bits;//定义了八个成员，每个成员占一个位
int main()
{
	printf("%llu\n", sizeof(bits));
	uint8_t n = 127;
	//1.通过位运算输出所有的位
	//2.通过bits输出所有的位
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




//联合->所有成员共用一块内存，使用union关键字
//typedef union Data
//{
//	uint32_t i;
//	char str[4];
//}Data;
//int main()
//{
//	printf("%llu\n", sizeof(Data));
//	Data d = { .i = 5,.str = "hhh" };//只有最后一个初始化的成员是有效的
//	printf("%u   %s\n", d.i, d.str);
//	d.i = 0x12345678;
//	for (int i = 0; i < 4; i++)
//	{ 
//		printf("%#x ", d.str[i]);
//	}
//}
//typedef struct string
//{
//	char* str;//动态数组
//	int length;//长度
//	union 
//	{
//		int capacity;//容量
//		char buf[32];//静态数组
//	};
//	
//	
//}string;
//string str_new(const char* str);
////str 需要动态分配，分配内存时需要消耗时间的（动态内存分配会比静态内存慢很多）
////当我们存储字符串比较短的时候，直接存储在栈区，很长的时候再分配。
////根据字符串的长度来决定如何存储
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

//文件操作


//文件的打开与关闭
/*void openAndClose()
{
	//r read 只读，文件不存在打开失败
	//w 只写，不能读，文件不存在自动创建，存在自动清空
	//打开文件
	FILE* fp = fopen("eeee.avi", "a");
	if (!fp)
	{
		perror("open filed\n");//perror追加错误消息
		return;
	}

	fputs("asdad", fp);//fputc是来将一个字符写入到文件中的，不是来写入字符串的——可用fputs

	//关闭文件
	fclose(fp);//fputc是来将一个字符写入到文件中的，不是来写入字符串的——可用fputs

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
//	//写一个字符
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

////字符串读
//void strRead()
//{	
//	FILE* fp = fopen("资料.txt", "r");
//	if (!fp)
//	{
//		perror("open failed");
//		return;
//	}
//	char buf[BUFSIZ] = { 0 };
//	//读
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



//字符串写
//void strWrite()
//{
//	FILE* fp = fopen("资料.txt", "w");
//	if (!fp)
//	{
//		perror("open failed");
//		return;
//	}
//	char buf[BUFSIZ] = { 0 };
//	//写
//	if (0 != fputs("hello world", fp));
//	{
//		perror("write failed\n");
//	}
//	//获取错误
//	if(0 != ferror(fp))
//	{
//		perror("error");
//			
//	}
//	fclose(fp);
//}

//
////二进制写
//typedef struct kid
//{
//	char name[50];
//	int age;
//}kid;
//void bWrite()
//{
//	FILE* fp = fopen("开心.txt","wb");
//	if (!fp)
//	{
//		perror("open failed");
//	}
//	//写数据——字符串
//	size_t len = fwrite("我真的要崩溃了操他妈的去给白傻子卖瓜子去", sizeof(char), 60, fp);
//	printf("write %llu byte\n", len);
//	//写数组
//	int nums[5] = {0,1,2,3,4};
//	len = fwrite(nums,sizeof(int),5,fp);
//	printf("write %llu block\n",len); 
//
//	//写结构体
//	kid xiaoliu;
//	strcpy(xiaoliu.name,"小刘");
//	xiaoliu.age = 18;
//	len = fwrite(&xiaoliu, sizeof(kid), 1, fp);
//	printf("write %llu block",len);
//
//
//
//	fclose(fp);
//}
//
////二进制读
//void bread()
//{
//	FILE* fp = fopen("开心.txt", "rb");
//	if (!fp)
//	{
//		perror("open failed");
//	}
//	//读字符
//	char str[60];
//	fread(str, sizeof(char), 60, fp);
//	puts(str);
//	//读数组
//	int nums[5] = {0};
//	fread(nums, sizeof(int), 5, fp);
//	//读取结构体
//	kid xiaohai;
//	fread(&xiaohai, sizeof(kid), 1, fp);
//	printf("name:%s,age:%d\n",xiaohai.name,xiaohai.age);
//	fclose(fp);
//}
//
////随机读写
////fuckingsickworld
//void randreadwrite()
//{
//	FILE* fp = fopen("开心.txt", "r");
//	if (!fp)
//	{	
//		perror("open failed");
//
//	}
//	//读取一个字符
//	putchar(fgetc(fp));
//	//把当前文件指针从当前位置后移3个字符
//	fseek(fp, 3, SEEK_CUR);
//	putchar(fgetc(fp));
//	//把当前文件指针从当前位置前移3个字符
//	fseek(fp, -3, SEEK_CUR);
//	putchar(fgetc(fp));
//	//从最后位置向前偏移1
//	fseek(fp, -1, SEEK_END);
//	putchar(fgetc(fp));
//	fseek(fp, 1, SEEK_SET);
//	putchar(fgetc(fp));
//
//
//	fclose(fp);
//	fp = fopen("开心.txt", "w");
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
////获取文件的大小
////1.自己边读边统计大小
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
////2.可以根据获取文件位置指针的位置来获取
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
//	size = ftell(fp);//ftell获取文件指针的位置
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
//	printf("size:%llu\n", getFileSzie1("开心.txt"));//大文件跑的会比较慢,而且不准
//	return 0;
//	
//}
// 





//命令行参数
////main函数有两种标准写法 int main()------int main(int argc,char*argv[])
//int main(int argc,char*argv[])
//{
//	for (int i = 0; i < argc; i++)
//	{
//		puts(argv[i]);
//	}
//	//开启服务，需要IP地址和顿口号
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

////重定向流
//int main()
//{
//	test1
//	//重定向文件流
//	freopen("input.txt", "r", stdin);
//	//重定向输出流
//	freopen("output.txt","w",stdout);
//	int age = 0;
//	scanf("%d",&age);
//	printf("age is %d\n", age);
//
//	//把stdout重定向到控制台
//	freopen("CON", "w", stdout);
//
//	freopen("CON", "r", stdin);//不想让其输出，我可以输入
//	int a;
//	printf("intput>");
//	scanf("%d", &a);
//	printf("处理完毕%d\n",a);
//}






//预编译介绍和内置宏

//如果不想所有宏定义的表达式放在一行，用\来续行
//#define LOG_PRINT_HELLO\
//	for(int i = 0;i<=10;i++)\
//	{\
//		printf("hello world\n")\
//	}\
//
//
//int main1()
//{
//	printf("%d\n", __LINE__); //	获取行号
//	printf("%s\n", __FILE__); //	获取文件名
//	printf("%s\n", __FUNCTION__); //函数名
//	printf("%s\n", __DATE__); //日期
//	printf("%s\n", __TIME__); //时间
//
//	//msvc提供的拓展
//	printf("%s\n", __func__); //
//	printf("%s\n", __FUNCSIG__); //带签名的函数原型
//	printf("%s\n", __TIMESTAMP__); //时间戳
//}
////不带参宏
//#define EXP 2*5+1
////(2*5+1)括号 = 33
//
////带参宏
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
//	//printf("%d\n", SQUARE(3));//平方
//	
//	
//	//把类型作为参数
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
		strcpy(b, "难受"); // 使用strcpy将字符串复制给数组b
		if (strcmp(b, "难受") == 0) // 使用strcmp比较字符串是否相等
		{
			printf("%s\n", b);
			printf("去医院\n");
		}

	}
	else
	{
		printf("没事\n");
	}

	
	return 0;
}
