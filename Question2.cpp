//IN-PLACE MANNER
#include <bits/stdc++.h>
using namespace std;
// Function to sort an array using
// insertion sort
void insertionSort(int arr[], int n)
{
 int i, key, j;
 for (i = 1; i < n; i++)
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
 j = j - 1;
 }
 arr[j + 1] = key;
 }
}
// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
 int i;
 for (i = 0; i < n; i++)
 cout << arr[i] << " ";
 cout << endl;
}
int main()
{
 int arr[] = {23,43,45,76,98};
 int N = sizeof(arr) / sizeof(arr[0]);
 insertionSort(arr, N);
 printArray(arr, N);
 return 0;



 int arr[50], tot, i, j, k, elem, index;
 cout<<"Enter the Size for Array: ";
 cin>>tot;
 cout<<"Enter "<<tot<<" Array Elements: ";
 for(i=0; i<tot; i++)
 cin>>arr[i];
 for(i=1; i<tot; i++)
 {
 elem = arr[i];
 if(elem<arr[i-1])
 {
 for(j=0; j<=i; j++)
 {
 if(elem<arr[j])
{
 index = j;
for(k=i; k>j; k--)
 arr[k] = arr[k-1];
 break;
 }
 }
 }
 else
 continue;
 arr[index] = elem;
 }
 cout<<"\nThe New Array (Sorted Array):\n";
 for(i=0; i<tot; i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 return 0;
}
