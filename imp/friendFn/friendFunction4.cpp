#include<iostream>

using namespace std;


class A{

 public:
  void fun(){
  ...
  .....

  }

    void fun1(){
  ...
  .....

  }
};

class B{

 friend class A;
  //friend A::fun();

 // friend B::fun();


};

 void B::fun(A c1){

  cout<<"both are called";

 }


int main(){

 A c1;
 B c2;
 fun(c1);
 fun(c2);

return 0;
}
