/*
problem description:
https://www.hackerrank.com/challenges/reduced-string/problem
*/

#include<assert.h>
#include<ctype.h>
#include<limits.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* readline();

// Complete the superReducedString function below.
char result[102],temp[102];
int ReducedString(char *s)
{
     char prev,pre;
     int flag=0,i=0,len,j=0;

    if(s==NULL)
        return 0;
        
    printf("s=%s\n",s);
    len=strlen(s);
    prev=s[j];
    len--;
    while(len>0){
        j++;
        pre=s[j];
        len--;
        flag=0;
        if(prev==pre){
            
            if(len>0){
                j++;
                prev=s[j];
                len--;
            }else 
                break;
            flag=1;
        } else {
            result[i]=prev;
            i++;
            prev=pre;
            flag=1;
        }
        
        
    }
    if(flag==1){
        result[i]=prev;
        i++;
    } 
    result[i]='\0';
    return(strlen(result));
}

char* superReducedString(char* s) {

    int str_len=0,ret_str_len=0;
    char *r;

    if(s!=NULL){
        str_len=strlen(s);
        strcpy(temp,s);
        while(1){
            ret_str_len=ReducedString(&temp[0]);

            if(ret_str_len==0){
                return "Empty String";
            } else if(str_len==ret_str_len){
                return &result[0];
            }else {
                str_len=strlen(result);
                strcpy(temp,result);
            }
        }

    }
    return "Empty String";
}
