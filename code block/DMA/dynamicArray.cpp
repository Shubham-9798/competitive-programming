#include<stdio.h>
#include<stdlib.h>
//#include<limit>
using namespace std;

int *p;//same for both fun call
int i=0;
void insertD(int a){

  p[i]=a;
i++;
}


int main(){

       p=(int *)malloc(sizeof(int)*5);





    insertD(14);//insert dynamically
    insertD(14);//insert dynamically
    insertD(14);//insert dynamically
    insertD(14);//insert dynamically
    insertD(14);//insert dynamically
    insertD(14);//insert dynamically
    insertD(14);//insert dynamically
    insertD(14);//insert dynamically
    insertD(14);//insert dynamically
    insertD(14);//insert dynamically
    insertD(14);//insert dynamically
    insertD(14);//insert dynamically

  for(int i=0;i<14;i++){
        //printf("%d\n",p[i]);
         printf("%d---%d\n",*(p+i),p+i);

    }

    printf("%d\n",(sizeof(p)/sizeof(*p)));
return 0;
}
