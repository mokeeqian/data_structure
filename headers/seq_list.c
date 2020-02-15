#if !defined(SEQ_LIST)
#define SEQ_LIST

#include "basic_struct.h"

void listInit( SeqList *L ) {
    L->length = 0;
    return;
}

void listGenerate( SeqList *L, dataType nums[] ) {
    int i = 0;
    while ( i < sizeof(nums) / sizeof(dataType) )
    {
        L->data[i] = nums[i];
        i ++;
    }
    L->length = i + 1;
    return;
}

// pos 是元素位序， 即第几个元素
int listInsert( SeqList *L, int pos, dataType elem ) {
    if ( pos < 1 || pos > L->length + 1 ) {
        return 0;
    }
    int i = L->length;
    while( i >= pos ) {
        L->data[i] = L->data[i-1];
        i--;
    }
    L->data[i] = elem;
    L->length ++;
    return 1;
}

// 返回元素的位序， 不考虑重复元素
int listLocateByValue( SeqList *L, dataType val ) {
    for (int i = 0; i < L->length; i++) {
        if ( L->data[i] == val ) {
            return i + 1;
        }
    }
    return -1;
}

// 删除第pos个元素
int listDeleteByPos( SeqList *L, int pos, dataType* val ) {
    if ( pos < 1 || pos > L->length ) {
        return -1;
    }
    *val = L->data[pos-1];
    int i = pos-1;
    while ( i < L->length ) {
        L->data[i] = L->data[i+1];
        i ++;
    }
    return 1;
}

// 删除值为val的元素，假设没有重复的
int listDeleteByValue( SeqList *L, dataType val, int* pos ) {
    int i = 0;
    while (i < L->length)
    {
        if (val == L->data[i])
        {
            *pos = i + 1;
            break;
        }
        i++;
    }
    while (L->length - i)
    {
        L->data[i] = L->data[i+1];
        i++;
    }
    return 1;    
}

#endif // SEQ_LIST
