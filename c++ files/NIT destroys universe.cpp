#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int count=0;
        for (int i = 0; i < n; i++)
        {
          cin>>arr[i];
        }

       int l=-1,r=-1;
       for (int i = 0; i < n; i++)
       {
        if(arr[i]!=0 && l==-1){l=i;}
        else if(arr[i]!=0 && l!=-1){r=i;}
       }
       if(l==-1 && r==-1){cout<<0<<endl;continue;}
       else if(r==-1){
        cout<<1<<endl;
        continue;
       }
       else{
        for (int i = l+1; i < r; i++)
        {
          if(arr[i]==0 && arr[i-1]!=0){count++;}
        }
        
       }
       count=count+1;
       if(count>2){cout<<2<<endl;}
       else{cout<<count<<endl;}
  }

return 0;

}
