/*
problem description:
https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem
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

// Complete the isValid function below.
char* isValid(char* s) {
    int first_occur,i;
    bool removed_char;
    char occur[27]={0};
    int forward_count=0;
    int diff=0;

    first_occur =-1;
    removed_char = false;
    
    if(strlen(s)==1) return "YES";
    for(i = 0; i < strlen(s); i++ ){
        occur[s[i] - 'a']++;
    }

    for(i =0; i < 26; i++)
    {
        
        if(occur[i] == 0){
            continue;
        }else if(first_occur == -1){
            first_occur = occur[i];
            continue;
        }else if(occur[i] == first_occur){
            continue;
        }else {
            diff=abs(occur[i] - first_occur);
            if(diff>=1) 
                forward_count++;
            if(forward_count>=2)
                return "NO";
            continue;  
      
        }
    }
    return "YES";
}
