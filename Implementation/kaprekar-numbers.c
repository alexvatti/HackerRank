/*
problem description:
https://www.hackerrank.com/challenges/kaprekar-numbers/problem
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

// Complete the kaprekarNumbers function below.
long power_fun(long p){
    long power=0;
    power=p*p;
    return power;
}
int check_kepler_num(long power,int digit,long i){
    char buffer[1000];
    int len=0,num=0,saved_digit=0,k=0;
    long sum=0;
    buffer[0]='\0';

    {
        sprintf(buffer,"%ld",power);
        len=strlen(buffer);
        //printf("buffer=%s len=%d\n",buffer,len);
        saved_digit=digit;
        sum=0;
        k=len-digit;
        while(len>0){
            num=0;
            digit=saved_digit;
            k=len-digit;
            if(k<0)
                k=0;
            while(digit>0 && len>0){
                num=num*10+(buffer[k] -0x30);
                k++;
                digit--;
                len--;
            }
            sum=sum+num;
        }
        //printf("sum=%ld i=%ld\n",sum,i);
        if(sum==i) 
            return 1;
        else 
            return 0;
    }
    return 0;
}
void kaprekarNumbers(int p, int q) {

    long power;
    long i,j,digit=1,flag=0;
    int valid=0;

    for(i=p;i<=q;i++){
        flag=0;
        power=power_fun(i);
        
        if(i>=1 && i<=9) {
            digit=1;
        }else if(i>=10 && i<=99){
            digit=2;
        }else if(i>=100 && i<=999){
            digit=3;
        }else if(i>=1000 && i<=9999){
            digit=4;
        }else {
            digit=5;
        }
        //printf("i=%ld power=%ld digit=%ld\n",i,power,digit);
        flag=0;
        if(i!=10 && i!=100)
            flag=check_kepler_num(power,digit,i);

        if(flag==1){
            valid=1;
            printf("%ld ",i);
        }
        
    }
    if(valid==0)
        printf("INVALID RANGE");
}
