#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>//标准输出头文件
#include <stdio.h>
//命名空间（namespace）限制代码的容器
//如何访问数据
	//运算符-》作用域分辨符-> ::
	//空间名::成员
	//省略前缀的方式-》 using namespace 空间名;
//using namespace std;
//namespace n
//{
//	int age;
//	char name[20];
//	void print()
//	{
//		printf("命名空间测试！\n");
//	}
//}
////问题：我放using namespace在头文件下面，作用域为全局，但是报错告诉我没有N这个空间是为什么？
//int g_num = 40;
//using namespace n;
//
//
////命名空间嵌套
//namespace First
//{	
//	int first = 0;
//	int age = 0;						//二义性问题,此时Line28 和 Line12 都有age而mian函数中我引用的age 并未指定是ns n 还是 ns first 中的哪一个 需要用n:: First:: 指定
//	namespace Second
//	{
//		int second = 0;
//	}
//}
//
//
//
//using namespace First;
//void test()
//{
//	first = 123;
//	using namespace First;
//	using namespace Second;
//	second = 1;
//	Second::second = 1104;
//}
//
////先声明后实现???????????????????????????????????
//namespace Info
//{
//	void testInfo();
//	struct test3;
//}
//void Info::testInfo()
//{
//	printf("在外面实现一定要用空间名做限定");
//}
//struct Info::test3
//{
//	int age;
//	char name[20];
//};
//
//
//void testnamespace()
//{
//	Info::testInfo();			//调用 void testInfo函数
//	struct Info::test3 robo;			//调用struct Info 
//}


//int main()
//{
//	n::age = 12;
//	First::age = 18;
//	print();
//	using namespace n;					//省略前缀，有作用域
//	print();
//	int g_num = 88;
//	printf("%d\n", g_num);				//当有两个相同的变量（作用域不同）的时候，主动输出距离printf近的变量
//	printf("%d\n", ::g_num);			//输出全局变量g_num = 40,"::"->作用域分辩符此处是用来标识全局的
//
//}




//标准输入输出

//cout <<标准输出
//cin >> 标准输入


