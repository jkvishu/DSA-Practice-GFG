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
    //Function to add two numbers represented by linked list.
    struct Node* rev(struct Node* head){
        Node* st=NULL;
        while(head){
            Node* temp=NULL;
            if(head->next!=NULL)
            temp=head->next;
            head->next=st;
            st=head;
            head=temp;
        }
        return st;
    }
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
        // POTD
        // ✅😏💯
        while(num1&&num1->data==0)
        num1=num1->next;
        while(num2&&num2->data==0)
        num2=num2->next;
        if(num1==NULL&&num2==NULL)
        {
            Node* ans=new Node(0);
            return ans;
        }
        num1=rev(num1);
        num2=rev(num2);
        Node* ans=new Node(-1);
        Node* st=ans;
        int r=0;
        while(num1&&num2){
            int x=num1->data+num2->data+r;
            r=x/10;
            x=x%10;
            st->next=new Node(x);
            st=st->next;
            num1=num1->next;
            num2=num2->next;
        }
        while(num1){
            int x=num1->data+r;
            r=x/10;
            x=x%10;
            st->next=new Node(x);
            st=st->next;
            num1=num1->next;
        }
        while(num2){
            int x=num2->data+r;
            r=x/10;
            x=x%10;
            st->next=new Node(x);
            st=st->next;
            num2=num2->next;
        }
        if(r!=0)
        st->next=new Node(r);
        ans=ans->next;
        ans=rev(ans);
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
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends