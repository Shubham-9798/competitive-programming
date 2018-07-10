
#include<stdio.h>
#include<iostream>
using namespace std;

int search(int mat[4][4], int n, int x)
{
   int i = 0, j = n-1;  //set indexes for top right element
   while ( i < n && j >= 0 )
   {
       cout<<i <<"And"<<j<<endl;
      if ( mat[i][j] == x )
      {
         printf("n Found at %d, %d", i, j);
         return 1;
      }
      if ( mat[i][j] > x )
        j--;
      else //  if mat[i][j] < x
        i++;
   }

   printf("n Element not found ");
   return 0;  // if ( i==n || j== -1 )
}

// driver program to test above function
int main()
{
  int mat[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {29, 31, 37, 48},
                    {32, 33, 39, 50},
                  };
  search(mat, 4, 29);
  return 0;
}
