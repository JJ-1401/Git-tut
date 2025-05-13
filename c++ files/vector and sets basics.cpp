#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;

   while (t--)
   {
    int a,b;
    cin>>a>>b;
    int x1,y1;
    cin>>x1>>y1;
    int x2,y2;
    cin>>x2>>y2;
    vector<pair<int,int>> v1;
        v1={{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};
    set<pair<int,int>> s1,s2;

    for (auto d:v1)
    {
        int x=x1+d.first;
        int y=y1+d.second;
        s1.insert(make_pair(x,y));
        
       x=x2+d.first;
       y=y2+d.second;
        s2.insert(make_pair(x,y));
    }
    
    int count=0;
    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = 0; j < 8; j++)
    //     {
    //         if(s1[i].first==s2[j].first && s1[i].second==s2[j].second){count++;}
    //     }
        
    // }
    for (auto pos:s1 )
    {
        if(s2.find(pos) != s2.end())count++;
    }
    
    cout<<count<<endl;
    }
   
    return 0;
}