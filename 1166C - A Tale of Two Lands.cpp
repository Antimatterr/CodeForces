#include <bits/stdc++.h>
using namespace std;
int a[10000000];

int main() {
  int n; 
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
    a[i] = abs(a[i]);
  }
  int ptr = 0;
  sort(a, a + n); 
  long long ans = 0;
  for(int i = 0; i < n; i++)
  {
    while(a[ptr] < a[i] - a[ptr])
    ptr++;
    ans += (i - ptr);
  }
  cout << ans <<endl;
}
