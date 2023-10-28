#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Shuzhu(int arr[],int n)
{
	int b = 0;
	while (b < n)
	{
        printf("%d ", arr[b]);
		b++;
	}
	
}
int main()
{
	int a[] = { 2,4,5,6,7,9,5 };
	int c[] = { 3,4,8,9,0,1,2,3,4,5 };
	Shuzhu(a,7);
	printf("\n");
	Shuzhu(c, 10);
	return 0;
}
