/* SqList is Sequence List */

#ifndef C_LEARN_LIST_H
#define C_LEARN_LIST_H
#define LIST_MAX 20

typedef struct {
    int length;
    int data[LIST_MAX];
} SqList;
SqList SqListCreate(void);
void SqListAdd(SqList *list, int e);
void SqListPrint(SqList list);
void IndexedSqListAdd(SqList *list, int e);
void SqListDelete(SqList *list, int e);

#endif //C_LEARN_LIST_H
