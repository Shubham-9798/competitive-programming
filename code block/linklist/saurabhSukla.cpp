#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
  int data;
  struct node *next;

};

struct node *start=NULL;//stdio

struct node* createNode(){

  struct node *n;
  n=(struct node *)malloc(sizeof(struct node));//return void type pointer

return n;
};

void insertNode(){
  struct node *temp;
  temp=createNode();
  cout<<"Enter the number";
  cin>>temp->data;
  temp->next=NULL;
  if(start==NULL)
    start=temp;
  else{
    struct node *t;
        t=start;
    while(t->next!=NULL){

        t=t->next;
    }

    t->next=temp;

  }

}


void traverse()
{
    struct node *temp=start;

    if(start==NULL){
         cout<<"list is empty";
        return 0;
    }
   while(temp!=NULL){
      cout<<temp->data<<endl;
     temp=temp->next;
   }
}

void deleteBegin(){
     struct node *r=start;
     start=start->next;
     free(r);

}

void deleteLast(){

      struct node *temp=start;
     while(temp!=NULL){
        //cout<<temp->data<<endl;
        temp=temp->next;
      }
      free(temp);


}

int main(){
   int n=4;
      while(n--){
         insertNode();//insertion
     }
     cout<<"traversing"<<endl;
   traverse();//access

   //deletion method
   cout<<"beginig delete"<<endl;
   deleteBegin(); traverse();//access
    cout<<"End deletion"<<endl;
   deleteLast();  traverse();//access
   //deleteNode();

return 0;
}
