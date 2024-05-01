//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head) {
    if (head == NULL)
        return;
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void append(struct Node **headRef, char data) {
    struct Node *new_node = new Node(data);
    struct Node *last = *headRef;

    if (*headRef == NULL) {
        *headRef = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}


// } Driver Code Ends
/*
Structure of the node of the linked list is as
struct Node
{
    char data;
    struct Node *next;

    Node(char x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    struct Node* arrangeCV(Node* head) {
        // Code here
        // POTD
        // ✅😏💯
        Node* pt=NULL;
        Node* ans=NULL;
        Node* temp=NULL;
        while(head){
            if(head->data=='a'||head->data=='e'||head->data=='i'||head->data=='o'||head->data=='u'){
                if(ans==NULL){
                    ans=head;
                    pt=head;
                }
                else{
                    pt=head;
                }
            }
            else{
                break;
            }
            head=head->next;
        }
        Node* st=head;
        while(st){
            temp=st;
            st=st->next;
            if(st!=NULL){
            if(st->data=='a'||st->data=='e'||st->data=='i'||st->data=='o'||st->data=='u'){
                temp->next=st->next;
                if(pt!=NULL){
                    pt->next=st;
                    pt=pt->next;
                    pt->next=head;
                }
                else{
                    ans=st;
                    pt=st;
                }
                st=temp;
            }
            }
        }
        if(pt!=NULL){
        pt->next=head;
        return ans;
        }
        return head;
    }
};


//{ Driver Code Starts.

// task is to complete this function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        char tmp;
        struct Node *head = NULL;
        cin >> n;
        while (n--) {
            cin >> tmp;
            append(&head, tmp);
        }
        Solution obj;
        head = obj.arrangeCV(head);
        printlist(head);
    }
    return 0;
}

// } Driver Code Ends