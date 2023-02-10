//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int findK(int [MAX][MAX],int ,int ,int );
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends


/*You are required to complete this method*/
int findK(int matrix[MAX][MAX], int r, int c, int s)
{
//Your code here
//Solved in 4 min and first attempt
//hhahahha easy boi
//✅💯😏
int i=0,j=0,k=0,d=0;
         if(s>r*c)
         return -1;
         if(s==1)
         return matrix[0][0];
       while(1)
       {
           while(j<c&&matrix[i][j]!=-1)
           {
               if(d==s-1)
               return matrix[i][j];
               k=1;
               matrix[i][j]=-1;
               j++;
               d++;
           }
           j--;
           i++;
           while(i<r&&matrix[i][j]!=-1)
           {
               if(d==s-1)
               return matrix[i][j];
               k=1;
               matrix[i][j]=-1;
               i++;
               d++;
           }
           i--;
           j--;
           while(j>=0&&matrix[i][j]!=-1)
           {
               if(d==s-1)
               return matrix[i][j];
               k=1;
               matrix[i][j]=-1;
               j--;
               d++;
           }
           j++;
           i--;
           while(i>=0&&matrix[i][j]!=-1)
           {
               if(d==s-1)
               return matrix[i][j];
               k=1;
               matrix[i][j]=-1;
               i--;
               d++;
           }
           i++;
           j++;
           if(k==0)
           {
               break;
           }
           k=0;

}
}

