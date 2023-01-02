//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int calc(int x,int mx[],int size){
        int cry=0;
        for(int j=0;j<size;j++){
            int p=mx[j]*x+cry;
            mx[j]=p%10;
            cry=p/10;
        }
        while(cry){
            mx[size]=cry%10;
            cry=cry/10;
            size++;
        }
        return size;
    }
    vector<int> factorial(int N){
        // code here
        //Done with help edt
        int mx[1000000];
        vector<int>v;
        mx[0]=1;
        int size=1;
        for(int i=2;i<=N;i++){
            size=calc(i,mx,size);
        }
        for(int i=size-1;i>=0;i--){
            v.push_back(mx[i]);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends