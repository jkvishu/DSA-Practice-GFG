//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
/* Function to print linked list */


void append(struct Node** headRef, struct Node** tailRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    *tailRef = *headRef;
	    return;
	}
	
	(*tailRef) -> next = new_node;
	*tailRef = (*tailRef) -> next;
}

// A utility function to print a linked list
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}



// } Driver Code Ends

/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

class Solution
{
    public:
    // your task is to complete this function
    Node* rev(Node* head){
        Node* temp=NULL;
        Node* ans=head;
        while(head){
            Node* st=head->next;
            head->next=temp;
            temp=head;
            head=st;
        }
        return temp;
    }
    Node* MergeSortedLists(Node* head1, Node* head2) 
{ 
    Node* result = NULL; 
      
    if (head1 == NULL) 
        return(head2); 
    else if (head2 == NULL) 
        return(head1); 
      
    if (head1->data <= head2->data) 
    { 
        result = head1; 
        result->next = MergeSortedLists(head1->next, head2); 
    } 
    else
    { 
        result = head2; 
        result->next = MergeSortedLists(head1, head2->next); 
    } 
    return(result); 
} 
    void sort(Node **head)
    {
         // Code here
         // POTD
         // ✅😏💯
         Node* st=*head;
         if(st->next==NULL)
         return;
         Node* ans=st;
         Node* tempp=NULL;
         Node* tempp2=NULL;
         Node* ans1=NULL;
         if(st->next!=NULL){
             ans1=st->next;
             Node* temp=ans1;
             while(temp||st){
                 if(temp!=NULL&&temp->next!=NULL){
                     st->next=temp->next;
                 }
                 else{
                     if(st!=NULL)
                     st->next=NULL;
                 }
                 if(st!=NULL)
                 tempp=st;
                 if(st!=NULL)
                 st=st->next;
                 if(st!=NULL&&st->next!=NULL){
                     temp->next=st->next;
                 }
                 else{
                     if(temp!=NULL)
                     temp->next=NULL;
                 }
                 if(temp!=NULL)
                 tempp2=temp;
                 if(temp!=NULL)
                 temp=temp->next;
             }
         }
         ans1=rev(ans1);
         *head=MergeSortedLists(ans,ans1);
    }
};

//{ Driver Code Starts.
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    struct Node* head = NULL;
	    struct Node* tail = NULL;
	    int n, k;
	    cin>>n;
	    for(int i=0; i<n ;i++){
	        cin>>k;
	        append(&head, &tail, k);
	    }
	    Solution ob;
	    ob.sort(&head);
	    printList(head);
	}
	return 0;
}

// } Driver Code Ends