//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
        // ✅💯😏
        // POTD
        deque<int>q;
        for(int i=1;i<=N;i++){
            q.push_back(i);
        }
        while(!q.empty()){
            for(int i=0;i<K;i++){
                if(q.size()>1)
                q.pop_front();
                else
                return q.front();
            }
            for(int i=0;i<K;i++){
                if(q.size()>1)
                q.pop_back();
                else
                return q.back();
            }
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends