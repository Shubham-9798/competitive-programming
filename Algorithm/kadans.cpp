/// It applied for when their is +ve/-ve number in the array
/// if all positive no sense of it as max is total sum of array

#include<iostream>
#include<vector>
using namespace std;

int func(vector<int> a) {

      int max_so_far = 0, max_ending_here = 0;
   for (int i = 0; i < a.size(); i++)
   {
       max_ending_here = max_ending_here + a[i];
       if (max_ending_here < 0)
           max_ending_here = 0;

       /* Do not compare for all elements. Compare only
          when  max_ending_here > 0 */
       else if (max_so_far < max_ending_here)
           max_so_far = max_ending_here;
   }
   return max_so_far;
}

int main() {
vector<int> arr{-2, -3, -4, -1, -2, 1, -5, -3}; /// if all number -ve then output zero
cout<<func(arr);

return 0;
}
