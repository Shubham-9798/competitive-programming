#include<stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;


//node created
struct node
{ //can't init member here
  int data;
  struct node *left;
  struct node *right;
};

struct node* newNode(int data){

     // Allocate memory for new node
  struct node* node = (struct node*)malloc(sizeof(struct node));

   node->data=data;

   node->left=NULL;
   node->right=NULL;


   return node;
}
int main(){
struct node *root=newNode(1);

   root->left        = newNode(2);
   root->right       = newNode(3);


     /* 2 and 3 become left and right children of 1
           1
         /   \
        2      3
     /    \    /  \
    NULL NULL NULL NULL
  */


  root->left->left  = newNode(4);
  /* 4 becomes left child of 2
           1
       /       \
      2          3
    /   \       /  \
   4    NULL  NULL  NULL
  /  \
NULL NULL
*/

cout<<root->right->data;



return 0;
}
