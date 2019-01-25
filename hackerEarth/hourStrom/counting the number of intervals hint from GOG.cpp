// C program for range minimum query using segment tree
#include <stdio.h>
#include<iostream>
#include <math.h>
#include <limits.h>
using namespace std;
// A utility function to get minimum of two numbers
int minVal(int x, int y) { return (x < y)? x: y; }

// A utility function to get the middle index from corner indexes.
int getMid(int s, int e) { return s + (e -s)/2; }

/* A recursive function to get the minimum value in a given range
	of array indexes. The following are parameters for this function.
*/
int RMQUtil(int *st, int ss, int se, int qs, int qe, int index,int *ct,int k)
{
	// If segment of this node is a part of given range, then return
	// the min of the segment
	if (qs <= ss && qe >= se)
		return st[index];

	// If segment of this node is outside the given range
	if (se < qs || ss > qe)
		return INT_MAX;

	// If a part of this segment overlaps with the given range
	int mid = getMid(ss, se);
	int sum = minVal(RMQUtil(st, ss, mid, qs, qe, 2*index+1,ct,k),
				RMQUtil(st, mid+1, se, qs, qe, 2*index+2,ct,k));
	if(sum+st[qs]+st[qe]>=k)
        ct++;
}

// Return minimum of elements in range from index qs (quey start) to
// qe (query end). It mainly uses RMQUtil()
int RMQ(int *st, int n, int qs, int qe, int *ct, int k)
{
	// Check for erroneous input values
	if (qs < 0 || qe > n-1 || qs > qe)
	{
		printf("Invalid Input");
		return -1;
	}

	return RMQUtil(st, 0, n-1, qs, qe, 0, ct, k);
}

// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
	if (ss == se)
	{
		st[si] = arr[ss];
		return arr[ss];
	}

	int mid = getMid(ss, se);
	st[si] = minVal(constructSTUtil(arr, ss, mid, st, si*2+1),
					constructSTUtil(arr, mid+1, se, st, si*2+2));
	return st[si];
}

/* Function to construct segment tree from given array. This function
allocates memory for segment tree and calls constructSTUtil() to
fill the allocated memory */
int *constructST(int arr[], int n)
{
	// Allocate memory for segment tree

	//Height of segment tree
	int x = (int)(ceil(log2(n)));

	// Maximum size of segment tree
	int max_size = 2*(int)pow(2, x) - 1;

	int *st = new int[max_size];

	// Fill the allocated memory st
	constructSTUtil(arr, 0, n-1, st, 0);

	// Return the constructed segment tree
	return st;
}

// Driver program to test above functions
int main()
{

	long long n ,k;
	cin>>n;
	cin>>k;
    int arr[n] ;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ct=0;
	// Build segment tree from given array
	int *st = constructST(arr, n);
    for(int i=0;i<4*n+1;i++)
        cout<<arr[i]<<endl;

    //for(int qs=0;qs<n;qs++)
    //for(int qe=0;qe<n;qe++){
    //   RMQ(st, n, qs, qe,&ct,k);
    //}




	return 0;
}

