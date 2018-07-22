#include<iostream>
using namespace std;


class Node{
    //private
  private:
      int a;
      //public
  public:
      int setValue(int b){
          if(b==1)
            return 0;
            a=b;
            cout<<getValue()<<endl;
           setValue(b-1);

      }
      int getValue(){
        return a;
      }

};

class Lk{

   public:
   void call(){
      Node clss;
      clss.setValue(10);
      cout<<clss.getValue()<<endl;
   }

};


int main(){

  Node cls;
  cls.setValue(10);
  cout<<cls.getValue()<<endl;

  Lk cls1;
  cls1.call();

  Node *ak;
  ak = &cls;
  ak->setValue(9);
  cout<<ak->getValue()<<endl;


return 0;
}

