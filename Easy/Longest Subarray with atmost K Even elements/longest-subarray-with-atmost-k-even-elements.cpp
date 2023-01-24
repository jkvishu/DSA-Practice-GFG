#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
    // cout<<"Hello there I am Vishu";
    // cout<<"Welcome to my profile";
    // cout<<"Done in first attempt using sliding window"
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0,j=0,ans=0;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                ans=max(ans,i-j+1);
                continue;
            }
            else {
                c++;
                while(j<i&&c>k){
                    if(a[j]%2==0){
                     c--;   
                    }
                    j++;
                }
                ans=max(ans,i-j+1);
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}