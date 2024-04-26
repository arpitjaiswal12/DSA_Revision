#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[6] = {45, 2, 23, 76, 11, 33};
    int min, pos;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i; j < n-1; j++)
        {

            if (arr[j + 1] < arr[min])
            {
                min = j+1;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}