/*
problem description:
https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
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

// Complete the climbingLeaderboard function below.
int rank[200000];
int result[200000];

int binary_search(int low, int high , int *scores, int key){

    int mid;
    //printf("low=%d high=%d key=%d\n",low,high,key);
    if(low == (high-1))
        return high;

    if(key < scores[high])
        return high;

    if(key > scores[low])
        return low;
    //printf("low=%d high=%d key=%d\n",low,high,key);
    if((key < scores[low]) && (key > scores[high])){
       // printf("loop...low=%d high=%d key=%d\n",low,high,key);
        mid=(low+high)/2;
        if((key > scores[high]) && (key < scores[mid])){
           // printf("1...low=%d high=%d key=%d\n",low,high,key);
            return(binary_search(mid,high,scores,key));
        }
        if((key > scores[mid]) && (key < scores[low])){
           // printf("2...low=%d high=%d key=%d\n",low,high,key);
            return(binary_search(low,mid,scores,key));
        }
    }
    return 0;
}

int* climbingLeaderboard(int scores_count, int* scores, int alice_count, int* alice, int* result_count) {

    int i,j,k=1,max,score=0,flag=0;

    rank[0]=k;
    for(i=1;i<scores_count;i++){
        if(scores[i]==scores[i-1]){
            rank[i]=k;
        }else {
            rank[i]=++k;
        }
    }
    
    max=scores_count-1;
    //printf("rank max=%d\n k=%d",rank[max],k);
    k=0;
    for(i=0;i<alice_count;i++){
        flag=0;
        score=alice[i];
       // printf("score=%d\n",score);
        j= binary_search(0,scores_count-1,scores,score);
        if(j==(scores_count-1)){
            if(score >= scores[j] )
                result[k]=rank[j];
            else 
                result[k]=rank[j]+1;
        } else {
            while(1){
                if(score >= scores[j] ){
                    result[k]=rank[j];
                    break;
                } else 
                    j++;
            }
            
        }
        k++;
    }
    *result_count=k;
    return &result[0];
}
