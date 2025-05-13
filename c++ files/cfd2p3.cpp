#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        ll int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        ll int arr[n][m];
        for (ll int i = 0; i < n; i++)
        {
            for (ll int j = 0; j < m; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        ll int j=0;
        ll int i=0;
        ll int p=0;
        while(i<n && j<m && p<s.size())
        {
            if(s[p]=='D'){
                ll int sum=0;
                for (ll int k = 0; k < m; k++)
                {
                    sum+=arr[i][k];
                }
                arr[i][j]=-1*sum;
                i++;
            }
            else{
                ll int sum=0;
                for (ll int k = 0; k < n; k++)
                {
                    sum+=arr[k][j];
                }
                arr[i][j]=-1*sum;
                j++;
            }
            p++;
        }
        ll int sum=0;
        for (ll int i = 0; i < m; i++)
        {
            sum+=arr[n-1][i];
        }
        arr[n-1][m-1]=-1*sum;
        for (ll int i = 0; i < n; i++)
        {
            for (ll int j = 0; j < m; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        
        
    }

    return 0;
}
