//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
        // POTD:-> 💯✅😏
        if(n==1&&m==1&&seats[0]==0)
        return 1;
        int i=0;
        if(seats[i]==0&&i+1<m&&seats[i+1]!=1){
        seats[i]=1;
        n--;
        }
        i++;
        while(n&&i<m){
            if(seats[i]==0){
                if(i-1>=0&&seats[i-1]!=1&&i+1<m&&seats[i+1]!=1){
                    seats[i]=1;
                    n--;
                }
                else if(i-1>=0&&seats[i-1]!=1&&i+1>=m){
                    seats[i]=1;
                    n--;
                }
            }
            i++;
        }
        if(n==0)
        return 1;
        return 0;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends