/* SqList is Sequence List */
#include <stdio.h>
#include "sq_list.h"

SqList SqListCreate() {
    SqList list;
    list.length=0;
    return list;
}

void SqListAdd(SqList *list, int e) {
    list->data[list->length] = e;
    list->length++;
}

void SqListPrint(SqList list) {
    for (int i=0; i<list.length; i++) {
        printf("%d\n", list.data[i]);
    }
}

//假如list是自增排序的,新增一个元素到合适的位置
void IndexedSqListAdd(SqList *list, int e) {
    //空的就直接加
    if (list->length == 0) {
        list->data[0] = e;
        list->length++;
        return;
    }

    //从最后一个比较, 现有的大就往后移一位
    for (int i=list->length-1; i>=0; i--) {
        if (list->data[i] > e) {
            list->data[i+1] = list->data[i];
            if (i==0) {
                list->data[0] = e;
            }
        } else {
            list->data[i+1] = e;
            break;
        }
    }
    list->length++;
    return;
}

//删除和e相同的元素，假如有多个则只删除第一个
void SqListDelete(SqList *list, int e) {
    int startMove = 0;
    for (int i=0; i<list->length; i++) {
        if (list->data[i] == e && !startMove) {
            startMove = 1;
        }
        if (startMove) {
            if (i < list->length-1) {
                list->data[i] = list->data[i+1];
            }
        }
    }

    if (startMove)
        list->length--;
}


