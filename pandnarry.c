#include <stdio.h>
#include<stdlib.h>
int countPositiveNumbers(int* arr, int n)
{
	int posi_num = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] > 0)
			posi_num++;
	}
	return posi_num;
}
int countNegativeNumbers(int* arr, int n)
{
	int neg_num = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] < 0)
			neg_num++;
	}
	return neg_num;
}
int countzero(int *arr, int n)
{
    int zreo_sum=0;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==0)
        zreo_sum++;
    }
    return zreo_sum;
}
void printArray(int* arr, int n)
{
	int i;

	printf("Array: ");
	for (i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}
	printf("\n");
}
int main()
{
	int n;
    scanf("%d",&n);
    int arr[n];
	n = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, n);

	printf("total Positive number = %d\n",
		countPositiveNumbers(arr, n));
	printf("total Negative number = %d\n",
		countNegativeNumbers(arr, n));
    printf("total zero=%d\n",countzero(arr,n));

	return 0;
}


