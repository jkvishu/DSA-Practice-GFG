//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
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


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void find(Node* root,int &sum,int cal){
        if(root==NULL)
        return;
        else{
            cal+=root->data;
            if(root->left==NULL&&root->right==NULL){
                sum=min(sum,cal);
                return;
            }
            find(root->left,sum,cal);
            find(root->right,sum,cal);
        }
    }
    int maxDifferenceBST(Node *root,int target){
        // Code here
        // ✅💯😏
        //POTD Done on my OWn
        int sum1=0;
        int f=0;
        while(root!=NULL){
            if(target<root->data){
                sum1+=root->data;
                root=root->left;
            }
            else if(target>root->data){
                sum1+=root->data;
                root=root->right;
            }
            else{
                f=1;
                break;
            }
        }
        if(f==0)
        return -1;
        int lsum=INT_MAX;
        if(root->left==NULL)
        lsum=0;
        else
        find(root->left,lsum,0);
        int rsum=INT_MAX;
        if(root->right==NULL)
        rsum=0;
        else
        find(root->right,rsum,0);
        if(lsum==0&&rsum==0)
        return sum1;
        if(lsum>0&&rsum==0)
        return sum1-lsum;
        if(rsum>0&&lsum==0)
        return sum1-rsum;
        return max(sum1-lsum,sum1-rsum);
    }
};

//{ Driver Code Starts.

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

        int target;
        cin >> target;
        Solution ob;
        cout << ob.maxDifferenceBST(root, target);
        cout << endl;
    }
}
// } Driver Code Ends