#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
 public:
     int data;
     node *left,*right;

     node(int data){
        data = data;
        left = NULL;
        right = NULL;
     }

};


//
class binarySearch {
  public :
     binarySearch() { // constructor
        head = NULL;
    }
    ~binarySearch() {}; // destructor
      void addValue(int);
      void displayInorder(node *head);

      node * getHead (){
         return this->head;
      }
    private :
      node *head;
};

//add value method
void binarySearch :: addValue (int val){
   bool t = true;
   node *newNode = new node(val);
   node *temp = head;
   if(head == NULL){
     newNode->data = val;
     head = newNode;
   }
    else {
        do {
            if(val < temp->data)
            {
                temp = temp->left;
            }else if(val > temp->data)
            {
                temp = temp->right;
            }
        }while((temp->left != NULL)&&(temp->right != NULL));
         newNode->data = val;
         temp = newNode;
    }

}

void binarySearch :: displayInorder(node *head){
   node *temp = head ;
   if(temp == NULL)
   {
       cout<<"No data"<<endl;

   }else{
    /* first recur on left child */
    this->displayInorder (temp->left);

    /* then print the data of node */
    cout << temp->data << " ";

    /* now recur on right child */
    this->displayInorder (temp->right);

   }


}
int main(){
  binarySearch *tree = new binarySearch();
  //node *head = tree->getHead();
  //tree->displayInorder(head);
  tree->addValue(20);
  tree->addValue(12);
  tree->addValue(22);
  tree->addValue(14);
   node *head = tree->getHead();
  tree->displayInorder(head);
  //tree->addValue(33);

}
