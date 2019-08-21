/*
problem description:
https://www.hackerrank.com/challenges/lisa-workbook/problem
*/

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the workbook function below.
int p_min[10000]={0};
int p_max[10000]={0};
int min_val(int a,int b){
    if(a<b)
        return a;
    else 
        return b;

}
int workbook(int n, int k, int arr_count, int* arr) {
    int i,pagenum=1,problems,l,times,m,count=0;
    for(i=0;i<arr_count;i++){
        problems=arr[i];
        if(problems <= k) {
            p_min[pagenum]=1;
            p_max[pagenum]=problems;
            pagenum++;

        }else {
            l=1;
            m=1;
            times=problems/k;
            while(times){
                p_min[pagenum]=m;
                p_max[pagenum]=(k*l);
                pagenum++;
                l++;
                times--;
                m=m+k;
            }
            if(problems%k!=0){
                p_min[pagenum]=p_max[pagenum-1]+1;
                p_max[pagenum]=min_val(problems,(k*l));
                pagenum++;
            }
        }

    }
    for(i=1;i<=pagenum;i++){
        //printf("page number=%d problems min=%d max=%d\n",i,p_min[i],p_max[i]);
        if(i >= p_min[i] && i<=p_max[i])
            count++;
    }
    return count;
}

