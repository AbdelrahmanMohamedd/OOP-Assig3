// Faculty of Computers and information - Cairo University
// Course   : CS213 - Programming II  - 2018
// Title    : Assignment III V2.0
// Program  : Subset sum Problem
/// Author  : Abdelrahman Mohamed Ahmed Mahmoud
/// ID      : 20170148     G: 6
// Date     : 17 Nov 2018
#include <iostream>
#include <vector>      //including the libraries
#include <bits/stdc++.h>
using namespace std;
// This Function returns the number of ways in which you can produce the target value by choosing a subset of the specified set.
int SubsetSumWays(vector<int> sample, int i, int target)
{
	// It return 0,If the target isn't achieved  ( all elements are processed ).
	if (i >= sample.size() && target != 0)
		 return 0;
	if (target == 0)    // It returns 1, If target is reached.
		 return 1;
	else return SubsetSumWays(sample,i+1,target) + SubsetSumWays(sample,i+1,target-sample[i]);
	// there is no consider to the current element,but Consider current element and subtract it from target.
	// Returning total count of the all possible cases that achieve the target.
}
// The Main Function
int main()
{
    int sample[] = {1,2,6,1}; // the sample of integers where the function will search...
    vector<int> vec (sample, sample + 4) ;
	int target = 6; 	      // target number (number that will be calculated by summation of any numbers from the sample.
	cout <<SubsetSumWays(vec,0,target)<< endl;
	return 0;
}
