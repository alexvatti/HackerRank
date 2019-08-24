/*
problem: coredump analysis
*/
#include<stdio.h>
#include<string.h>

int main() 
{ 
   char *str;  
   str = "GfG";      
   *(str+1) = 'n';  
   return 0; 
} 

