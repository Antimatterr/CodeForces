#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
	long long y,k,n,x,tmp;
	cin>>y>>k>>n;
	x=k-(y%k);              //finding the number which gives the first number divisivble by k after adding it to y
	if(x>=n-y+1)            //impossible condition
	cout<<"-1";             
	else {
		tmp = n-y;          //finding the maximum range of the output 
		long long i =x;     
		while(i<=tmp){       
		   cout<<i<<" ";
		   i+=k;            //increementing i by k so that it will always be divisible by k and also reduces complexity 
		}
	}
	return 0;
}

