#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* func(int data){//instance memory
  struct node *q=(struct node *)malloc(sizeof(struct node));
  q->data=data;
  q->left=NULL;
  q->right=NULL;


return q;
};

struct node* binaryTree(int *arr){

  int n=6;
  struct node *t=func(arr[0]);
  //struct node *t;
  //t=root;
  for(int i=0;i<6;i++){//traversing node pass and
    while(t->left!=t->right){
        if(t->data<arr[i]){
           t= t->left;
        }else{
           t=t->right;
        }
    }

     if(t->data<arr[i]){
           t=func(arr[i]);
        }else{
          t=func(arr[i]);
        }


}
 return t;
}

int main(){
  int arr[]={1,2,7,-4,6,-3,4};
  //struct node *root = binaryTree(arr);


  cout<<root->data;
  cout<<root->left->data;
return 0;
}
