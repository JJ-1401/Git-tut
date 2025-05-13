#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
       ll int n;
       cin>>n;
      
      // to check if odd divisor exist or not we use bitwise and operator
      //if bitwise and of n and n-1 is 0 odd divisor of n doesn't exist
      //else it exist
      if((n & n-1)==0){cout<<"NO"<<endl;}
      else{cout<<"YES"<<endl;}
  }

return 0;

}
