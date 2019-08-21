/*
problem description:
https://www.hackerrank.com/challenges/caesar-cipher-1/problem
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

// Complete the caesarCipher function below.

char result[10000]={0};
char* caesarCipher(char* s, int k) {
    int rotate=0,i,offset=0;
    unsigned char ch;

    if(k>26) 
        rotate=k%26;
    else if(k==26)
        rotate=0;
    else
        rotate=k;

    for(i=0;i<strlen(s);i++){
        ch=s[i];
        if((ch=='-') || (ch=='.')) {

        }else if(ch>='a' && ch<='z'){
            ch=ch+rotate;
            offset=ch-'z';
            if(offset > 0){
                
                ch='a'+(offset-1); 
            }
        }else if(ch>='A' && ch<='Z'){
            ch=ch+rotate;
            offset=ch-'Z';
            if(offset>0){
                 ch='A'+(offset-1);
            }
        }else {
            ch=s[i];
        }
        result[i]=ch;
    }
    result[i]='\0';
    return &result[0];

}

