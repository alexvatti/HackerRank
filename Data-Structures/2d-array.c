/*
problem description:
https://www.hackerrank.com/challenges/2d-array/problem
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

// Complete the hourglassSum function below.
int hourglassSum(int arr_rows, int arr_columns, int** arr) {

    int i,j,k,l,p,q;
    int temp[3][3];
    int n=3,m=3;
    int sum=0,sum1=0;
    int flag=0;

    for(l=0;l<(arr_rows-n+1);l++){
        for(k=0;k<(arr_columns-m+1);k++){
            for(i=l,p=0;i<(l+n);i++,p++){
                for(j=k,q=0;j<(k+m);j++,q++){
                    temp[p][q]=arr[i][j];

                }
            }
            for(p=0;p<3;p++){
                for(q=0;q<3;q++){
                    if((p==1 && q==0) || (p==1 && q==2)){

                    }
                    else {
                        if(flag==0) {
                        sum+=temp[p][q];
                        sum1+=temp[p][q];
                        } else{
                            sum1+=temp[p][q];
                        }
                    }
                    printf("%d ",temp[p][q]);

                }
                printf("\n");
            }
            flag=1;
            printf("\n sum=%d,sum1=%d\n",sum,sum1);
            if(sum1 >= sum){
                sum=sum1;
            }
            sum1=0;
        }
    }
    printf("largest sum=%d\n",sum);
    return sum;
}


