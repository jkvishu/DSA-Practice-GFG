//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
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
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* rev(Node* hd){
        Node* st=hd;
        Node* p=NULL;
        while(st!=NULL){
            Node* temp=st->next;
            st->next=p;
            p=st;
            st=temp;
        }
        return p;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        // 🤝👀✅
        Node* pt=new Node(-1);
        Node* k=pt;
        int cal=0;
        first=rev(first);
        second=rev(second);
        while(first!=NULL||second!=NULL||cal){
            int sum=0;
            if(first){
                sum+=first->data;
                first=first->next;
            }
            if(second){
                sum+=second->data;
                second=second->next;
            }
            sum+=cal;
            cal=sum/10;
            Node* temp=new Node(sum%10);
            k->next=temp;
            k=k->next;
        }
        pt=pt->next;
        pt=rev(pt);
        return pt;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends