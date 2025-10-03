#include <stdio.h>
#include <stdlib.h>

#define LEN 5

int main()
{
    printf("\n-----Initializing Arrays----\n");
    //const int LEN = 5;
    int a[LEN]; // a has type int[5] and contains unpredictable values
    
    // before moving on we need a to contain all is
    for(int i =0 ; i< LEN ; i++)
    {
        a[i] = 1;
    }
    //array initialisation from brace-losed lists
    int x[] = {1,2,3,4,5};  //x has type int[5] and it hold 1,2,3,4,5
    int y[LEN]= {1,2,3};    //y has type int[5] and holds 1,2,3,0,0
    int z[LEN] = {0};      //z has type int[5] and hold 0,0,0,0,0

    // Array initalization with designators (sparse array)

    int w[LEN] = {[1]=1, [3]=1};                // w has type int[5] and holds 0,1,0,1,0
    int q[LEN] = {[1]=3, [LEN - 1]=5};          // q has type int[5] and holds 0,3,0,0,5
    int t[10] = {[0]=5, 4, [LEN - 3]=3,2,1};    // t has type int[10] and holds 5,4,0,0,0....., 3,2,1

}