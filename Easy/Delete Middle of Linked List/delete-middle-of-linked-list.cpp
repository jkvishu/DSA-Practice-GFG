//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

/* Function to get the middle of the linked list*/
struct Node *deleteMid(struct Node *head);
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		head = deleteMid(head);
		printList(head); 
	}
	return 0; 
} 



// } Driver Code Ends


/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    // Your Code Here
    // 💯✅😏
    Node* st=head;
    int x=0;
    while(st!=NULL){
        x++;
        st=st->next;
    }
    x=x/2;
    if(x==0)
    return st;
    int c=0;
    st=head;
    Node* tp=head;
    while(st!=NULL){
        if(c==x){
            if(st->next!=NULL){
                tp->next=st->next;
                delete st;
                return head;
            }
            else{
                tp->next=NULL;
                delete st;
                return head;
            }
        }
        tp=st;
        st=st->next;
        c++;
    }
}