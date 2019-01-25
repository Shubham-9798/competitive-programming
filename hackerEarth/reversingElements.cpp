
// Sample code to perform I/O:

#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int subarr(vector<int> a, int size, int left, int right){

/*
int temp;
int lst = right;
for(int i=left;i<=left + (right-left)/2;i++){
    temp=a[i];
    a[i]=a[lst];
    a[lst]=temp;
    lst--;
}

for(int i=0;i<a.size();i++){
    cout<<a[i];
}
cout<<"left "<<left<<endl;
cout<<"right "<<right<<endl;
*/
int max_so_far = INT_MIN, max_ending_here = 0,start =0, end = 0, s=0;
int p,temp=right;
    for (int i=0; i< size; i++ )
    {
        if((i>=left)&&(i<=right)){
             p=a[temp];
             temp--;
        } else
          p = a[i];
            cout<<p;


        max_ending_here += p;

        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }

        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
    }
  return max_so_far;
}




int main() {
	int num,query,left,right;
	vector <int> a;
	cin >> num;
	cin >> query;

	for(int i=0;i<num;i++){
	    //cin>>a[i];
	    cin>>left;
	    a.push_back(left);
	}
	for(int i=0;i<query;i++){
	    cin >> left;
	    cin >> right;
	    cout<<subarr(a,num,left-1,right-1);
	}
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
