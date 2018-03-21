//
// Created by liuyibao on 2018/3/21.
//

#ifndef C_LEARN_LIST_H
#define C_LEARN_LIST_H

typedef struct {
    int length;
    int data[10];
} List;
List ListCreate(void);
void ListAdd(List *list, int e);
void ListPrint(List list);

#endif //C_LEARN_LIST_H
