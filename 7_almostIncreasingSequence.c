#include <stdio.h>
#include <stdlib.h>

#define bool int

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

bool almostIncreasingSequence(arr_integer sequence)
{
    bool t = 0;

    for (unsigned int i = 0; i<sequence.size-1; i++)
    {
        if ((sequence.arr[i])>=sequence.arr[i+1])
        {
            if (t)
                return 0;
            t = 1;
        } 
    }
    return 1;
}

int main()
{
    int a[4] = {1,3,4,2};
    arr_integer sequence = {.size = 3, .arr = a};


    printf("%d\r\n",almostIncreasingSequence(sequence));

    return 0;
}