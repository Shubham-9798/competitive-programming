#include<iostream>
#include<vector>

using namespace std;

int* array_left_rotation(vector<int> a, int n, int k) {

    k=k%n;//4%5
    int *b = new int[n];;
    int newL;




       for(int i=0;i<n;i++){
           newL=n-k+i;//5-4+0 ->1//

          if(newL>=n)
                newL=newL-n;
                  cout<<newL<<"-->"<<a[i]<<endl;//just chaecking newL
           *(b+newL)=a[i];

       }
    return b;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
   int *output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << *(output+i) << " ";
    cout << endl;
    return 0;
}
