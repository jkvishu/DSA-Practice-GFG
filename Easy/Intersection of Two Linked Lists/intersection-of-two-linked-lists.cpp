//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}


// } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        // 😏✅💯
        unordered_map<int,int>m;
        Node* st=head1;
        while(st!=NULL){
            int x=st->data;
            m[x]++;
            st=st->next;
        }
        st=head2;
        while(st!=NULL){
            int x=st->data;
            m[x]++;
            st=st->next;
        }
        st=head1;
        Node* ans=NULL;
        Node* pt=NULL;
        while(st!=NULL){
            int x=st->data;
            if(m[x]>1){
            if(ans==NULL){
                ans=new Node(x);
                pt=ans;
                pt->next=NULL;
            }
            else{
                pt->next=new Node(x);
                pt=pt->next;
                pt->next=NULL;
            }
            }
            st=st->next;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends