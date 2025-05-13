#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s ;
        //s[i]==0 is wrong 
        //s[i]=='0' is correct 
        //always remember the above point
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        s.erase(remove(s.begin(),s.end(),'a'), s.end());
        s.erase(remove(s.begin(),s.end(),'e'), s.end());
        s.erase(remove(s.begin(),s.end(),'i'), s.end());
        s.erase(remove(s.begin(),s.end(),'o'), s.end());
        s.erase(remove(s.begin(),s.end(),'u'), s.end());

        char str[2*(s.size())] ;
        int j=0;
        for (int i = 0; i < (2*(s.size())); i++)
        {
            if(i%2==0){str[i] = '.';}
            if(i%2!=0){str[i]=s[j];
                        j++;}
        }
        
        
        for (int i = 0; i < (2*(s.size())) ; i++)
        {
            cout<<str[i];
        }
        cout<<endl;
        
    }
    return 0;
}

/* to check if a string is present in another string use contains()
        ex.) s.contain(g);
        
    to add two string you can directly use ' + ' sign .
    
    to insert value in a string use string.insert(index,value);
    
    to clear a string you can use string.clear();
    
    to add a character specific number of times in a string you can use 
    string(number of times you  want that character , character you want);
    
    to check if s[i] is a number/digit or not you can directly use isdigit(s[i])*/