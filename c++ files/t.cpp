#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<int ,int > mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        unordered_map<int,int>mp1;
        int ans=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            mp1[s[i]]++;
            mp[s[i]]--;
            if(mp[s[i]]==0){mp.erase(s[i]);}
            int l=mp.size();
            int r=mp1.size();
            ans=max(ans,l+r);
        }
        
        cout<<ans<<endl;
    }
    return 0;
}
