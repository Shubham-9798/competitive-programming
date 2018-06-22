#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

struct pQ{
  int **ary;//[priority][value]
  int r;
  int capacity;
  int priority;
};

struct pQ* createQueue(int a){
     struct pQ *p;
     p->r = 0;
     p->capacity=a;
     p->**ary = (int**) malloc(p->capacity * sizeof(int));
     return p;

};




int main(){
   struct pQ *p=crateQueue(5);
   int V=10,P=2;
   //insertValue(V,P);
return 0;
}
