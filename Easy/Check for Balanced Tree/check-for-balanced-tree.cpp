//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
     /*
    int find(Node* root){
        if(root==NULL)
        return 0;
        else{
            return max(find(root->left),find(root->right))+1;
        }
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        // Brute force approach but works fine
        // ✅💯😏
        // Time taken 0.51 sec.
        if(root->left==NULL&&root->right==NULL)
        return 1;
        queue<Node*>q;
        q.push(root);
        int h1=0;
        int h2=0;
        while(!q.empty()){
            int i=0;
            int n=q.size();
            while(i<n){
                root=q.front();
                q.pop();
                if(root->left!=NULL){
                    h1=find(root->left);
                    q.push(root->left);
                }
                if(root->right!=NULL){
                    h2=find(root->right);
                    q.push(root->right);
                }
                i++;
                if(abs(h1-h2)>1)
                return 0;
                h1=0;
                h2=0;
            }
        }
        return 1;
    }
    */
    int check(Node* root){
        if(root==NULL)
        return 0;
        int lh=check(root->left);
        if(lh==-1)
        return -1;
        int rh=check(root->right);
        if(rh==-1)
        return -1;
        if(abs(lh-rh)>1)
        return -1;
        else
        return max(lh,rh)+1;
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        // Let's see the optimized recursive approach
        // ✅🤝💯
        // Time taken 0.39 sec.
        int h=check(root);
        if(h==-1)
        return 0;
        return 1;
    }
};


//{ Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.isBalanced(root) << endl;
    }
    return 0;
}

// } Driver Code Ends
