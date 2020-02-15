#if !defined(BASIC_STRUCT)
#define BASIC_STRUCT

#define dataType int
#define listMaxLen 999


/// 线性表
// 顺序表
typedef struct SeqList
{
    int length;
    // dataType *data;
    dataType data[listMaxLen];
}SeqList;
// 单链表，带头节点
typedef struct linkNode
{
    dataType val;
    struct linkNode *next;
}linkNode, *linkList;




#endif // BASIC_STRUCT
