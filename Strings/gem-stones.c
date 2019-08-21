/*
problem description:
https://www.hackerrank.com/challenges/gem-stones/problem
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

// Complete the gemstones function below.


/**
 * Remove all occurrences of a given character from string.
 */
void removeAll(char * str, const char toRemove, int index)
{
    int i;

    while(str[index] != '\0')
    {
        /* If duplicate character is found */
        if(str[index] == toRemove)
        {
            /* Shift all characters from current position to one place left */
            i = index;
            while(str[i] != '\0')
            {
                str[i] = str[i + 1];
                i++;
            }
        }
        else
        {
            index++;
        }
    }
}
void removeDuplicates(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        /* Remove all duplicate of character string[i] */
        removeAll(str, str[i], i + 1);
        i++;
    }
}

int gemstones(int arr_count, char** arr) {

    int str_len=0,i=0,j=0,count=0,flag=0;
    removeDuplicates(arr[0]);
    str_len=strlen(arr[0]);
    char ch;
    char *ptr=arr[0];


    for(i=0; i<str_len;i++){
        ch=*ptr;
        flag=1;
        for(j=1;j<arr_count;j++){
            if(strchr(arr[j],ch)!=NULL){
                //continue;
            } else {
                flag=0;
                break;
            }
        }
        ptr++;
        if(flag==1) count++;

    }
    return count;
}
