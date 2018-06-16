#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{
int data;
struct Node *next;

};
int main(){

struct Node* head=NULL;
struct Node* first=NULL;
struct Node* second=NULL;

head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));

head->data=1;
head->next=second;

second->data = 2; //assign data to second node
  second->next = third; // Link second node with the third node

   third->data = 3; //assign data to third node
  third->next = NULL;

return 0;
}
