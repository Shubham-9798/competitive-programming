
#include<iostream>
//friend function used with many class at a time.i.e it is friend of any

using namespace std;
class B;
class A{
   private:
       int a;
   public:
       void setData(int x){
       a=x;

       }
     friend void fun(A,B);//make the B understandable by compiler so declare at top
};

class B{
      private:
       int b;
   public:
     void setData(int x){
       b=x;

       }
     friend void fun(A,B);
};

void fun(A o1,B o2)
{
    cout<<"sum is "<<o1.a+o2.b;
}



int main(){

    A c1;
    B c2;
    c1.setData(200);
    c2.setData(300);

    fun(c1,c2);







    return 0;
}
