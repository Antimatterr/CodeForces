#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
  int n;
  int sum1=0,sum2=0;
  int a[100000];
  cin>>n;
  n=n*2;
  for(int i=0;i<n;i++)
  {
  	cin>>a[i];
  }
  sort(a,a+n);              
  for(int i=0;i<n/2;i++)
  {
  	sum1= sum1+a[i];
  }
  for(int i=n/2;i<n;i++)
  {
  	sum2 = sum2+a[i];
  }
  if(sum1 == sum2)
  cout<<"-1"<<endl;
  else
  {
  	for(int i=0;i<n;i++)
  	cout<<a[i]<<" ";
  }
  //cout<<sum1;
  //cout<<sum2;
  return 0;
}

