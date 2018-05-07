#include<iostream>
//overloading of insertion and extraction

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
       friend istream& operator>>(istream&, Complex&);
      friend ostream& operator<<(ostream&, Complex);




};


 ostream& operator<<(ostream &dout, Complex C){

 cout<<C.a<<"and"<<C.b;
  return dout;
 }

  istream& operator>>(istream &din, Complex &C){

 cin>>C.a>>C.b;
 return din;
 }



int main(){

  Complex c1;
  cout<<"enter the complex number";

  cin>>c1;//error
 // cin.operator>>c1;//cin object have many version
                    //and different in

  cout<<"the number is";
  cout<<c1; //operator<<(cout,c1);

  return 0;
}
