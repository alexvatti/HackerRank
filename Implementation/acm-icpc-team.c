/*
problem description:
https://www.hackerrank.com/challenges/acm-icpc-team/problem
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

// Complete the acmTeam function below.
int output[10000000]={0};
int final_output[2]={0};
int* acmTeam(int topic_count, char** topic, int* result_count) {
    int i=0,j=0,m=0;
    int ones_count=0,num_times_max=0,max_ones_count=0;
    char *first,*second; //two stings

    for(i=0;i<topic_count-1;i++){
        first=topic[i];
        for(j=i+1;j<topic_count;j++){
            first=topic[i];
            second=topic[j];
            ones_count=0;
            while((*first!=NULL) && (*second!=NULL)){  //comapre &  find ones in str
                if((*first=='1')||(*second=='1')){
                    ones_count++;
                }
                first++;
                second++;       
            }
            //printf("count=%d\n",count);
            output[m]=ones_count;
            m++;
            if(ones_count >= max_ones_count)
                max_ones_count=ones_count;
        }
        
        
    }
    num_times_max=0;
    for(i=0;i<m;i++){
        if(max_ones_count==output[i]){
            num_times_max++;
        }
    }

    *result_count=2;
    final_output[0]=max_ones_count;
    final_output[1]=num_times_max;
    return final_output;
}
