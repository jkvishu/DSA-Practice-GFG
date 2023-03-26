//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        // ✅💯😏 BRute force approach
        // Time taken 0.58 sec
        priority_queue<int>pq;
        vector<int>ans;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        int i=0;
        while(i<k&&!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
            i++;
        }
        return ans;
    }
    /*{
        //Let's see an approach exactly according to given constraints.
        //This solution is what question is seeking
        //🤝💯✅
        //Time taken 0.67 sec
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>ans(k);
        for(int i=0;i<k;i++){
            pq.push(arr[i]);
        }
        for(int i=k;i<n;i++){
            if(arr[i]>pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        int i=k-1;
        while(!pq.empty()){
            ans[i]=pq.top();
            pq.pop();
            i--;
        }
        return ans;
    }*/
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}

// } Driver Code Ends
