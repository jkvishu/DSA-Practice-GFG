//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //✅💯
        //done in first attempt with my own logic in 0.03 sec.
        // a very little optimization can be done i.e we can traverse i from 0 to exactly n-3
        //time complexity now os 0.02 sec.
        //This method is more better than hashing method.
        sort(A,A+n);
        int i,j,k;
        for(i=0;i<=n-3;i++)
        {
            j=i+1;
            k=n-1;
            while(j<k)
            {
            int sum=A[i];
            sum+=A[j];
            sum+=A[k];
                if(sum<X)
                {
                    j++;
                }
                else if(sum>X)
                {
                    k--;
                }
                else
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    /*{
        //✅💯
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[A[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                if(i==j)
                continue;
                int f=X-(A[i]+A[j]);
                if(m.find(f)!=m.end()){
                    if(f!=A[i]&&f!=A[j]){
                        return 1;
                    }
                }
            }
        }
        return 0;
    }*/
    /*{
        //Your Code Here
        //done in first attempt with my own logic in 0.03 sec.
        // a very little optimization can be done i.e we can traverse i from 0 to exactly n-3
        //and will take j always i+1 ahead and remove those continue statements 
        //time complexity now os 0.02 sec.
        //coding minute explained it to me.
        sort(A,A+n);
        int i,j,k;
        for(i=0;i<=n-3;i++)
        {
            j=i+1;
            k=n-1;
            while(j<k)
            {
            int sum=A[i];
            sum+=A[j];
            sum+=A[k];
                if(sum<X)
                {
                    j++;
                }
                else if(sum>X)
                {
                    k--;
                }
                else
                {
                    return 1;
                }
            }
        }
        return 0;
    }*/
    /*if asked for give those triplets in order than
    simply make the sol like this 
    vector<vector<int>>v;
    sort(A,A+n);
    int i,j,k;
    for(i=0;i<=n-3;i++)
        {
            j=i+1;
            k=n-1;
            while(j<k)
            {
            int sum=A[i];
            sum+=A[j];
            sum+=A[k];
                if(sum<c)
                {
                    j++;
                }
                else if(sum>c)
                {
                    k--;
                }
                else
                {
                    v.push_back({A[i],A[j],A[k]});
                    j++;
                    k--;
                }
            }
        }
        return v;
    */

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends
