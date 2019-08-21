/*
problem description:
https://www.hackerrank.com/challenges/cavity-map/problem
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

// Complete the cavityMap function below.
int find_map(char **grid,int i,int j){
    int val=grid[i][j];
    int val1,val2,val3,val4;

    val1=grid[i-1][j];
    val2=grid[i+1][j];

    val3=grid[i][j-1];
    val4=grid[i][j+1];

    if((val > val1) && (val > val2) && (val > val3) && (val > val4))
        return 1;
    else 
        return 0;
}
char** cavityMap(int grid_count, char** grid, int* result_count) {

    int i,j,flag=0;

    for(i=0;i<grid_count;i++){

        if((i==0) || (i==(grid_count-1)))
            continue;
            for(j=0;j<grid_count;j++){
                if(j==0 || j==(grid_count-1))
                    continue;
                flag=find_map(grid,i,j); 
                if(flag==1){
                    //printf("i=%d j=%d is outof order\n",i,j);  
                    grid[i][j]='X'; 
                }
            }
    }
    *result_count=grid_count;
    return grid;
}
