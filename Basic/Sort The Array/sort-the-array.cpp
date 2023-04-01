//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*int partition(vector<int>&arr,int l,int h){
        int j=l-1,k=l;
        while(k<h){
            if(arr[k]<arr[h]){
                j++;
                swap(arr[j],arr[k]);
            }
            k++;
        }
        swap(arr[j+1],arr[h]);
        return j+1;
    }
    void quicksort(vector<int>&arr,int l,int h){
        if(l<h){
            int q=partition(arr,l,h);
            quicksort(arr,l,q-1);
            quicksort(arr,q+1,h);
        }
    }
    vector<int> sortArr(vector<int>arr, int n){
    //complete the function here
    //✅💯😏🤝
    quicksort(arr,0,n-1);
    return arr;
    }*/
    vector<int> sortArr(vector<int>arr, int n){
        //Let's check how fast is inbuilt sort
        sort(arr.begin(),arr.end());
        return arr;
    }
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        vector<int>v = ob.sortArr(s, n);
        for(auto i : v)
            cout << i << ' ';
        cout << endl;
    }
return 0;
}


// } Driver Code Ends