//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/

class Solution
{
    public:
    struct Node * rev(Node* head){
        Node* st=head;
        Node* pv=NULL;
        while(st!=NULL){
            Node* temp=st->next;
            st->next=pv;
            pv=st;
            st=temp;
        }
        return pv;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        // POTD
        // ✅😏💯
        if(node1==NULL){
            node2=rev(node2);
            return node2;
        }
        if(node2==NULL){
            node1=rev(node1);
        return node1;
        }
        if(node1->data>node2->data){
            Node* temp=node1;
            node1=node2;
            node2=temp;
        }
        Node* head=node1;
        Node* pv=NULL;
        while(node1&&node2){
            if(node1->data<=node2->data){
                pv=node1;
                node1=node1->next;
            }
            else{
                pv->next=node2;
                node2=node2->next;
                pv=pv->next;
                pv->next=node1;
            }
        }
        if(node2!=NULL)
        pv->next=node2;
        head=rev(head);
        return head;
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends