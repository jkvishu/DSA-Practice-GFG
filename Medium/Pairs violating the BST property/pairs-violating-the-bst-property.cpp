//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// A Tree node
struct Node {
    int data;
    struct Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return (temp);
}

Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

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
        if (i >= ip.size())
            break;
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
// User function Template for C++

/*// A Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};*/

class Solution {
  public:

    /*You are required to complete below function */
    void merge(vector<int>&temp,int l,int m,int h,int &ans){
        int n1=m-l+1;
        int n2=h-m;
        int a[n1],b[n2];
        for(int i=0;i<n1;i++){
            a[i]=temp[i+l];
        }
        for(int j=0;j<n2;j++){
            b[j]=temp[m+j+1];
        }
        int i=0,j=0,k=l;
        while(i<n1&&j<n2){
            if(a[i]<=b[j]){
                temp[k++]=a[i++];
            }
            else{
                temp[k++]=b[j++];
                ans+=(n1-i);
            }
        }
        while(i<n1){
            temp[k++]=a[i++];
        }
        while(j<n2){
            temp[k++]=b[j++];
        }
    }
    void msort(vector<int>&temp,int l,int h,int &ans){
        if(l<h){
            int m=(l+h)/2;
            msort(temp,l,m,ans);
            msort(temp,m+1,h,ans);
            merge(temp,l,m,h,ans);
        }
    }
    void inorder(vector<int>&temp,Node* root){
        if(root==NULL)
        return;
        inorder(temp,root->left);
        temp.push_back(root->data);
        inorder(temp,root->right);
    }
    int pairsViolatingBST(int n, Node *root) {
        // your code goes here
        // POTD
        // Done on my own with my own logic
        // ✅😏💯
        vector<int>temp;
        inorder(temp,root);
        int ans=0;
        msort(temp,0,temp.size()-1,ans);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    getchar();

    while (t--) {

        int n;
        cin >> n;
        getchar();

        string inp;
        getline(cin, inp);

        struct Node* root = buildTree(inp);

        Solution ob;
        int ans = ob.pairsViolatingBST(n, root);
        cout << ans << endl;
    }

    return 0;
}
// } Driver Code Ends