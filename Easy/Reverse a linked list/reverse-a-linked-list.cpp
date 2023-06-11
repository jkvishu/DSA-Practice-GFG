//{ Driver Code Starts
//Initial Template for C++// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        // New done by me after 4 months
        // ✅💯😏
        if(head->next==NULL)
        return head;
        Node* st=head;
        Node* p=head->next;
        Node* t=NULL;
        while(p!=NULL){
            Node* temp=p->next;
            p->next=st;
            st->next=t;
            t=st;
            st=p;
            p=temp;
        }
        return st;
    }
    /*
    old  version
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        // ✅💯😏
        // Done in first attempt
        if(head->next==NULL)
        return head;
        Node* k=head;
        Node* p=head->next;
        if(p->next==NULL){
            p->next=head;
            head->next=NULL;
            return p;
        }
        Node* st=p->next;
        head->next=NULL;
        while(st!=NULL){
            p->next=k;
            k=p;
            p=st;
            st=st->next;
        }
        p->next=k;
        return p;
    }
    
    */
    
};
    


//{ Driver Code Starts.

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends