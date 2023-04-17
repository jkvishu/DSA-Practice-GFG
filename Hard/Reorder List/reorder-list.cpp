//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
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



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
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

class Solution{ 
public:
    Node *reverseL(Node *head){
        Node *curr=head,*prev=NULL;
        while(curr!=NULL){
            Node *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    
    void reorderList(Node* head) {
        // Your code here
        //❌👀©
        if(head==NULL || head->next==NULL)return;
        
        //new reversed LL
        Node *ptr=head,*curr3=new Node(-1);
        Node *temp=curr3;
        while(ptr!=NULL){
            temp->next=new Node(ptr->data);
            ptr=ptr->next;
            temp=temp->next;
        }
        curr3=curr3->next;
        Node *rev=reverseL(curr3);
        
        ptr=head; 
        int cnt=0;
        while(ptr!=NULL){
            cnt++;
            ptr=ptr->next;
        }
        ptr=head;
        Node *ans=new Node(-1);
        Node *curr=ans;
        int i=0;
        while(i!=cnt){
            if(i%2==0){
                curr->next=new Node(ptr->data);
                ptr=ptr->next;
            }
            else{
                curr->next=new Node(rev->data);
                rev=rev->next;
            }
            curr=curr->next;
            i++;
        }
        curr->next=NULL;
        ans=ans->next;
        
        while(ans!=NULL){
            swap(head->data,ans->data);
            ans=ans->next;
            head=head->next;
        }
    }
};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends