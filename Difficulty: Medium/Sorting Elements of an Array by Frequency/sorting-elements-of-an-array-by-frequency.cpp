//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
         unordered_map<int,int>m;
         int n=arr.size();
        vector<pair<int,int>>v;
        vector<int>ans;
        int j,k;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        auto it=m.begin();
        while(it!=m.end()){
            v.push_back({it->second,it->first});
            ++it;
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--){
            j=i;
            k=i;
            if(j>0&&v[j].first==v[j-1].first){
            while(j>0&&v[j].first==v[j-1].first){
                j--;
            }
            i=j;
            while(j<=k){
            while(v[j].first!=0){
                ans.push_back(v[j].second);
                v[j].first--;
            }
            j++;
            }
            }
            else{
                while(v[i].first!=0){
                    ans.push_back(v[i].second);
                    v[i].first--;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends