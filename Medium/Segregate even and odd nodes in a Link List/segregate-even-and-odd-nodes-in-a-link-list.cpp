//{ Driver Code Starts
//Initial template for C++

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
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

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
    Node* divide(int N, Node *head){
        // code here
        // ✅💯😏
        Node* st=head;
        Node* evn=NULL;
        Node* prv=head;
        Node* he1=NULL;
        if(st->data%2==0){
        while(st!=NULL&&st->data%2==0){
            evn=st;
            st=st->next;
        }
        he1=head;
        head=st;
        }
        while(st!=NULL){
            if(st->data%2==0){
                if(he1==NULL){
                    he1=st;
                }
                prv->next=st->next;
                st->next=NULL;
                if(evn==NULL)
                evn=st;
                else{
                evn->next=st;
                evn=evn->next;
                }
                st=prv;
            }
            prv=st;
            st=st->next;
        }
        if(evn!=NULL){
        evn->next=head;
        return he1;
        }
        return head;
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends