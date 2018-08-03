#include<iostream>

using namespace std;

struct Node {
 int data;

};

class createNode{

  public:
   int data;
   int pre;
   struct Node* node(){
     struct Node *ptr;
     ptr = new(struct Node);
     ptr->data=30;
     return ptr;
   }


};

int main(){

   createNode node;
   node.data=10;
   node.pre=20;
   struct Node *ptrr = node.node();
   cout<<ptrr->data;
   createNode *ptr;
   ptr = &node;
   cout<<endl;
   cout<<ptr->data<<endl;
   cout<<ptr->pre;


return 0;
}
