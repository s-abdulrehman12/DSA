#include <iostream>
using namespace std;
int main()
{
    int array[5] = {4, 2, 60, 11, 8};
    // bubble sort is the one in which we conmpare two elements with each other
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array[j] < array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
}