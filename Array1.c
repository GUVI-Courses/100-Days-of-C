#include <stdio.h>
#include <stdlib.h>

int findNeighbor(int *arr , int n)

//1,11,10,4,1,5
// i and for
// left + right = element

int i ;
for( i = 1 ; i < n - 1; i++)

if( arr[i] == arr[i-1] + arr[i+1])

return 1;

}
return 0 ;

int main()
{
int arr[] = [ 1, 5, 10, 4, 1, 5 [;
int n = sizeof(arr) / sizeof(arr[ø]);
printf("result is %d",findNeighbor(arr, n));
}