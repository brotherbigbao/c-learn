#include <stdio.h>
#include "lib/sq_list.h"

//有序序列的添加
void TestIndexedSqListAdd()
{
    //创建一个有序的序列
    SqList myList = SqListCreate();
    SqListAdd(&myList, 8);
    SqListAdd(&myList, 16);
    SqListAdd(&myList, 22);
    SqListAdd(&myList, 77);

    //测试添加
    IndexedSqListAdd(&myList, 19);
    IndexedSqListAdd(&myList, 5);
    IndexedSqListAdd(&myList, 7);
    IndexedSqListAdd(&myList, 3);

    //打印出来看看是不是有序的
    SqListPrint(myList);
}

//测试序列删除
void TestSqListDelete()
{
    SqList myList = SqListCreate();
    SqListAdd(&myList, 88);
    SqListAdd(&myList, 3);
    SqListAdd(&myList, 65);
    SqListAdd(&myList, 22);

    SqListDelete(&myList, 65);
    SqListPrint(myList);
}

int main(void)
{
    //TestIndexedSqListAdd();
    TestSqListDelete();
    return 0;
}

