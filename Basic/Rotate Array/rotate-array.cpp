#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
    // cout<<"Hello there I am Vishu";
    // cout<<"Welcome to my profile";
    // cout<<"Ha salo input bhi hmse hi lelo"
    int t;
    cin>>t;
    while(t--){
        int j=0,n,k,i;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(i>=k){
                b[j++]=a[i];
            }
        }
        i=0;
        while(i<k){
            b[j++]=a[i];
            i++;
        }
        for(i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}