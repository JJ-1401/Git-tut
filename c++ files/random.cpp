#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int >> a(n,vector<int>(n));
        vector<int> ps;
        for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < n; j++)
          {
            cin>>a[i][j];
          }
          
        }
        int ans=1;
        int count=0;
        for (int i = 0; i < n; i++)
        {
          for (int j = n-1; j>=0; j--)
          {
            if(a[i][j]==1)count++;
            else{break;}
          }
          ps.push_back(count);
          count=0;
        }
        sort(ps.begin(),ps.end());
        for(auto i : ps){
          if(i>=ans)ans++;
        }
        if(ans==n+1)ans--;
        cout<<ans<<endl;
    }
}