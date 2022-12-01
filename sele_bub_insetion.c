#include <stdio.h>

void display(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%4d",arr[i]);
    }
    printf("\n");
}
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// void selectionSort(int arr[],int n){
//     int i, j;
//     for(i=0;i<n;i++)
//     {
//         for(j=i;j<n-1;j++){
//             while(arr[j+1]>arr[j]){
//                 swap(&arr[j],&arr[j+1]);
//             }
//         }   
//     }
//     display(arr,n);
// }

void insertionSort(int arr[], int n){
    int i, j, key;
    for(i=0;i<n;i++){
        for(j=i;j>0; j--){
            if(arr[j-1]>arr[j]){
                swap(&arr[j-1],&arr[j]);
            }
        }
    }
    printf("\nInsertion Sort:");
    display(arr,n);
}

void selectionSort(int arr[], int n)
{
    int i , j, min;
    for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if (min != i)
            swap(&arr[min],&arr[i]);
        
    }
    printf("\nSelection Sorting:");
    display(arr,n);
}

void bubbleSorting(int arr[], int n)
{
    //improved
    int i,j,indicator = 1;
    for(i=0;i<n&&indicator == 1;i++){
        for(j=0;j<n-1;j++){
            indicator = 0;
            if(arr[j+1]<arr[j]){
                swap(&arr[j+1],&arr[j]);
                indicator = 1;
            }
        }
    }
    printf("\nBubble Sort:");
    display(arr,n);
}

int main()
{
    int opt, i, j, n;
    printf("Enter a number of Elements :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of an array :");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    // selectionSort(arr,n);
    // insertionSort(arr,n);
    // bubbleSorting(arr,n);
    printf("Press 1: Selection Sort.\nPress 2:Insertion Sort.\nPress 3: Bubble Sort.\nEnter You Option:");
    scanf("%d",&opt);
    switch(opt){
        case 1:
            selectionSort(arr,n);
            break;
        case 2:
            insertionSort(arr,n);
            break;
        case 3:
            bubbleSorting(arr,n);
            break;
        default:
            printf("\nEnter valid Input ..!\n");
            break;
    }
    return 0;    
}
