#include <iostream>
using namespace std;

void insertArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % 50) + 1;
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void bubble(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}
int main()
{

    int arr[50];
    insertArray(arr, 50);
    display(arr, 50);
    bubble(arr, 50);
    cout << endl;
    display(arr, 50);

    return 0;
}