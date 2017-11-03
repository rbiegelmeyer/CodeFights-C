#include <stdio.h>
#include <stdlib.h>


// Definition for arrays:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }
//
//

typedef struct arr_integer
{
    int size;
    int *arr;
} arr_integer;

arr_integer alloc_arr_integer(int len)
{
    arr_integer a = {len, len > 0 ? malloc(sizeof(int) * len) : 0};
    return a;
}

int adjacentElementsProduct(arr_integer inputArray)
{
    int high = inputArray.arr[0]*inputArray.arr[1];
    for (unsigned int i = 1; i < inputArray.size - 1; i++)
    {
        int t = inputArray.arr[i]*inputArray.arr[i+1];
        if (high<t)
            high = t;
    }
    return high;
}

int main()
{

    return 0;
}