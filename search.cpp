#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int size;
    cout << "Enter the Size of Array :";
    cin >> size;
    int array[size];
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i << " Element :";
        cin >> array[i];
    }
    int key;
    cout << "Enter the Target :";
    cin >> key;
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == key)
        {
            cout << "You found the target " << key << " at index :" << mid;
            found = true;
            break;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (found == false)
    {
        cout << "Target Does Not found :";
    }
}