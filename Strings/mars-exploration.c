/*
problem description:
https://www.hackerrank.com/challenges/mars-exploration/problem
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

// Complete the marsExploration function below.
int marsExploration(char* s) {
    int len=strlen(s),i,j,k,count=0;
    
    for(i=0;i<(len/3);i++){
        for(j=i*3,k=0;k<=2;k++,j++){

            switch(k){
            case 0:
            case 2:
                if(s[j]=='S'){

                }else 
                count++; break;
            case 1:
                if(s[j]=='O'){

                }else 
                count++; break;
            }
        }
    }
    return count;
}

