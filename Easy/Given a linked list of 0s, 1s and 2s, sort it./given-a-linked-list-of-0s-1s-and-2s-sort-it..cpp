//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        // Add code here
        // POTD 💯😏✅
        Node* s1=NULL;
        Node* b1=NULL;
        Node* s2=NULL;
        Node* b2=NULL;
        Node* s3=NULL;
        Node* b3=NULL;
        while(head){
            if(head->data==0)
            {
                if(s1==NULL){
                    s1=head;
                    b1=head;
                }
                else{
                    b1->next=head;
                    b1=b1->next;
                }
            }
            else if(head->data==1){
                 if(s2==NULL){
                    s2=head;
                    b2=head;
                }
                else{
                    b2->next=head;
                    b2=b2->next;
                }
            }
            else{
                 if(s3==NULL){
                    s3=head;
                    b3=head;
                }
                else{
                    b3->next=head;
                    b3=b3->next;
                }
            }
            head=head->next;
        }
        if(b1!=NULL){
        b1->next=s2;
        }
        else{
            s1=s2;
        }
        if(b2!=NULL)
        b2->next=s3;
        else{
            if(b1==NULL&&b2==NULL)
            s1=s3;
            else
            b1->next=s3;
        }
        if(b3!=NULL)
        b3->next=NULL;
        return s1;
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends