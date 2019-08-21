/*
problem description:
https://www.hackerrank.com/challenges/day-of-the-programmer/problem
*/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

// Complete the dayOfProgrammer function below.
char temp[30];
void num_str(char *ptr,int num){
    int i=3,r;
    while(num){
        r=num%10;
        ptr[i]=r+0x30;
        num=num/10;
        i--;
    }
    ptr[4]='\0';

}
char* dayOfProgrammer(int year) {

    int leaf=0;
    char str[5];
    char *s1="12.09.";
    char *s2="13.09.";
    char *s3="26.09.1918";
    if(year >=1919){

        if((year%400) ==0){
            leaf=1;
        }else if (((year%4)==0) && ((year%100)!=0)){
            leaf=1;
        }else {
            leaf=0;
        }
        if(leaf)
            strcpy(temp,s1);
        else
            strcpy(temp,s2);
        num_str(&str[0],year);
        strcat(temp,str);
        return temp;
    }else if(year>=1700 & year<=1917){
        if((year%4) ==0)
            leaf=1;
        else
            leaf=0;
        if(leaf)
            strcpy(temp,s1);
        else
            strcpy(temp,s2);
        num_str(&str[0],year);
        strcat(temp,str);
        return temp;

    }else {
        strcpy(temp,s3);
        return temp;
    }
    return temp;
}
