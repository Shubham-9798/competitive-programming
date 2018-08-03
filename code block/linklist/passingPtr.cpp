#include<iostream>
using namespace std;

struct Node{
  int a;
  int b;

};

struct Node* func(struct Node **ptr){
  struct Node val,*strt;

  val.a=10;
  val.b = 20;
  strt=&val;
  *ptr= &val;

//   cout<<*ptr->a<<"   "<<*ptr->b<<endl;
   return *ptr;

}

int main(){
struct Node *ptr;
ptr=func(&ptr);
cout<<ptr->a<<"   "<<ptr->b;

return 0;
}

