#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr1[] = { 1,5,6,7,29,45,65,73,84,93,102,143,154 };
	int left = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ",arr1[i]);
	}
	int right = sz - 1;
	int k = 0;
	scanf("%d", &k);
	while (left <= right)
	{
		int mid = (right - left) / 2 + left;
		if (arr1[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr1[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr1[mid] = k)
		{
			printf("%d",mid);
			break;
		}
	}
	printf("err");
	return 0;
}