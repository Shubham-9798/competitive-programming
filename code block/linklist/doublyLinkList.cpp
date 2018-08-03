#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{
int data;
struct Node *next;
struct Node *pre;
};

int main(){

  struct Node *head=NULL;
  struct Node *ptr,*start;
  int a;
 head=(struct Node *)malloc(sizeof(struct Node));
 head->pre = start;
 start=head;
  for(int i=0;i<4;i++){
    //same as making the variable
     cout<<"Enter value";
     cin>>a;

     head->data=a;
      ptr=(struct Node *)malloc(sizeof(struct Node));
      ptr->pre = head->next;
     head->next=ptr;
    // head->pre = head;
     head=ptr;

  }head->next=NULL;

  while(start->next!=NULL){
    cout<<start->data<<endl;
    start=start->next;
  }
  cout<<endl;

    while(head->pre!=start){
    cout<<head->data<<endl;
    head=head->pre;
   }


return 0;
}
