#include <stdio.h>
#include <conio.h>
#include <limits.h>
int sum_in_array(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
int product_array(int arr[], int size)
{
	int pro = 1;
	for (int j = 0; j < size; j++)
	{
		pro = pro * arr[j];
	}
	return pro;
}
int main()
{
	int arr[] = {7,3,9,2, 8,9,10,27,3,22};
	int size = sizeof(arr) / 4;
	int sum_ans = sum_in_array(arr, size);
	printf("sum = %d\n", sum_ans);
	int pro_ans = product_array(arr, size);
	printf("Product = %d\n", pro_ans);

	getch();
	return 0;
}