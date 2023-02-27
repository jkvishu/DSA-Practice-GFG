//{ Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
        
    bool f=true;
    
    for(int i=0; i<num; i++){
        if((i==K-1) || (i==num - K)){
            if(!((before[K-1] == after[num - K]) && (before[num-K] == after[K-1]))) f=0;
        }
        else{
            if(before[i] != after[i]) f=0;
        }
    }
    
    return f;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}

// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int k)
{
    // Your Code here
    // ✅😏💯
    if(num%2!=0&&((k-1)==(num/2)))
    return head;
    if(k>num||num==1)
    return head;
    if(k==num || k==1){
        Node* st=head;
        Node* kp;
        while(st->next!=NULL){
            kp=st;
            st=st->next;
        }
        kp->next=head;
        st->next=head->next;
        head->next=NULL;
        head=st;
        return head;
    }
    Node* st=head;
    Node* pt=NULL;
    Node* kt=NULL;
    Node* l=NULL;
    int i=1;
    while(st!=NULL){
        if(i==k){
        pt=st;
        break;
        }
        l=st;
        st=st->next;
        i++;
    }
    i=0;
    st=head;
    Node* hp=NULL;
    while(st!=NULL){
        if((num-i)==k)
        {
            kt=st;
            break;
        }
        hp=st;
        st=st->next;
        i++;
    }
    Node* temp=kt->next;
    if(pt!=hp&&kt!=l){
    kt->next=pt->next;
    pt->next=temp;
    l->next=kt;
    hp->next=pt;
    }
    else if(pt!=hp&&kt==l){
        Node* lll=pt->next;
        pt->next=l;
        l->next=lll;
        hp->next=pt;
    }
    else{
        kt->next=pt;
        pt->next=temp;
        l->next=kt;
    }
    return head;
}
