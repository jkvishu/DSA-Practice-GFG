//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix){
        //code here
        //cps🤝❌
        int n = matrix.size(), m = matrix[0].size();
        char d = 'r';
        int i = 0, j = 0;
        while(i < n and j < m) {
            if(matrix[i][j] == 0) {
                if(d == 'r') {
                    if(j + 1 == m) return {i, j};
                    else j++;
                } else if(d == 'd') {
                    if(i + 1 == n) return {i, j};
                    else i++;
                } else if(d == 'l') {
                    if(j - 1 < 0) return {i, j};
                    else j--;
                } else {
                    if(i - 1 < 0) return {i, j};
                    else i--;
                }
            } else {
                if(d == 'u') {
                    d = 'r';
                    matrix[i][j] = 0;
                } else if(d == 'r') {
                    d = 'd';
                    matrix[i][j] = 0;
                } else if(d == 'd') {
                    d = 'l';
                    matrix[i][j] = 0;
                } else {
                    d = 'u';
                    matrix[i][j] = 0;
                }
            }
        }
        return {};
    }

};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends