#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin>>n>>k;
        int a[n];
        int flag=1;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if(n==k){
            int p=1;
            for (int i = 1; i < n; i+=2)
            {
                if(a[i]==p)p++;
                else{
                    cout<<p<<endl;
                    flag=0;
                    break;
                }
            }
            
            if(flag==1){cout<<p<<endl;}
        }
        else{
            int p=n-k+1;
            int count=1;
            for (int i = 1; i <= n-k+1; i++)
            {
                if(a[i]!=1){cout<<1<<endl;
                flag=0;
                                break;}
            }
            if(flag==1)cout<<2<<endl;
        }
        
    }
    return 0;
}
