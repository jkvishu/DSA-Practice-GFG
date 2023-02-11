//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    void Mutliply(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
        // Code here
        //Jood ✅💯😂
        int c=0;
        int n=matrixA.size();
        int v[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    c+=(matrixA[i][k]*matrixB[k][j]);
                }
                v[i][j]=c;
                c=0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrixA[i][j]=v[i][j];
            }
        }
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrixA(n, vector<int>(n,0));
		vector<vector<int>> matrixB(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixA[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixB[i][j];
			}
		}
		Solution ob;
		ob.Mutliply(matrixA, matrixB);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrixA[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends