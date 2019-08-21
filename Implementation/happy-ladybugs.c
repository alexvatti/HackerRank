/*
problem descpription:
https://www.hackerrank.com/challenges/happy-ladybugs/problem
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

// Complete the happyLadybugs function below.
char final_str[10000];
char* frame_string(int spl,int len, char *str)
{
    int i,j,k,m;
    k=0;
    m=0;
    for(i=0;i<(len);i++){
        //printf("value=%c\n",temp_str[i]);
        if(str[i]!='_'){
            //printf("value=%c\n",temp_str[i]);
            for(j=i+1;j<len;j++){
                if(str[i]==str[j]){
                        final_str[m]=str[i];
                        str[j]='_';
                        m++;
                }
            }
            final_str[m]=str[i];
            m++;
        }
            
    }
    final_str[m]='\0';
    //printf("%s\n",final_str);
    return &final_str[0];


}
int find_happybird(int spl,int len, char *str){
    int i,flag=1,count=0;

    for(i=0;i<len;i++)
    {
        if(i==0){
            if(str[i]==str[i+1])
                continue;
            else {
                flag=0;
                break;
            }
        }else if(i==(len-1)){
            if(str[i]==str[i-1])
                continue;
            else {
                flag=0;
                break;
            }
        } else {

            if((str[i]==str[i+1]) || (str[i]==str[i-1]))
                continue;
            else {
                flag=0;
                break;
            }
        }
    }
   
    printf("flag=%d\n",flag);
    return flag;
}



char* happyLadybugs(char* b) {
    int str_len,i;
    int underscore_len=0;
    char *ptr=b;
    int flag=0;

    str_len=strlen(b);
    for(i=0;i<str_len;i++){
        if(*ptr=='_')
            underscore_len++;
        ptr++;
    }
    //printf("str len=%d underscore len=%d\n", str_len,underscore_len);

    if(str_len==underscore_len)
        return "YES";
    if(underscore_len==0)
        flag=find_happybird(underscore_len,str_len,b);
    else {
       // printf("%s\n",b);
        ptr=frame_string(underscore_len,str_len,b);
       // printf("%s\n",ptr);
        str_len=strlen(ptr);
        flag=find_happybird(0,str_len,ptr);
    }
    if(flag==0)
        return "NO";
    else
        return "YES";
}
