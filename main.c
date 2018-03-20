#include <stdio.h>

typedef struct {
    int length;
    int data[10];
} List;

List ListCreate() {
    List list;
    list.length=0;
    return list;
}

void ListAdd(List *list, int e) {
    list->data[list->length] = e;
    list->length++;
}

void ListPrint(List list) {
    for (int i=0; i<list.length; i++) {
        printf("%d\n", list.data[i]);
    }
}

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

