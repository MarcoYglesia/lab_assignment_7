#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("");
}



// A function to implement bubble sort
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int a=1;
    int b=0;

    printf("\nBubble Sort Swaps:\n");

    int i, j,temp;
    for (i = 0; i < n-1; i++)
    {
        if (b != 0){
            printf("%d, ", a);}
        if (b == 7){
            printf(" 0, 0");}
        //printf("%d, ", b);
        a = 0;
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {//then swap
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                a++;
            }
        }b++;
    }
}


/* Function to print an array */

// Driver program to test above functions
int main()
{
    int arr[] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
    int n = 9; //size of the array
    printf("Array bofore sorting: \n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("\nSorted array: \n");
    printArray(arr, n);
    return 0;
}
