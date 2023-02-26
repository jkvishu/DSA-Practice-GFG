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

struct Node * mergeResult(struct Node *node1,struct Node *node2);

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

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

        struct Node* result = mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
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
struct Node * rev(Node *head1){
        Node* st=head1;
        Node* pv=NULL;
        while(st!=NULL){
            Node* temp=st->next;
            st->next=pv;
            pv=st;
            st=temp;
        }
        return pv;
}
struct Node * mergeResult(Node *head1,Node *head2)
{
    //Cout<<"Hi welcome to the profile"
    //Cout<<"Please do star my repo if you like the solutions"
    // your code goes here
    // Done in first attempt with my own logic
    // ✅💯😏
    Node* st=head1;
    Node* k=head2;
    Node* ck=NULL;
    while(st!=NULL&&k!=NULL){
        if(st->data<k->data){
            ck=st;
            st=st->next;
        }
        else{
            Node* temp=k->next;
            k->next=st;
            if(ck==NULL){
                head1=k;
                ck=head1;
            }
            else{
                ck->next=k;
                ck=ck->next;
            }
            k=temp;
        }
    }
    if(k!=NULL&&st==NULL)
    ck->next=k;
    head1=rev(head1);
    return head1;
}