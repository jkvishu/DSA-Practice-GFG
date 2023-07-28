//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

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


// } Driver Code Ends
//Function to find the lowest common ancestor in a BST.
class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
            // code here
            // POTD ✅😏💯
            Node* st=root;
            vector<int>v1;
            vector<int>v2;
            unordered_map<int,Node*>s1;
            unordered_map<int,Node*>s2;
            while(st){
                v1.push_back(st->data);
                s1.insert({st->data,st});
                if(st->data<n1){
                    st=st->right;
                }
                else if(st->data>n1){
                    st=st->left;
                }
                else
                break;
            }
            st=root;
            while(st){
                v2.push_back(st->data);
                s2.insert({st->data,st});
                if(st->data<n2){
                    st=st->right;
                }
                else if(st->data>n2){
                    st=st->left;
                }
                else
                break;
            }
            int i=v1.size()-1;
            int j=v2.size()-1;
            while(i>=0&&j>=0){
                if(s2.find(v1[i])!=s2.end())
                return s2[v1[i]];
                else if(s1.find(v2[j])!=s1.end())
                return s1[v2[j]];
                i--;
                j--;
            }
            return root;
        }

};


//{ Driver Code Starts.

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


int main()
{

    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
        int l , h;
		getline(cin,s);
		scanf("%d ",&l);
		scanf("%d ",&h);
        Node* root = buildTree(s);
        Solution sol;
        int ans = sol.LCA(root, l, h)->data;
        cout<<ans<<endl;
    }
    return 1;
}
// } Driver Code Ends