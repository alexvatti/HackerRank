/*
problem description:
https://www.hackerrank.com/challenges/beautiful-binary-string/problem
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
// Complete the beautifulBinaryString function below.
int beautifulBinaryString(char* b) {

    char substr[]="010";
    int count=0,i=0;
    int temp=-1;
    int len=strlen(b);

    while(i<(len-2)){
        printf("b=%s\n",b);
        temp=strncmp(b,substr,3);
        if(temp==0){
            printf("temp=%d\n",temp);
            count++;
            i=i+3;
            b++;
            b++;
            b++;
        
        } else {
          i=i+1;
            b++;
        }
    }
    return count;
}

