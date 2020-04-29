#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
void solve()
{
	int n,count= 0;
	cin>>n;
	int tmp= (n/2)-1;    
	if(n%4 != 0)        //if minmum required length of the array is not satisfied
	cout<<"NO"<<endl;
	else{ 
		vector<int> v;
		for(int i=1;i<=n+1;i++)
		{
			if(i%2 == 0)
			v.push_back(i);     //pushing the even elements in the array
	    }
	    int sum2 = 0;                                //sum of all odd numbers
	    int sum1 = accumulate(v.begin(),v.end(),0); //sum of all the even numbers
	    for(int i=1;i<=n;i++)
	    {
	    	if(i%2 != 0 && count !=tmp)         
	    	{
	    		v.push_back(i);
	    		sum2 = sum2+i;                  //finding the sum of all odd numbers
	    		count++;                        //increementing count till the second last position of the array 
			}
		}
		
		int ans = abs(sum2-sum1);           //the required last odd number will be absolute value of sum2 - sum1
		v.push_back(ans);                  //pushing the last element in the array
		cout<<"Yes"<<endl;
		for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";                   
		cout<<endl;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
