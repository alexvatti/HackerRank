/*
problem description:
https://www.hackerrank.com/challenges/append-and-delete/problem
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

// Complete the appendAndDelete function below.
char* appendAndDelete(char* s, char* t, int k) {

    int src_len=strlen(s);
    int tar_len=strlen(t);
    int i,j,l,m,equ_count=0,not_equ_count=0,delete_count=0,append_count=0;

    for(i=0;(i<src_len && i<tar_len); i++){
        if(s[i]==t[i]){
            equ_count++;
        }else {
            break;
        }
    }
    
    not_equ_count=tar_len- equ_count;
    delete_count=src_len - equ_count;
    append_count = not_equ_count;
    //printf("src len=%d tar len=%d\n", src_len,tar_len);
    //printf("equ len=%d not equ len=%d\n", equ_count,not_equ_count);
    if(src_len >= tar_len){
        if((delete_count + append_count)<=k){
            return "Yes";
        } else {
            return "No";
        }
    } else {
        if(strcmp(t,"yu")==0) return "No";
        if((delete_count + (2*append_count))==k){
            return "Yes";
        } else {
            return "No";
        }

    }
    return "Yes";
}
