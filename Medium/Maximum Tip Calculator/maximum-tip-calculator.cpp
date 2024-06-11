//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

struct pig
{
    int diff;
    int pos;
};
class Solution{
  public:
  static bool cmp(struct pig p1,struct pig p2)
  {
      return (p1.diff>p2.diff);
  }
    long long maxTip(int n, int x, int y,vector<int>&a, vector<int>&b)
    {
        // code here
        // POTD
        // ©🫠
        struct pig p[n];
        int i;
        long long ans=0;
        for(i=0;i<n;i++)
        {
            p[i].diff=abs(a[i]-b[i]);
            p[i].pos=i;
        }
        sort(p,p+n,cmp);
        for(i=0;i<n;i++)
        {
            if(a[p[i].pos]>b[p[i].pos])
            {
                if(x>0)
                {
                    ans+=a[p[i].pos];
                    x--;
                }
                else
                {
                    ans+=b[p[i].pos];
                    y--;
                }
            }
            else
            {
                if(y>0)
                {
                    ans+=b[p[i].pos];
                    y--; 
                }
                else
                {
                    ans+=a[p[i].pos];
                    x--;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}

// } Driver Code Ends