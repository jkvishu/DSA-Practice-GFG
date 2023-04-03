//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool saveIronman(string ch);


int main()
{
    int t,b,c,d,e,f,g,h;
    cin>>t;
    char cc;
    cc = getchar();
    
    while(t--)
    {
        string ch;
        getline(cin,ch);
        
        if(saveIronman(ch)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
}

// } Driver Code Ends



bool saveIronman(string ch)
{
    // Complete the function
    // ✅💯😏
    int i=0,j=ch.length()-1;
    while(i<j){
        while(i<ch.length()&&(!(ch[i]>=65&&ch[i]<=90))&&(!(ch[i]>=97&ch[i]<=122))&&(!(ch[i]>='0'&&ch[i]<='9'))){
            i++;
        }
        while(j>=0&&(!(ch[j]>=65&&ch[j]<=90))&&(!(ch[j]>=97&ch[j]<=122))&&(!(ch[j]>='0'&&ch[j]<='9'))){
            j--;
        }
        if(tolower(ch[i])==tolower(ch[j]))
        {
            i++;
            j--;
        }
        else
        return 0;
    }
    return 1;
}
