#include<iostream>
#ifndef LIST_H_INCLUDED 
#define LIST_H_INCLUDED 
 
#define Nil NULL 
 
using namespace std; 

struct Mahasiswa{ 
   char nama[30]; 
   char nim[10];
};
 
typedef Mahasiswa infotype; 
 
typedef struct elmList *address; 
 
struct elmList { 
   infotype info; 
   address next; 
}; 
 
struct List{ 
   address first; 
}; 

struct elmList* alokasi(Mahasiswa M);

bool isEmpty(List L);
void createList(List &L);

void dealokasi(address p);

void insertFirst(List &L, address p);
void insertLast(List &L, address p);
void insertAfter(List &L, address p);
void printInfo(List L);
int nbList(List L);
#endif