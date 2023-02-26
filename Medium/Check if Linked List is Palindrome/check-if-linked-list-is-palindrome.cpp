//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
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




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* rever_Se(Node* hd){
        Node* st=hd;
        Node* pv=NULL;
        while(st!=NULL){
            Node* temp=st->next;
            st->next=pv;
            pv=st;
            st=temp;
        }
        return pv;
    }
  
    bool isPalindrome(Node *head)
    {
        //Your code here
        //💯🤝😏✅
        Node* slw=head;
        Node* fst=head;
        while(fst->next!=NULL&&fst->next->next!=NULL){
            slw=slw->next;
            fst=fst->next->next;
        }
        Node* rv=rever_Se(slw->next);
        Node* st=head;
        while(rv!=NULL&&st!=NULL){
            if(rv->data!=st->data){
            //to preserve the orignal linked list i am doing this 
            //Nice job vishu boi
            rever_Se(slw->next);
            return 0;
            }
            rv=rv->next;
            st=st->next;
        }
        //to preserve the orignal linked list i am doing this 
        //Nice job vishu boi
        rever_Se(slw->next);
        return 1;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends
