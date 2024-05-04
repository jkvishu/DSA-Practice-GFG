//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}


// } Driver Code Ends
/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution
{
    public:

    //Function to return a tree created from postorder and inoreder traversals.
   Node* solve(int post[],int ps,int pe,int in[],int is,int ie){
    if(is>ie){
        return NULL;
    }
    
        Node* root=new Node(post[pe]);
    
    int val=post[pe];
    
    int i;
    for(i=is;i<=ie;i++){
        if(in[i]==val){
            break;
      
        }
    }
    
    int ils=is,ile=i-1;
    int irs=i+1,ire=ie;
    
    int pls=ps,ple=ile-ils+pls;
    int prs=ple+1,pre=pe-1;
    root->left=solve(post,pls,ple,in,ils,ile);
    root->right=solve(post,prs,pre,in,irs,ire);
    
    
    return root;
}
//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    // ©❌👀
    Node* root=solve(post,0,n-1,in,0,n-1);
    return root;
}
};


//{ Driver Code Starts.

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Solution obj;
        Node* root = obj.buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends