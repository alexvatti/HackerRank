/*
problem description:
https://www.hackerrank.com/challenges/grading/problem
*/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

int* gradingStudents(int grades_count, int* grades, int* result_count) {
    int i,temp1,temp2;

    for(i=0;i<grades_count;i++){
        if(grades[i]<38){

        }else {
            temp1=grades[i];
            temp1=(temp1/5);
            temp2=5*(temp1+1);

            if (abs(grades[i]-temp2)<3)
                grades[i]=temp2;
        }
    }
    *result_count=grades_count;
    return grades;
}
