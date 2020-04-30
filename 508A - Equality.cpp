#include<iostream>
#include<set>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<char> v;
	char s;
	set<char> se;
	for(int i=0;i<n;i++)
	{
		cin>>s;
	v.push_back(s);
	se.insert(s);
    }
    vector<int> c;
    int count = 0;
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
	  if(v[i] == v[i+1])
	  {
	  count++;
	  continue;
      }
      c.push_back(count+1);
      count = 0;
     }
	sort(c.begin(),c.end());
	if(se.size() == k)
	cout<<c[0]*k;
	else
	cout<<"0";	    
	
	
	return 0;
}
