#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    int count = 0;
    if(a>0)
    {
      count++;
      a--;
    }
    if(b>0){
      count++;
      b--;
    }
    if(c>0){
      count++;
      c--;
    }
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end(),greater<int>());
    a=v[0];
    b=v[1];
    c=v[2];
    if(a>0 && b>0)
    {
      count++;
      a--;
      b--;
    }
    if(b>0 && c>0)
    {
      count++;
      b--;
      c--;
    }
    if(a>0&&c>0)
    {
      count++;
      a--;
      c--;
    }
    if(a>0 && b>0 && c>0)
    {
      a--;
      b--;
      c--;
      count++;
    }
    cout<<count<<endl;
      }
  return 0;
}
