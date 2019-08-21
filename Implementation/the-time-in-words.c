/*
problem description:
https://www.hackerrank.com/challenges/the-time-in-words/problem
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

// Complete the timeInWords function below.
char time[200];
char* timeInWords(int h, int m) {
    char clock[12][50] = {"one o' clock","two o' clock","three o' clock","four o' clock","five o' clock","six o' clock","seven o' clock", "eight o' clock","nine o' clock","ten o' clock","eleven o' clock","twelve o' clock" };

    char hours[12][50]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};

    char min[33][50] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen", "eighteen", "ninteen","twenty", "twenty one","twenty two", "twenty three","twenty four","twenty five","twenty six", "twenty seven", "twenty eight", "twenty nine" };


    if(m==0) {
        strcpy(time,clock[h-1]);
    }

    if(m==1){
            strcpy(time, "one minute past ");
            strcat(time,hours[h-1]);
    }
    if(m>1 && m<30) {
        if(m==15){
            strcpy(time, "quarter past ");
            strcat(time,hours[h-1]);
        } else{
            strcpy(time, min[m-1]);
            strcat(time," minutes past ");
            strcat(time,hours[h-1]);
        }
    }
    if(m==30){
         strcpy(time, "half past ");
         strcat(time,hours[h-1]);
    }

    if(m>=31 && m<60) {
        if(m==45){
            strcpy(time, "quarter to ");
            strcat(time,hours[h]);
        } else{
            m=60-m;
            strcpy(time, min[m-1]);
            strcat(time," minutes to ");
            strcat(time,hours[h]);
        }
    }
    return time;
}
