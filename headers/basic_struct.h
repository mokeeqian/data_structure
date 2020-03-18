#if !defined(BASIC_STRUCT)
#define BASIC_STRUCT

#define dataType int
#define listMaxLen 999

#define VertexMaxLen 100
typedef char VertexType;    // 图顶点数据
typedef int EdgeType;       // 图的带权边类型

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



// 图
// 邻接矩阵
typedef struct 
{
    int vertexNum, edgesNum;
    VertexType vertexs[VertexMaxLen];
    EdgeType edges[VertexMaxLen][VertexMaxLen];
};



#endif // BASIC_STRUCT
