//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
        // ✅🤝😏💯
        // POTD 
        // Based on the concept of finding the idle spaces that will be left when all characters are placed optimally on the scheduler array following the given conditons
        int a[26]={0};
        int mx=INT_MIN;
        char f;
        for(int i=0;i<N;i++){
            a[tasks[i]-'A']++;
            if(a[tasks[i]-'A']>mx){
            mx=a[tasks[i]-'A'];
            f=tasks[i];
            }
        }
        a[f-'A']=0;
        int c=mx-1;
        int ans=c*K;
        for(int i=0;i<26;i++){
            ans-=min(a[i],c);
        }
        if(ans<0)
        return N;
        return N+ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends