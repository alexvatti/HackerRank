/*
problem description:
https://www.hackerrank.com/challenges/the-grid-search/problem
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

// Complete the gridSearch function below.
char* gridSearch(int G_count, char** G, int P_count, char** P) {
    int flag=0,i,j,k,l;
    int R,C,r,c;
    C=strlen(G[0]);
    c=strlen(P[0]);
    R=G_count;
    r=P_count;
    printf("R=%d C=%d\n",R,C);
    printf("r=%d c=%d\n",r,c);
    for(i=0;i<=(R-r);i++) {
        for(j=0;j<=(C-c);j++){
            flag=0;
            for(k=0;k<r;k++){
                for(l=0;l<c;l++){
                    if(G[i+k][j+l]!=P[k][l]){
                        flag=1;
                        break;
                    }
                }
                if(flag==1) break;
            }
            if(flag==0)
                return "YES";
        }
    }
    return "NO";
}
