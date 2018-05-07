#include<iostream>
//friend function used with many class at a time.i.e it is friend of any

using namespace std;

class Complex{

  private:
      int a,b;
  public:
      void setData(int x,int y){

      a=x;b=y;
      }

      void showData(){
         cout<<a<<" and "<<b<<endl;
      }

      friend void fun();

};

void fun(Complex c){  //complex :: wrong
   cout<<"sum is "<<c.a+c.b;//wrong way it belong to which c1,c2;so,pass object

}



int main(){

   class Complex c1;
   //c1.fun()  wrong
   fun(c1);
   c1.setData(2,3);
   c1.showData();





  // getch();
  return 0;
}
