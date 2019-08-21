/*
problem description:
https://www.hackerrank.com/challenges/time-conversion/problem
*/

#include<assert.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* readline();

/*
 * Complete the timeConversion function below.
 */

char time[10];
char* timeConversion(char* s) {
    /*
     * Write your code here.
     */
     int hour,min,sec,am,pm;

    hour=((s[0]-'0')*10)+(s[1]-'0');
    min=((s[3]-'0')*10)+(s[4]-'0');
    sec=((s[6]-'0')*10)+(s[7]-'0');
    if(s[8]=='P'){
        pm=1;
        am=0;
        if(hour != 12){
            hour+=12;
            s[0]=(hour/10) + 0x30;
            s[1]=(hour%10) + 0x30;
        }
    }
    if(s[8]=='A'){
        pm=0;
        am=1;
        if(hour==12){
            s[0]= 0x30;
            s[1]= 0x30;
        }
    }
    strncpy(time,s,8);
    printf("time=%s\n",time);
    return time;
}
