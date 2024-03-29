//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
// Function to Build Tree
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
    Node* root = newNode(stoi(ip[0]));
        
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
            currNode->left = newNode(stoi(currVal));
                
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
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

vector<int> Kdistance(struct Node *root, int k);

int main()
{

    int t;
	scanf("%d ",&t);
    while(t--)
    {
        int k;
		scanf("%d ",&k);
        string s;
		getline(cin,s);
        Node* root = buildTree(s);
        vector<int> vec = Kdistance(root, k);
        for(int i = 0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    return 1;
}
// } Driver Code Ends


/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// function should print the nodes at k distance from root
void find(vector<int>&ans,Node* root,int k){
    if(root==NULL)
    return;
    if(k==0){
        ans.push_back(root->data);
    }
    else{
        find(ans,root->left,k-1);
        find(ans,root->right,k-1);
    }
}
vector<int> Kdistance(struct Node *root, int k)
/*{
  // Your code here
  // ✅💯😏
  // Iterative solution by Jood Vishu Tyagi. 😂
  // Faster than the recursive one
  // Time taken 0.09 sec.
  if(k==0)
  return {root->data};
  vector<int>ans;
  int c=0;
  queue<Node*>q;
  q.push(root);
  while(!q.empty()){
      int i=0;
      int n=q.size();
      if(c+1==k){
          while(i<n){
              root=q.front();
              q.pop();
              if(root->left!=NULL)
              ans.push_back(root->left->data);
              if(root->right!=NULL)
              ans.push_back(root->right->data);
              i++;
          }
          break;
      }
      while(i<n){
          root=q.front();
          q.pop();
          if(root->left!=NULL)
          q.push(root->left);
          if(root->right!=NULL)
          q.push(root->right);
          i++;
      }
      c++;
  }
  return ans;
}*/
{
    //Let's see The recursive approach
    //✅🤝💯
    //Time taken 0.15 sec.
    vector<int>ans;
    find(ans,root,k);
    return ans;
}
