#include <iostream>
using namespace std;
 

void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
 
   
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
   
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        
        heapify(arr, n, largest);
    }
}
 

void heapSort(int arr[], int n)
{
    
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    
    for (int i = n - 1; i >= 0; i--) {
        
        swap(arr[0], arr[i]);
 
        
        heapify(arr, i, 0);
    }
}
 

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
 

int main()
{
    int arr[] = { 78, 51, 42, 89, 10, 21 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before \n";
    printArray(arr, n);
 
    heapSort(arr, n);
 
    cout << "Array after sorted \n";
    printArray(arr, n);
}

Description
Selection Sort Algorithm added.

Linked Issues
Fixes #4

Please assign me in this Pull Request and add the hacktoberfest & hacktoberfest-accepted tags before merging.
Thankyou❤
