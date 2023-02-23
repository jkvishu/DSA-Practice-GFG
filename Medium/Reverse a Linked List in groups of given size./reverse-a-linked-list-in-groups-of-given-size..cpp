//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        // ✅💯😏
        int i=0;
        node* st=head;
        node* c=NULL;
        while(i<k&&st!=NULL){
            node* nt=st->next;
            st->next=c;
            c=st;
            st=nt;
            i++;
        }
        head->next=st;
        node* hh=head;
        head=c;
        if(st==NULL){
        return head;
        }
        i=0;
        c=NULL;
        node* ss=st;
        while(st!=NULL&&i<k){
            node* nt=st->next;
            st->next=c;
            c=st;
            st=nt;
            i++;
            if(i>=k){
                hh->next=c;
                hh=ss;
                ss=st;
                i=0;
                c=NULL;
            }
        }
        if(i<k&&i>0){
            hh->next=c;
                hh=ss;
                ss=st;
                i=0;
        }
        return head;
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends