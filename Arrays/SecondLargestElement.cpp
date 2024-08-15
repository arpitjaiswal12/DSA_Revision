#include <iostream>
using namespace std;

int main()
{
    // Approach 1
    // sort the array and element at index n-2 will give second largest element but element at index n-1!=n-2  TC= (first to sort the array + search the array ) (nlogn + n)

    // Approch 2
    // TC (n+n)=(2n)

    /*int n;
    cout << "enter the size of array ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int firstLargest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > firstLargest)
        {
            firstLargest = arr[i];
        }
    }

    int secondLargest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < firstLargest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    cout << "Second largest element is " << secondLargest;*/

    // Apporach 3
    int n;
    cout << "enter the size of array ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int firstLargest = arr[0];
    int secondLargest = -1; // assuming array to be a non negative
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > firstLargest)
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != firstLargest)
        {
            secondLargest = arr[i];
        }
    }
    cout << "Second largest element is " << secondLargest;

    return 0;
}