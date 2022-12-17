/*#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

#define LIST_INIT_SIZE 100;
#define LISTINCREMENT 10;


#define OK 1
#define ERROR 0

typedef int Status;
typedef int ElemType;
typedef struct{
	ElemType *elem;
	int length;
	int listsize;
}SqList;

Status InitList_Sq(SqList &L){
	L.elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
	if(!L.elem) exit(OVERFLOW);
	L.length =0;
	L.listsize =LIST_INIT_SIZE;
	return OK;
}
int main(){
	SqList L;
	InitList_Sq(L);
	return 0;
}

#include<iostream>
#define Maxsize 100

using namespace std;
struct SqList {
    int *elem;
    int length;
};

bool InitList(SqList &L) {
    L.elem = new int[Maxsize];
    L.length = 0;
    if (!L.elem && L.length) {
        return false;
    }
    return true;
}

bool CreateList(SqList &L) {
    int e, i = 0;
    cin >> e;
    while (e != -1) {
        if (L.length == Maxsize) {
            cout << "˳�������" << endl;
            return false;
        }
        L.elem[i++] = e;
        L.length++;
        cin >> e;
    }
    return true;
}

bool GetElem(SqList L, int i, int &e) {
    if (i < 1 || i > L.length) {
        return false;
    }
    e = L.elem[i - 1];
    return true;
}

int LocateElem(SqList L, int e) {
    for (int i = 0; i < L.length; i++) {
        if (L.elem[i] == e)
            return i + 1;
    }
    return -1;
}

bool ListInsert(SqList &L, int i, int e) {
    if (i < 1 || i > L.length) {
        return false;
    }
    if (L.length == Maxsize) {
        return false;
    }

    for (int j = L.length - 1; j >= i - 1; j--) {
        L.elem[j + 1] = L.elem[j];
    }
    L.elem[i - 1] = e;
    L.length++;
    return true;
}

bool ListDelete(SqList &L, int i, int &e) {
    if (i < 1 || i > L.length) {
        return false;
    }
    e = L.elem[i - 1];
    for (int j = i; j <= L.length - 1; j++) {
        L.elem[j - 1] = L.elem[j];
    }
    L.length--;
    return true;
}

void PrintList(SqList L) {
    for (int i = 0; i < L.length; i++) {
        i == 0 || printf(" ");
        cout << L.elem[i];
    }
    cout << endl;
}

void DestroyList(SqList &L) {
    if (L.elem) {
        delete[]L.elem;
    }
}

int main() {
    SqList L;
    int i, e, x;

    InitList(L);//��ʼ��
    cout<<"��ʼ�ɹ�"; 
    CreateList(L);//���� -1 ����
	cout<<"��������ɹ�"; 
    cin >> i;//�õ��� i ��Ԫ��
    GetElem(L, i, e);
    cout << "�� " << i << " ��Ԫ����" << e << endl;

    cin >> x;//����λ��
    cout << x << "�ڵ� " << LocateElem(L, x) << " ��λ��" << endl;

    cin >> i >> e;//���� λ��-Ԫ��
    ListInsert(L, i, e);
    PrintList(L); 

    cin >> i;//ɾ��
    ListDelete(L, i, e);

    PrintList(L);//��ӡ

    DestroyList(L);//�ͷſռ�
    return 0;
}
*/
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define LIST_INIT_SIZE 100;
#define LISTINCREMENT 10;

#define OVERFLOW -2;
#define OK 1
#define ERROR 0

typedef int Status;
typedef int ElemType;
typedef struct {
    ElemType* elem;
    int length;
    int listsize;
}SqList;

Status InitList_Sq(SqList& L) {
    L.elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!L.elem) {
        exit(OVERFLOW);
    }
    L.length = 0;
    L.listsize = LIST_INIT_SIZE;
    return OK;
}
Status ListInsert_Sq(SqList& L, int i, ElemType e) {
    if (i<1 || i>L.length + 1) return ERROR;
    if (L.length >= L.listsize) {
        newbase = (ElemType*)realloc(L.elem, (L.listsize + LISTINCREMENT) * sizeof(ElemType));
        if (!newbase) exit(OVERFLOW);
        L.elem = newbase;
        L.listsize += LISTINCREMENT;

    }
    q = &(L.elem[i - 1]);
    for (p = &(L.elem[L.length - 1]); p >= q; --p) *(p + 1) = *p;
    *q = e;
    ++L.length;
    return OK;
}
int main() {
    SqList L;
    InitList_Sq(L);
    ListInsert_Sq(SqList L, int 1, ElemType 2)
        return 0;
}
