#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <iterator>

/*
Algorithm Algorithm Algorithm Algorithm
1) Sort all the elements of the given input array.
2) Find the two elements on either side of zero (if they are all positive or all negative then we are done with the solution)
 3) If the one is positive and other is negative then add the two values at those positions. If the total is positive then
 increment the negative index, if it is negative then increment the positive index. If it is zero then stop.
 4) loop step (,) until we hit a zero total or reached the end of array. Store the best total as you go.
*/

using namespace std;

bool check (int a,int pre){
   return abs(a)<=abs(pre)?true:false;
}

int main()
{
     int arr[]={1,60,-10,70,-80,85};
     sort(arr,arr+6);

if(check(-110,-20))
    cout<<"10 is near"<<endl;


     for(int i=0;i<6;i++)
     {cout<<arr[i]<<endl;


     }
    return 0;
}
