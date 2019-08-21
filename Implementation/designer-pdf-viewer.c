/*
problem description:
https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
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
char** split_string(char*);

// Complete the designerPdfViewer function below.
int designerPdfViewer(int h_count, int* h, char* word) {
    int len=strlen(word);
    char ch;
    int max=0,val=-1;

    while(*word != '\0') {
        ch=*word;
        printf("ch=%c %d\n",ch,ch);
        val=h[ch-97];
        printf("val=%d\n",val);
        if(max<val)
            max=val;
        word++;    
    }
    printf("max=%d\n len=%d\n",max,len);
    return (max*len);

}
