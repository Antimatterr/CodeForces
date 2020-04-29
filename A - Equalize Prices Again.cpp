#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[100];
		int sum =0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum = sum+a[i];
		}
		int  i=0;
		if(sum%n == 0)
		cout<<sum/n<<endl;
		else
		cout<<sum/n+1<<endl;
	}
	return 0;
}
