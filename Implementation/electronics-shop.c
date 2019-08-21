/*
problem description:
https://www.hackerrank.com/challenges/electronics-shop/problem
*/

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b) {

    long i,j,k,l,m,temp,prev=0;
    //arrange key board prices
    for(i=0;i<keyboards_count-1;i++){
        for(j=i+1;j<keyboards_count;j++){
            if(keyboards[i]>keyboards[j]){
                temp=keyboards[i];
                keyboards[i]=keyboards[j];
                keyboards[j]=temp;
            }

        }
    }
    //arrange usb drive prices
    for(i=0;i<drives_count-1;i++){
        for(j=i+1;j<drives_count;j++){
            if(drives[i]>drives[j]){
                temp=drives[i];
                drives[i]=drives[j];
                drives[j]=temp;
            }

        }
    }
    if((keyboards[0] + drives[0]) >b){
        return -1;
    }
    prev=keyboards[0];
    for(i=0;i<keyboards_count;i++) {
        for(j=0;j<drives_count;j++){
            if((keyboards[i] + drives[j]) <= b){
                if(prev<(keyboards[i] + drives[j]))
                    prev=keyboards[i] + drives[j];
                else {
                    
                }
                    
                    
            }else 
                break;
                
        }
    }
    return prev;
}
