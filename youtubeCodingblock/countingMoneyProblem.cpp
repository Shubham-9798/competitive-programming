#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countCurrency(int amount)
{
    int notes[9] = { 2000, 500, 200, 100,
                     50, 20, 10, 5, 1 };
    //sort(notes,notes+9);
    int noteCounter[9] = { 0 };//all initilizes to zero

    // count notes using Greedy approach
    for (int i = 0; i < 9; i++) {
        if (amount >= notes[i]) {
            noteCounter[i] = amount / notes[i];
            amount = amount - noteCounter[i] * notes[i];
        }
    }

    // Print notes
    cout << "Currency Count ->" << endl;
    for (int i = 0; i < 9; i++) {
        if (noteCounter[i] != 0) {
            cout << notes[i] << " : "
                << noteCounter[i] << endl;
        }
    }
}

int notes[9] = {1,2,5,10,20,50,100};

int indexSearch(int amt,int fst,int Lst){
    int i = fst+(Lst-fst)/2;
    if(fst<=Lst){

    if(amt==notes[i])
    {
        cout<<amt<<"  "<<i<<endl;
         return i;
    }
    if(amt>notes[i])
        indexSearch(amt,i+1,Lst);
        indexSearch(amt,i,Lst-1);
    }
    return -1;
}

void newCount(int amt){
   int ind = indexSearch(20,0,6);//binary search by index

}

int main()
{
    int amount = 868;
     countCurrency(amount);
     newCount(amount);
    return 0;
}
