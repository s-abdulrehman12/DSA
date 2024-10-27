#include <iostream>
using namespace std;
int main()
{
    int array[5] = {11, 43, 1, 9, 7};
    // insertion sort
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (array[j] < array[j - 1])
            {
                swap(array[j], array[j - 1]);
            }
            else
            {
                break;
            }
        }
    }
    cout << "Sorted array is " << endl;
    for (int k = 0; k < 5; k++)
    {
        cout << array[k] << " ";
    }
}