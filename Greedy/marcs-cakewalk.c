/*
problem description:
https://www.hackerrank.com/challenges/marcs-cakewalk/problem
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

// Complete the marcsCakewalk function below.
long marcsCakewalk(int calorie_count, int* calorie) {
    int i,j,temp;
    long long total=0;

    //decreasing order of the array
    for(i=0;i<(calorie_count-1);i++){
        for(j=i+1;j<calorie_count;j++){
            if(calorie[i]< calorie[j]){
                temp=calorie[i];
                calorie[i]=calorie[j];
                calorie[j]=temp;
            }
        }
    }
    //power(2,j) * array value index
    for(i=0;i<calorie_count;i++){
        total+=(calorie[i] * (1L<<i));
    }
    return total;
}
