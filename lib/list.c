#include <stdio.h>
#include "list.h"

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
