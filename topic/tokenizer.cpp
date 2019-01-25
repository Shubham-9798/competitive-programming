#include<iostream>
#include<string.h>
using namespace std;


int main(){
    char str[] = "he kejke kejk ke";
    char *ptr;

    ptr = strtok(str, " ");
    //cout<<ptr<<endl;

    //ptr = strtok(NULL, " ");
    //cout<<ptr<<endl;

    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr = strtok(NULL, " ");
    }

return 0;
}

