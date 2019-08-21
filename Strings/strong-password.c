/*
problem description:
https://www.hackerrank.com/challenges/strong-password/problem
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

// Complete the minimumNumber function below.
int minimumNumber(int n, char* password) {
    // Return the minimum number of characters to make the password strong
    int len=strlen(password),i,j;
    int present=0,missed=0,extra=0;
    char ch;
    int capital=1,small=1,number=1,special=1;
    char special_characters[] = "!@#$%^&*()-+";

  
        for(i=0;i<len;i++){
            ch=password[i];
            if(ch>='A' && ch<='Z')
                capital=0;
            else if(ch>='a' && ch<='z')
                small=0;
            else if(ch>='0' && ch<='9')
                number=0;
            else {
                for(j=0;j<strlen(special_characters);j++){
                    if(ch==special_characters[j]){
                        special=0;
                        break;
                    }
                }
            }
        }

        if(len>=6){
            if(special==0 && capital==0 &&  small==0 && number==0)
                return 0;
            else 
                return ((special + capital + small + number));
        }else{
            present=(!special + !capital + !small + !number);
            missed=4-present;
            extra=len-present;
            if(extra==0) 
                return(missed+2);
            else if(extra==1) 
                return(missed+1);
             else if(extra>=2) 
                return(missed);
            else{
                return 0;
            }
            //6=len + present + absent;
     }
}
