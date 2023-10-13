//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends
// Function to search a node in BST.
class Solution{

void find(Node* root,int x,int &k,int &ans){
    if(root==NULL)
    return;
    find(root->left,x,k,ans);
    if(root->data<=x){
    ans=max(ans,root->data);
    }
    k=min(root->data,k);
    find(root->right,x,k,ans);
}
public:
    int floor(Node* root, int x) {
        // Code here
        // POTD
        int k=INT_MAX;
        int ans=INT_MIN;
        find(root,x,k,ans);
        if(x<k)
        return -1;
        return ans;
    }
};

//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    }
}

// } Driver Code Ends