//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    struct Node* st=NULL;
    void doit(Node* ck){
        if(st==NULL||st->data>=ck->data){
            ck->next=st;
            st=ck;
        }
        else{
            Node* temp=st;
            while(temp->next!=NULL&&temp->next->data<ck->data){
                temp=temp->next;
            }
            ck->next=temp->next;
            temp->next=ck;
        }
    }
    Node* insertionSort(struct Node* head)
    {
        // POTD
        // ✅🤝💯😏
        // Insertion sort
        if(head==NULL||head->next==NULL)
        return head;
        if(head->next->next==NULL){
            if(head->data>head->next->data){
                swap(head->data,head->next->data);
                return head;
            }
        }
        Node* cr=head;
        while(cr){
            Node* temp=cr->next;
            doit(cr);
            cr=temp;
        }
        head=st;
        return head;
    }
    /*
    Node* insertionSort(struct Node* head)
    {
        //code here
        //POTD
        //✅😏💯
        //Selection sort on Linked List
        Node* cr=head;
        while(cr){
            Node* temp=cr;
            Node* st=temp->next;
            while(st){
                if(st->data<temp->data)
                temp=st;
                st=st->next;
            }
            swap(temp->data,cr->data);
            cr=cr->next;
        }
        return head;
    }
    */
    
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends