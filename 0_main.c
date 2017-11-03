#include <stdio.h>

#include "1_add.c"
#include "2_centuryFromYear.c"

int main()
{
    printf("%d\n\r",add(2,2));

    printf("%d\n\r",centuryFromYear(1780));


    return 0;
}