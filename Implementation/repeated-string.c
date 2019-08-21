/*
problem description:
https://www.hackerrank.com/challenges/repeated-string/problem
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

// Complete the repeatedString function below.
long repeatedString(char* s, long n) {
  long int len=strlen(s);
  long int count=0,extra_count=0,r=0;
  char *ptr=s;

  if(len==1) {
        if(*s=='a')
            return n;
        else
            return 0;
  }else {
        while(*s){
          if(*s=='a')
             count++;
             s++;
       }
    }

    r=n%len;
    if(r==0)
       return(count*(n/len));
    while(r>=1 && *ptr){
        if(*ptr=='a')
             extra_count++;
        ptr++;
        r--;
    }
    return((count*(n/len))+ extra_count);
}
