//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int>l;
    priority_queue<int,vector<int>,greater<int>>s;
     //Function to balance heaps.
    void balanceHeaps(int x)
    {
        if(l.size()==0&&s.size()==0){
        l.push(x);
        return;
        }
        if(l.size()>s.size()){
            if(l.top()>x){
                s.push(l.top());
                l.pop();
                l.push(x);
            }
            else
            s.push(x);
        }
        else{
            if(x<=l.top())
            l.push(x);
            else{
                s.push(x);
                l.push(s.top());
                s.pop();
            }
        }
    }
    void insertHeap(int &x)
    {
        balanceHeaps(x);
    }
    
    //Function to return Median.
    double getMedian()
    {
        //✅💯🤝
        if(l.size()>s.size())
        return l.top();
        return (l.top()+s.top())/2.0;
    }
};


//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends