#include "stack&queue.h"

void createAntrian(antrianOrder &Q) {
  Head(Q) = nil;
  Tail(Q) = nil;
}

void createElement(infotypeantrian antrianBaru, adr &pAntrian) {
  next(pAntrian) = nil;
  info(pAntrian) = antrianBaru;
}

void enqueue(antrianOrder &Q, adr pAntrian) {
  if (Head(Q) == nil && Tail(Q) == nil) {
    Head(Q) = pAntrian;
    Tail(Q) = pAntrian;
  } else {
    next(Tail(Q)) = pAntrian;
    Tail(Q) = pAntrian;
  }
}

void dequeue(antrianOrder &Q, adr &pAntrian) {
  if (Q.Head == nil && Q.Tail == nil) {
    cout << "Queue kosong!!" << endl;
  } else {
    pAntrian = Head(Q);
    Head(Q) = next(pAntrian);
    next(pAntrian) = nil;
  }
}

void showSemuaAntrian(antrianOrder Q) {
  adr p = Head(Q);
  while (p != nil) {
    cout << "Nama : " << info(p).nama << endl;
    cout << "Barang : " << info(p).barang << endl;
    p = next(p);
  }
}

void createStack(Stack &S) { S.Top = 0; }

bool isEmpty(Stack S) { return S.Top == 0; }

bool isFull(Stack S) { return S.Top == MAX; }

void push(Stack &S, infotypestack x) {
  if (isFull(S)) {
    return;
  } else {
    S.Top++;
    S.info[S.Top] = x;
  }
}

infotypestack pop(Stack &S) {
  infotypestack data;
  if (isEmpty(S)) {
    return NULL;
  } else {
    data = S.info[S.Top];
    S.Top--;
    return data;
  }
}

void print(Stack S) {
  if (isEmpty(S)) {
    cout << "Stack Kosong" << endl;
    return;
  } else {
    for (int n = S.Top; n >= 1; n--) {
      cout << S.info[n] << " ";
    }
  }
}

void printStock(Stack S) {
  int i = 0;
  if (isEmpty(S)) {
    cout << "Stock Kosong" << endl;
    return;
  } else {
    for (int n = S.Top; n >= 1; n--) {
      i++;
    }
    cout << "Sisa Stock: " << i << endl;
  }
}

void pembelian(antrianOrder &Q, Stack &S1, Stack &S2) {
  adr pAntrian = Head(Q);
  if (info(pAntrian).barang == S1.info[S1.Top]) {
    cout << "Apakah " << info(pAntrian).nama
         << " jadi membeli barang (Ya/Tidak): ";
    cin >> info(pAntrian).kepastian;
    if (info(pAntrian).kepastian == "Ya") {
      dequeue(Q, pAntrian);
      pop(S1);
    }

  }else if (info(pAntrian).barang == S2.info[S2.Top]) {
    cout << "Apakah " << info(pAntrian).nama
         << " jadi membeli barang (Ya/Tidak): ";
    cin >> info(pAntrian).kepastian;
    if (info(pAntrian).kepastian == "Ya") {
      dequeue(Q, pAntrian);
      pop(S2);
    }
  }else {
    cout << "Barang tidak tersedia";
  }
}

void cari(antrianOrder &Q, string namaDicari) {
    adr pAntrian = Head(Q);
    while (pAntrian != NULL && info(pAntrian).nama != namaDicari){
        pAntrian = next(pAntrian);
    }
    if (pAntrian == NULL){
        cout << "Nama yang dicari tidak ada dalam antrian";
    }else {
        cout << "Nama terdapat di dalam antrian ";
        cout << "Barang yang akan ia beli adalah: " << info(pAntrian).barang;
    }
}

