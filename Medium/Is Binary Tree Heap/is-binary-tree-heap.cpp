//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User Function template for C++

// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    bool isHeap(struct Node* tree) {
        // code here
        // ✅💯😏😎
        int f1=0,f2=0;
        vector<int>ans;
        queue<Node*>q;
        q.push(tree);
        ans.push_back(tree->data);
        while(!q.empty()){
            int i=0;
            int n=q.size();
            while(i<n){
                tree=q.front();
                q.pop();
                if(tree->left!=NULL){
                    f1=1;
                    q.push(tree->left);
                    ans.push_back(tree->left->data);
                }
                else
                ans.push_back(-1);
                if(tree->right!=NULL){
                    f2=1;
                    q.push(tree->right);
                    ans.push_back(tree->right->data);
                }
                else
                ans.push_back(-1);
                if(f1==0&&f2==1)
                return 0;
                f1=f2=0;
                i++;
            }
        }
        int i=ans.size()-1;
        while(i>0&&ans[i]==-1){
            ans.pop_back();
            i--;
        }
        while((i-1)/2>=0&&i>0){
            if(ans[i]==-1)
            return 0;
            if(ans[(i-1)/2]<=ans[i])
            return 0;
            i--;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        if (ob.isHeap(root))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
// } Driver Code Ends