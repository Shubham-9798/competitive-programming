#include<iostream>
using namespace std;


struct Node{
  int data;
  struct Node *next;

};
class linkList{

public :
  struct Node* meth(int d[],struct Node *st){
    struct Node *p;
    struct Node *temp;
    for(int i = 0;i<4;i++){


          p=new(struct Node);
          temp=p;
          p->data=d[i];
       if(st==NULL)
        {
           //temp->next = Null;

        }else{
           temp->next = p;

        }
        temp = p;

    }temp->next=NULL;


    return temp;
  }

    void pLk(struct Node *ptr){
        cout<<"ccc";
    while(ptr->next!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }

    }

};

int main(){
   linkList lk;

   struct Node *n,*st;
   st=NULL;
   int arr[] = {4,3,2,1};
   st=lk.meth(arr,st);
   lk.pLk(st);

return 0;
}
