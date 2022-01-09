
#pragma once

//typedef int SLDataType;
//#define N 10
//
//struct SeqList
//{
//	SLDataType a[N];
//	int size;
//	int capacity;
//};
//
////尾插尾删  头插头删
//void SeqListPushBack(struct SeqList* ps, SLDataType x);
//void SeqListPopBack(struct SeqList* ps);
//void SeqListPushFront(struct SeqList* ps, SLDataType x);
//void SeqListPopFront(struct SeqList* ps);
//
////任意位置的插入删除
//void SepListInsert(struct SeList* ps, int pos,
//	SLDataType x);
//void SeqlistErase(struct Seqlist* ps, int pos);
////任意位置的插入删除
//void SeqlistInsert(struct Seqlist* ps, int pos,
//	SLDataType x);
//void SeqlistErase(struct Seqlist* ps, int pos);


typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL, SeqList;

//尾插尾删  头插头删
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

//任意位置的插入删除
void SepListInsert(SL* ps, int pos,
	SLDataType x);
void SeqlistErase(SL* ps, int pos);