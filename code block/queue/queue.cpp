#include<stdio.h>
#include <stdlib.h>
#include <limits.h>


struct Queue{
  int f,r;
  int *ary;
  unsigned capacity;

};

struct Queue* createQueue(int a){
  struct Queue *q ;//= (struct Queue*) malloc(sizeof(struct Queue));
  q->f=0;
  q->r=0;
  q->capacity=a;
  q->ary = (int*) malloc(q->capacity * sizeof(int));
  return q;

};

int isFull(struct Queue* q){
   if((q->r)+1==q->capacity)
      return 1;
      return 0;
}

int isEmpty(struct Queue* q){
 if(q->r==0)
 {
     printf("Queue is Empty\n");
     return 1;
 }
 return 0;
}

void enqueue (struct Queue* q,int a){
  if(isFull(q)){
    //printf("%d",q->capacity);
    //printf("%d",q->r);
    printf("Arrayy is full\n");
    return;
  }else{
   //struct Queue *p = (struct Queue*) malloc(sizeof(struct Queue));
   q->ary[q->r]=a;
   q->r=(q->r)+1;
   printf("%d enqueued to queue\n", a);


  }

}

void dequeue(struct Queue* q){
  if(isEmpty(q)){
   // printf("%d",q->capacity);
   // printf("%d",q->r);
    //printf("queue is full\n");

  }
  q->f = q->f + 1;


}

void traverse(struct Queue* q){
  if(!isEmpty(q)){
    //printf("%d",q->capacity);
    //printf("%d",q->r);
    //printf("Queue is empty\n");
  for(int i=q->f;i!=q->r;i++)
    printf("%d\n",q->ary[i]);
  }
}

int main(){

   struct Queue *q=createQueue(5);

    traverse(q);
    enqueue(q, 10);
    enqueue(q, 20);
    traverse(q);
    enqueue(q, 30);
    enqueue(q, 40);

    dequeue(q);
    traverse(q);

return 0;
}
