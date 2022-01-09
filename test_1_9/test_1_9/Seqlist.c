#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//尾插尾删  头插头删
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

//任意位置的插入删除
void SepListInsert(SL* ps, int pos,
	SLDataType x);
void SeqlistErase(SL* ps, int pos);