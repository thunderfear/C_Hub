#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int main()
{
	static float line01, line02, line03, s, p;
	while (true)
	{
		printf("\n输入三边长以,分隔\n");
		scanf("%f,%f,%f", &line01, &line02, &line03);
		if ((line01 + line02 <= line03) || (line01 + line03 <= line02) || (line02 + line03 <= line01)) {
			printf("两边之和未大于第三边！\n");
			continue;
		}
		else
		{
			p = (line01 + line02 + line03) / 2;
			s = sqrt(p * (p - line01) * (p - line02) * (p - line03));
			printf("\n面积为%f", s);
			break;
		}
	}
	return 0;
}