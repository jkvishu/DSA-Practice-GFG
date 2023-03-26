#include<bits/stdc++.h>
using namespace std;
void find(int arr[],int a,int b){
    sort(arr,arr+a);
}
int main()
 {
	//code
    // cout<<"Hello there I am Vishu";
    // cout<<"Welcome to my profile";
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a;
        cin>>b;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        find(arr,a,b);
        for(int i=0;i<a;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}