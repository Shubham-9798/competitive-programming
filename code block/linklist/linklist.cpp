#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{
int data;
struct Node *next;

};
int main(){

  struct Node *head=NULL;
  struct Node *ptr;
  int a;

  for(int i=0;i<4;i++){
     head=(struct Node *)malloc(sizeof(struct Node));
     cout<<"Enter value";
     cin>>a;
     head->data=a;
     head->next=head;


  }head->next=NULL;


return 0;
}
