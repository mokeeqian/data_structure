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

int listDeleteByPos( SeqList *L, int pos ) {

}

int listDeleteByValue( SeqList *L, dataType val ) {
    
}

#endif // SEQ_LIST
