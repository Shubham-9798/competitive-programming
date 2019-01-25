/*
  A family consists of x members. You are given the task to book flight tickets for these x members.
You are given the following information about the airline in which you have to book the tickets:

: It denotes the cost of one ticket of the flight.
: It denotes the number of total available seats in the flight.
: If the numbers of available seats are less than or equal to t, then the cost of the flight ticket increases to .
: It denotes the new hiked cost.
Determine the total cost to book the tickets for all the family members.

Note: The tickets are booked one by one for all the family members.

Input format

First line: Five space-separated integers p,s,h,t and x respectively

Output format

Print the total cost to book the tickets for all the members of the family.
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int p,s,h,t,x;
	cin>>p>>s>>t>>h>>x;

	int total = 0;


	if(s-t<x)
        total =  h*(x-(s-t)) + p*(s-t);

    if(s-t>=x)
            total = p*x;

    cout<<total;

    return 0;
}

