#include<bits/stdc++.h>
using namespace std;

// Function to sort an array using
// insertion sort
void insertionSort(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int n1, n2;
        cin >> n1;
        int arr[100005];
        for(int i = 0; i < n1; i++)
        {
            cin >> arr[i];
        }
        
        cin >> n2;
        
        for(int i = n1; i < n1 + n2; i++)
        {
            cin >> arr[i];
        }
        insertionSort(arr, n1 + n2);
        printArray(arr, n1 + n2);
        
    }
}
