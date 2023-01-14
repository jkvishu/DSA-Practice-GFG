//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
map<int,int> mp; // mp hold 1 to those number which consists of only 1, 2, 3 as digits only 


// } Driver Code Ends
//User function template for C++

//Function to find all the numbers with only 1,2 and 3 in their digits.
void findAll() {
    //code here
    //Done on my own in first attempt was very easy
    int flag=0;
    int j;
    for(int i=1;i<=1000000;i++){
        if(i%10==1||i%10==2||i%10==3){
            j=i;
            while(j>0){
                if(j%10==1||j%10==2||j%10==3){
                    j=j/10;
                    continue;
                }
                else{
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                mp[i]=1;
            }
        }
            flag=0;
        }
    }

//{ Driver Code Starts.


int main()
{   
    findAll(); // find all such numbers whose digits are from set {1,2,3} from 1 to 1000000
    int t;
    cin>>t; 
    
    while(t--)
    {
        int n, flag=0;
        cin>>n; 
        
        int arr[n] ;
        
        for(int i=0;i<n;i++) // insert n elements
            cin >> arr[i]; 
        
        sort(arr,arr+n); // sort them
        
        for(int i = 0 ; i < n ; ++ i ) {
            if(mp[arr[i]]) { // if arr[i] is already there in the map then it satisfied else not 
                cout << arr[i] << " " ;
                flag=1;
            }
        }
        
        if(!flag)
            cout << "-1"; 
            
        cout<<endl;
    }
return 0;
}
// } Driver Code Ends