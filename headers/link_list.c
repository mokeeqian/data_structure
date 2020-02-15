#if !defined(LINK_LIST)
#define LINK_LIST

#include "basic_struct.h"
#include <stdlib.h>

linkNode* listInit() {
    linkNode* L = (linkNode *)malloc(sizeof(dataType));
    L-> next = NULL;
}

// 头插节点
void headInsert( linkNode* L, dataType val ) {
    if (!L)
    {
        return;
    }
    
    linkNode *tmp = NULL;
    tmp -> val = val;
    tmp -> next = L->next -> next;
    L->next = tmp;
    return;
}

void rearInsert( linkNode* L, dataType val ) {
    if (!L)
    {
        return;
    }
    linkNode* p = L;
    while (p->next)
    {
        p = p -> next;
    }

    linkNode* tmp = (linkNode*)malloc(sizeof(linkNode));
    tmp -> val = val;
    tmp -> next = NULL;
    p -> next = tmp;
    return;
}




#endif // LINK_LIST
