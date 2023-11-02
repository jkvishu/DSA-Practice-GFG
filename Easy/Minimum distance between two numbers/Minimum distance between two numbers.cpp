class Solution{
  public:
    int minDist(int a[], int n, int x, int y) 
    /*
    //old solution
    // ✅💯😏
        int i=0,l=0,m=0,f1=0,f2=0,ans=INT_MAX;
        while(i<n){
            if(arr[i]==x){
                l=i;
                f1=1;
            }
            if(arr[i]==y){
                m=i;
                f2=1;
            }
            if(f1&&f2){
                ans=min(ans,abs(l-m));
            }
            i++;
        }
        if(ans==INT_MAX)
        return -1;
        return ans;
    */
    {
        // code here
        // POTD
        // ✅😏💯
        int ans=INT_MAX,l=-1,m=-1,i;
        for(i=0;i<n;i++){
            if(a[i]==x){
                l=i;
                break;
            }
        }
        
        
        
        
        for(i=0;i<n;i++){
        if(a[i]==y){
                m=i;
                break;
            }
        }
        if(l!=-1&&m!=-1){
            for(i=0;i<n;i++){
                if(a[i]==x){
                    ans=min(ans,abs(i-m));
                    l=i;
                }
                else if(a[i]==y){
                    ans=min(ans,abs(i-l));
                    m=i;
                }
            }
            return ans;
        }
        else
        return -1;
    }
    
};