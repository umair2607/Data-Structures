#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {3, 5, 7, 1, 9, 2, 4, 8, 1, 2};
    int hold;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j <= 9; j++)
        {
            if (arr[i] > arr[j])
            {
                hold = arr[i];
                arr[i] = arr[j];
                arr[j] = hold;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}