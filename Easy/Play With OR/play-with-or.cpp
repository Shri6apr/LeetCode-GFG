//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


int* game_with_number(int arr[], int n);

int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int *arr2;
        
        arr2 = game_with_number(arr, n);
        for(int i = 0;i < n; i++)
            cout << arr2[i] << " ";
        
        cout << endl;
        
    }

}

// } Driver Code Ends

// int* game_with_number(int arr[], int n);

int* ans(int arr[], int i, int n) {
    // Base condition
    if (i == n - 1)
        return arr;
    arr[i] = arr[i] | arr[i + 1];
    return ans(arr, i + 1, n);
}

int* game_with_number(int arr[], int n) {
    // Perform bitwise OR operation
    ans(arr, 0, n);

    // Returning the modified array
    return arr;
}
