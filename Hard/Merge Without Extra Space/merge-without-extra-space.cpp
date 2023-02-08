//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i=n-1,j=0;
            while(i>=0&&j<m){
                if(arr1[i]>arr2[j]){
                    swap(arr1[i],arr2[j]);
                    i--;
                    j++;
                }
                else{
                    break;
                }
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
            //With using extra space it's damm easy.
            /*vector<int>v;
            int i,j=0;
            for(i=0;i<n;i++){
                v.push_back(arr1[i]);
            }
            for(i=0;i<m;i++){
                v.push_back(arr2[i]);
            }
            sort(v.begin(),v.end());
            for(i=0;i<n;i++){
                arr1[i]=v[j++];
            }
            for(i=0;i<m;i++){
                arr2[i]=v[j++];
            }*/
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends