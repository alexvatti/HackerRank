/*
problem description:
https://www.hackerrank.com/challenges/sherlock-and-array/problem
*/

#include<assert.h>
#include<ctype.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

// Complete the balancedSums function below.
long int result[100000]={0};
char* balancedSums(int arr_count, int* arr) {
    int flag=0,i;

    if(arr_count==1) 
	return "YES";
    for(i=0;i<arr_count;i++){
        if(i==0)
            result[i]=arr[i];
        else 
            result[i]=result[i-1]+arr[i];
    }

    for(i=1;i<arr_count;i++){
        if(result[i-1]==(result[arr_count-1]-result[i])){
            flag=1;
            break;
        }
    }

    if(flag==1)
        return "YES";
    else 
        return "NO";
}
