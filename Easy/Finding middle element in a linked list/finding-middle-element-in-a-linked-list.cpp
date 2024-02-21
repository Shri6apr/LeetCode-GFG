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
/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        if (head == nullptr) return -1; // Empty list
        
        Node* node1 = head;
        int count = 0;
        
        // Count the number of nodes in the list
        while (node1 != nullptr) {
            count++;
            node1 = node1->next;
        }
        
        // Calculate the index of the middle node
        int middleIndex = count / 2 + 1;
        
        // Traverse to the middle node
        Node* node2 = head;
        for (int i = 1; i < middleIndex; ++i) {
            if (node2 == nullptr) return -1; // List is shorter than expected
            node2 = node2->next;
        }
        
        // Return the data of the middle node
        return node2->data;
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
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}

// } Driver Code Ends