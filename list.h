#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>
#include "my_data.h"

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;


/**
* Type infotype : mytype
* Type address  : pointer to ElmList
*
* Type ElmList <
*	info : infotype
*	next : address
* >
*
* Type List : < First : address >
*
**/



typedef mytype infotype;
typedef struct elmlist *address;

struct elmlist{
    //------------- your code here -----------

    //----------------------------------------
};

struct List{
    //------------- your code here -----------


    //----------------------------------------
};



// define a function and a procedure to allocate and deallocate an element list
void createList(List &L);
address allocate(infotype x);
void deallocate(address &P);

// define insert and delete procedure
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void insertAfter(List &L, address Prec, address P);
void deleteAfter(List&L, address Prec, address &P);

// define search-by-ID function and view procedure
address findElm(List L, infotype x);
void printInfo(List L);


#endif // LIST_H_INCLUDED
