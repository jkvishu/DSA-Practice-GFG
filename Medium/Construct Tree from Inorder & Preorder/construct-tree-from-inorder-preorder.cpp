//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int pind=0;
    Node* find(int in[],int pre[],int i,int n){
        if(i>n)
        return NULL;
        Node* root=new Node(pre[pind++]);
        int idx;
        for(int j=i;j<=n;j++){
            if(in[j]==root->data){
                idx=j;
            break;
            }
        }
        root->left=find(in,pre,i,idx-1);
        root->right=find(in,pre,idx+1,n);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        // 🤝❌👀
        Node* root=find(in,pre,0,n-1);
        return root;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends