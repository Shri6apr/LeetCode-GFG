//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        //middle element - > top+end /2 -> eg 10+50 = 60/2 == 30
        //base case
        //middle element kaise pta lagega ,jab stack mein sirf n/2 elements rahenge 
        //N/2 ke liye ham = s.size()==SizeOfStack/2 bhi try larte hai 
        int presentsize = sizeOfStack - s.size();
        if(presentsize== sizeOfStack/2){
            s.pop();
            return ;
        }
        //removing se pehle storing the top element 
        int x = s.top();
        s.pop();
        //yha pe call karungi - > reason pop karte rehna hai which is a repetative task]
        
        //repetation== recurison 
        deleteMid(s,sizeOfStack);
        s.push(x);
        
        
    }
    void deletemid(stack<int>& s){
        deleteMid(s,s.size());
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends