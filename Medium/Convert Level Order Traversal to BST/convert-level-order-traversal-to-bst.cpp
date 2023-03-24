//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};

void preorderTraversal(Node* root)
{
	if (!root)return;
	cout << root->data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right); 
}

Node* constructBst(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        Node *root = constructBst(arr, n);
        preorderTraversal(root);
        cout<<endl;
    }
	return 0; 
}
// } Driver Code Ends


//User function Template for C++


//Function to construct the BST from its given level order traversal.
Node* constructBst(int arr[], int n)
{
    // Code here
    // ✅🤝💯
     queue<pair<Node*,pair<int,int>>>q;
     Node* head=new Node(arr[0]);
     Node* root=head;
     int j=1;
     q.push({root,{INT_MIN,INT_MAX}});
     while(j<n){
         int i=0;
         int m=q.size();
         while(i<m){
             root=q.front().first;
             pair<int,int>p=q.front().second;
             q.pop();
             if(p.first<arr[j]&&arr[j]<root->data){
                 root->left=new Node(arr[j]);
                 q.push({root->left,{p.first,root->data}});
                 j++;
             }
             if(j>=n)
             break;
             if(p.second>=arr[j]&&arr[j]>=root->data){
                 root->right=new Node(arr[j]);
                 q.push({root->right,{root->data,p.second}});
                 j++;
             }
             if(j>=n)
             break;
             i++;
         }
     }
     return head;
}
