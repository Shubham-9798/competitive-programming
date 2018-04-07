#include <iostream>
#include <string>

using namespace std;

void fun(string& str);
int main(){

/*
  int i=0,j,test; //use test=3 static number of tests
  //char str[100];
  string str;
  cout<<"enter the test case";
  cin>>test;
  int q=test;

  while(q--)
  {
  cout<<"enter the string";
  getline (cin,str);
   // cin.get(str, 100);
  cout<<"\n"<<str;
  i++;
  }

*/

/*
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


*/

/*
   std::string name, title;

     int test=2;
     cin>>test;
     std::cin.clear();
    //s std::getline(std::cin,test);

   std::cout << "Enter your name: ";
   std::getline(std::cin, name);

   std::cout << "Enter your favourite movie: ";
   std::getline(std::cin, title);

   std::cout << name << "'s favourite movie is " << title;
*/

 int test;
 //char str[100];
 string str;
 cout<<"number of test";
 cin>>test;

 while(test--)
 {
     cin>>str;
     cout<<test;
     fun(str);
 }

return 0;
}

void fun(string& str)
{
    cout<<str<<"shubham ndkkfkfjkf"<<endl;
}
