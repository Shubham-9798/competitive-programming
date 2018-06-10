#include<iostream>
using namespace std;
#define max 6

//global declaration
static int top=0;

void showdata(int *arr){
   for(int i=0;i<top;i++){
    cout<<arr[i]<<endl;
   }

}

void pop(int* arr){
    cout<<top;
   cout<<"-----------------------"<<endl;
   top--;
   cout<<top;
   showdata(arr);

}




char push(int *arr){

    int i;
  if(top==max){
    cout<<"stack is overflowed";
    showdata(arr);
    return 'n';
  }
  else
  {
      cin>>i;
      arr[top]=i;
      top++;
      return 'y';
  }

}



int main(){

char s;
int arr[max];
int i;
do{


    s=push(arr);//0123456
    //cout<<"do u want to continue.y/n"<<endl;
    //cin>>s;
}while((s=='y')||(s=='Y'));

pop(arr);


return 0;
}
