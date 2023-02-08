//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
 

class Solution{
    public:
    
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    /*int answer(int a[],int n,int x){
        int l=0,h=n-1,m,ans=-1;
           while(l<=h){
               m=(l+h)/2;
               if(a[m]>x){
                   ans=m;
                   h=h-1;
               }
               else{
                   l=m+1;
               }
           }
           return ans;
    }
    long long countPairs(int X[], int Y[], int M, int N)
    {
       //Your code here
       //❌🥵👌🏻
       //EK DUm SEXy question
       sort(X,X+M);
       sort(Y,Y+N);
       int c1=0,c2=0,c3=0,c4=0;
       for(int i=0;i<N;i++){
           if(Y[i]==1)
           c1++;
           if(Y[i]==2)
           c2++;
           if(Y[i]==3)
           c3++;
           if(Y[i]==4)
           c4++;
       }
       long long int c=0;
       for(int i=0;i<M;i++){
           if(X[i]==1)
           continue;
           else if(X[i]==2){
               int ch=answer(Y,N,2);
               if(ch!=-1){
                   c+=(N-ch);
               }
               c-=c3;
               c-=c4;
               c+=c1;
           }
           else if(X[i]==3){
               int ch=answer(Y,N,X[i]);
               if(ch!=-1){
                   c+=(N-ch);
               }
               c+=c2;
               c+=c1;
           }
           else{
               int ch=answer(Y,N,X[i]);
               if(ch!=-1){
                   c+=(N-ch);
               }
               c+=c1;
           }
       }
       return c;
    }*/
    int count(int x, int Y[], int n, int NoOfY[]) {
        // If x is 1, then the number of pairs is equal to 0 becaue 1 can never be bigger
        if (x == 1) {
            return 0;
        }
        // Find number of elements in Y[] with values greater
        // than x upper_bound() gets address of first greater
        // element in Y[0..n-1]
        int* idx = upper_bound(Y, Y + n, x);
        int ans = (Y + n) - idx;
        // If we have reached here, then x must be greater than
        // 1, increase number of pairs for y=0 and y=1
        ans += NoOfY[1];
        // Decrease number of pairs for x=2 and (y=4 or y=3)
        if (x == 2) {
            ans -= (NoOfY[3] + NoOfY[4]);
        }
        // Increase number of pairs for x=3 and y=2
        if (x == 3) {
            ans += NoOfY[2];
        }
        return ans;
}
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    long long countPairs(int X[], int Y[], int m, int n)
    {
        //❌🥵🥵🥵🥵🥵GFG-C
        int check[5] = { 0 };
        for (int i = 0; i < n; i++)
            if (Y[i] < 5) {
                check[Y[i]]++;
            }
        // Sort Y[] so that i  can do binary search in it
        sort(Y, Y + n);
        long long ans = 0;
        // Now i am Taking every element of X and count pairs with it
        for (int i = 0; i < m; i++) {
            ans += count(X[i], Y, n, check);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}
// } Driver Code Ends