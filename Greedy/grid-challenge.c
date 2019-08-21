/*
problem description:
https://www.hackerrank.com/challenges/grid-challenge/problem
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

// Complete the gridChallenge function below.

void arrange_assending_order(char *ptr,int len)
{
    int i,j;
    char temp;
    //arrang the string in alphabetical order
    for(i=0;i<(len-1);i++){
        for(j=i+1;j<len;j++){
            if(ptr[i]>ptr[j]){
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}
char* gridChallenge(int grid_count, char** grid) {
    int i,j,len;

    for(i=0;i<grid_count;i++){
        len=strlen(grid[i]);
        arrange_assending_order(grid[i],len); //strings
        printf("str=%s\n",grid[i]);
    }
    //cheking the string are alphabetically ordered in columns or not
    for(i=0;i<grid_count;i++){
        for(j=0;j<(grid_count-1);j++){
            if(grid[j][i]<=grid[j+1][i]){

            } else {
                return "NO";
            }
        }
    }   
    return "YES";
}
