#include <stdio.h>
#include "lib/list.h"

int main(void)
{
    List myList = ListCreate();
    ListAdd(&myList, 8);
    ListAdd(&myList, 7);
    ListAdd(&myList, 6);
    ListAdd(&myList, 3);
    ListPrint(myList);
    return 0;
}

