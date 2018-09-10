//correct it
#include<iostream>
using namespace std;
void big_factorial(int number){
  int a[1000];
  int count;
  int val = number;
  int i = 0;
  int ct=0;


  while(val)
  {
      count=val%10;
      a[i] = count;
      i++;
      val=val/10;
      ct++;
  }
  int slen = ct;


  ct=0;
  for(int m=number-1;m>0;m--){
     //val = a[k]*m ;//failed because latterly it would multiply with big integer
     i=0;ct=0;

       while(i<slen)
      {
        val = a[i]*m+ct;

             a[i]=val%10;
             ct=val/10;
             i++;
      }
      while(ct){

        a[i] = ct%10;
        ct = ct/10;
        i++;
        slen++;
      }
  }

  for(int j=slen-1;j>=0;j--)
    cout<<a[j];

}

 int main(){
     big_factorial(5
                   0);

     return 0;
 }
