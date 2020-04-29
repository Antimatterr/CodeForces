#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll t;
  cin>>t;
  while(t--)
  {
  	ll ans;
  	ll x,y,a,b;
  	cin>>x>>y;
  	cin>>a>>b;
  	ans = abs(x-y)*a;
  	//cout<<ans<<endl;
  	ans =ans + min(min(x,y)*b,2*a*min(x,y));
  	cout<<ans<<endl;
  }  
  return 0;
}
