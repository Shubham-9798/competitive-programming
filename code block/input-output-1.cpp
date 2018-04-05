#include <iostream>
#include <string>

using namespace std;

int main(){

/*
  int i=0,j,test; //use test=3 static
  //char str[100];
  string str;
  cout<<"enter the test case";
  cin>>test;

  while(test--)
  {
  cout<<"enter the string";
  getline (cin,str);
  if((str[i]>='a')&& (str[i]<='z'))
    cout<<"cool\n";
  cout<<"\n"<<str;
  i++;
  }
*/

//char str[100]="sh dndjd ddkjkd";
string str="jdkj dndkjdk jdkjkd";
int i;
for(i=0;i<str.length();i++){
 if((str[i]>='a')&& (str[i]<='z'))
      cout<<"cool"<<i<<endl;


    else
        cout<<"space";

         if(str[i]=='d')
            str[i]='1';
      //cout<<"d";

}
    cout<<str;




return 0;
}
