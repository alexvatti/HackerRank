/*
problem desciptin:
this is test example, generate a coredup,segementation fault
aim: how do you identify and fix it
*/

#include <stdio.h>
void foo()
{
    int *ptr = 0;
    *ptr = 7;
}
int main()
{
    foo();
    return 0;
}
