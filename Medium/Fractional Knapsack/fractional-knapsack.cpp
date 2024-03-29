//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    static bool cmp(Item s1, Item s2){
        double r1=(double)s1.value/s1.weight;
        double r2=(double)s2.value/s2.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    /*{
        // Your code here
        // BRute force approach but works completely fine
        // Only Double was causing problem
        // ✅💯😏😎
        priority_queue<pair<double,pair<int,int>>>pq;
        for(int i=0;i<n;i++){
            pq.push({(double)arr[i].value/arr[i].weight,{arr[i].value,arr[i].weight}});
        }
        double ans=0.0;
        if(pq.top().second.second<W){
            W=W-pq.top().second.second;
            ans+=pq.top().second.first;
        }
        else{
            ans+=(double)W*pq.top().first;
            W=0;
        }
        pq.pop();
        while(!pq.empty()&&W){
             if(pq.top().second.second<W){
            W=W-pq.top().second.second;
            ans+=pq.top().second.first;
        }
        else{
            ans+=(double)W*pq.top().first;
            W=0;
        }
        pq.pop();
        }
        return ans;
    }*/
    {
        //Let's see an approach  where we are not using any extra space.
        //💯✅😏🤝
        //POTD
        sort(arr,arr+n,cmp);
        double ans=0.0;
        for(int i=0;i<n;i++){
            if(arr[i].weight<=W){
                W=W-arr[i].weight;
                ans+=arr[i].value;
            }
            else{
                ans+=((double)arr[i].value/arr[i].weight)*W;
                break;
            }
        }
        return ans;
    } 
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(6)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends
