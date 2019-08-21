/*
problem description:
https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem
*/

#include<assert.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* readline();
char** split_string(char*);

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  

int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than or  
        // equal to pivot  
        if (arr[j] <= pivot)  
        {  
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}

void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
} 
// Complete the minimumAbsoluteDifference function below.
int minimumAbsoluteDifference(int arr_count, int* arr) {
    long int min=1L<<31,i,j,temp,new_temp;

    quickSort(arr,0,arr_count-1);
    for(i=0;i<arr_count-1;i++){
        temp=(arr[i]-arr[i+1]);
        if(temp < 0)
                new_temp=-(temp);
        else 
                new_temp=temp;
        if(new_temp < min)
                min=new_temp;
    }
   return min;
}
