//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print nodes in a given linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
  
    Node* merge(Node* arr1,Node* arr2){
        if(arr1==NULL){
            return arr2;
        }
        if(arr2==NULL){
            return arr1;
        }
        if(arr1->data < arr2->data){
            arr1->next = merge(arr1->next,arr2);
            // arr1->next->next = merge()
            return arr1;
        }else{
            arr2->next = merge(arr1,arr2->next);
            return arr2;
        
        }
    }
    Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        if(arr.size()==0) return NULL;

        while(arr.size()>1){
            arr.push_back(merge(arr[0],arr[1]));
            arr.erase(arr.begin());
            arr.erase(arr.begin());
            
        }
        return arr[0];
    }
};


//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        vector<Node*> v(n);

        for (int i = 0; i < n; i++) {
            string line;
            getline(cin, line);
            stringstream ss(line);

            Node* head = new Node(0);
            Node* temp = head;
            int x;
            while (ss >> x) {
                Node* newNode = new Node(x);
                temp->next = newNode;
                temp = temp->next;
            }
            v[i] = head->next;
        }

        Solution ob;
        Node* head = ob.mergeKLists(v);
        printList(head);
    }

    return 0;
}

// } Driver Code Ends