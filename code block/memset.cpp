// C program to demonstrate working of memset()
//memset create memory we passs base addres as 1st paramwter, value, size
/*
#include <stdio.h>
#include <string.h>

void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int main()
{
    int n = 10;
    int arr[n];

    // Fill whole array with 0.
    memset(arr, 0, n*sizeof(char));
    printf("Array after memset()\n");
    printArray(arr, n);

    return 0;
}

*/
// C program to demonstrate working of memset()
#include <stdio.h>
#include <string.h>

void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int main()
{
    int n = 10;
    int arr[n];

    // Fill whole array with 100.
    memset(arr,false, n*sizeof(arr[0]));
    printf("Array after memset()\n");
    printArray(arr, n);

    return 0;
}
