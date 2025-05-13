#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
            ll int n,k;
            cin>>n>>k;
            ll int l[n];
            ll int r[n];
            for (ll int i = 0; i < n; i++)
            {
                cin>>l[i];
            }
            for (ll int i = 0; i < n; i++)
            {
                cin>>r[i];
            }
            ll sum=0;
            multiset<ll int> st;
            for (ll int i = 0; i < n; i++)
            {
                if(l[i]>=r[i]){sum+=l[i];
                                st.insert(r[i]);}
                else{sum+=r[i];
                        st.insert(l[i]);}
            }
            k--;
            auto it = st.rbegin(); // reverse iterator to get largest elements
            for (ll int i = 0; i < n && it != st.rend(); ++i, ++it) {
                if(k==0)break;
                sum += *it;
                k--;
            }
            cout<<sum+1<<endl;
            

  }
    return 0;
}