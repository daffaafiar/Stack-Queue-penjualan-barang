#ifndef STACK&QUEUE_H_INCLUDED
#define STACK&QUEUE_H_INCLUDED
#include <iostream>

using namespace std;

#define next(Q) (Q)->next
#define info(Q) (Q)->info
#define Head(Q) ((Q).Head)
#define Tail(Q) ((Q).Tail)
#define nil NULL

typedef struct queue infotypeantrian;
typedef struct element *adr;

struct queue {
  string nama;
  string barang;
  string kepastian;
};

struct element {
  infotypeantrian info;
  adr next;
};

struct antrianOrder {
  adr Head;
  adr Tail;
};

const int MAX = 13;

typedef string infotypestack;

struct Stack {
  infotypestack info[MAX];
  int Top;
};

void createAntrian(antrianOrder &Q);
void createElement(infotypeantrian antrianBaru, adr &pAntrian);
void enqueue(antrianOrder &Q, adr pAntrian);
void dequeue(antrianOrder &Q, adr &pAntrian);
void showSemuaAntrian(antrianOrder Q);

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack &S, infotypestack x);
infotypestack pop(Stack &S);
void print(Stack S);

void printStock(Stack S);
void cari(antrianOrder &Q, string namaDicari);
void pembelian(antrianOrder &Q, Stack &S1, Stack &S2);

#endif // STACK&QUEUE_H_INCLUDED
