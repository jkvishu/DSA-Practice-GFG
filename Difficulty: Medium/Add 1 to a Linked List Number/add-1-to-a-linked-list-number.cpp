//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

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

class Solution {
  public:
    Node* rev(Node* hd){
        Node* st=hd;
        Node* pt=NULL;
        while(st!=NULL){
            Node* temp=st->next;
            st->next=pt;
            pt=st;
            st=temp;
        }
        return pt;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        // ✅😏💯
        // POTD
        head=rev(head);
        int c=1;
        Node* st=head;
        Node* k;
        while(st!=NULL||c){
            int s=0;
            if(st){
                s+=st->data;
            }
            else{
                Node* temp=new Node(c);
                k->next=temp;
                break;
            }
            s+=c;
            c=s/10;
            st->data=s%10;
            k=st;
            st=st->next;
            if(c==0)
            break;
        }
        head=rev(head);
        return head;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends