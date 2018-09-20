
#include<iostream>
using namespace std;

int replace_space(char *arr, int len){
/*    int n=0;
  for(int i=len;i>0;i--){
    if(arr[i]!=' ')
    {
        arr[i+1]='\0';
        n++;
    }
    int nLen=;
    for(int j=0;arr[j]!='\0',j<nLen;j++){

    }
*/
    char *newArr;
    cout<<len<<"DD"<<endl;
    int n = 0;
    for(int i=len;i>=0;i--){
             n++;
     if(arr[i]!=' ')
       {
         arr[i+1]='\0';
         break;
       }
    }
    int lenN = len-n+1;

    //one way
    /*
    for(int i=0;i<lenN+1;i++){
        if(arr[i]==' ')
            cout<<"%20";
        else
            cout<<arr[i];
    }
   */
    string newL="";
       for(int i=0;i<lenN+1;i++){
        if(arr[i]==' ')
            newL+="%20";
        else
            newL=newL+arr[i];
            }

 cout<<newL;
return 0;
}
int main(){
  char arr[] = "ab c d efg h   ";
  //string arrN = "ab c d efg h   ";
  int len = sizeof(arr)/sizeof(char);
  cout<<len<<endl;
  replace_space(arr,len-2);


return 0;
}
