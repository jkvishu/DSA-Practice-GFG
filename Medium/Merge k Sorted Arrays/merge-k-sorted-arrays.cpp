//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++


class tetra{
     public:
        int val,ps1,ps2;
        tetra(int v,int a,int b){
            this->val=v;
            this->ps1=a;
            this->ps2=b;
        }
    };
    class cmp{
        public:
        bool operator()(tetra* s1,tetra* s2){
            return s1->val>s2->val;
        }
    };
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    /*{
        //code here
        //✅💯
        //Time taken 0.25sec.
        map<int,int>m;
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                m[arr[i][j]]++;
            }
        }
        auto it=m.begin();
        while(it!=m.end()){
            while(it->second!=0){
                v.push_back(it->first);
                it->second--;
            }
            ++it;
        }
        return v;
    }*/
    {
        //Let's see an optimized solution for the same.
        //Exactly according to the given constraint.
        //✅🤝💯
        //Time taken 0.33sec.
        vector<int>ans;
        priority_queue<tetra*,vector<tetra*>,cmp>pq;
        for(int i=0;i<K;i++){
            tetra* t=new tetra(arr[i][0],i,0);
            pq.push(t);
        }
        while(!pq.empty()){
            tetra* cr=pq.top();
            pq.pop();
            ans.push_back(cr->val);
            int ap=cr->ps1,vp=cr->ps2;
            if(vp+1<arr[ap].size()){
                tetra* t=new tetra(arr[ap][vp+1],ap,vp+1);
                pq.push(t);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends
