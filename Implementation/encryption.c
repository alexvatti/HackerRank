/*
problem description:
https://www.hackerrank.com/challenges/encryption/problem
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

// Complete the encryption function below.
char new_str[82];
char* encryption(char* s) {
    char *ptr=s;
    int count=0,count_1=0,j,k,temp,l,m,i=0;
    char str[82]; 
    int rows,columns;

    while(*ptr) {
      if (*ptr != ' ') {
        count++;
        str[i]=*ptr;
        i++;
      }
        ptr++;
    }
    str[i]='\0';
    count_1=strlen(str);
    printf("count=%d count_1=%d\n",count,count_1);

    k=2;
    while(1){
        temp=k*k;
        if(temp < count){
            k++;
        } else 
          break;
    }
    l=k-1;
    m=k;
    printf("l=%d m=%d\n", l, m);
    if((l*m) < count) {
        l=l+1;
      printf("new l=%d m=%d\n", l, m);
    } 
        rows=l;
        columns=m;
        i=0;
        for(k=0;k<m;k++){
            j=k;
          while (j < count) {
            new_str[i] = str[j];
            j = j + m;
            i++;
          }
          
          new_str[i] = ' ';
          i++;
        }
        
        new_str[i] = '\0';
    
    printf("str=%s\n", str);
    printf("new_str=%s\n",new_str);
    return &new_str[0];

}
