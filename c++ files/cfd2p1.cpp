#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;

    while (t--)
    {   
        ll d;
        cin>>d;
        ll a,b;
        for (int i = 1+d;; i++)
        {
            int t = 1;
    for (int j = 2; j * j <= i; j++) {
        if (i % j == 0) {
            t = 0;
            break;
        }
    }
    if (t) {
        a=i;
        break;
    }
        }
        for (int i = a+d;; i++)
        {
            int t = 1;
    for (int j = 2; j * j <= i; j++) {
        if (i % j == 0) {
            t = 0;
            break;
        }
    }
    if (t) {
        b=i;
        break;
    }
        }
        cout<<min(a*b,a*a*a)<<endl;       
  }
    return 0;
}