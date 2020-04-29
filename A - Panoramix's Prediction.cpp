#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
bool is_prime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (!(n%i))
            return false;
    return true;
}

int next_prime(int n) {
    for (n++; !is_prime(n); n++);
    return n;
}

int main() {
    int n, m;
    cin >> n >> m;
    if (m == next_prime(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}