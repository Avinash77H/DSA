#include <iostream>
using namespace std;
int n;
int count = 1;
int value;

void searching()
{

    cout << "enter size of array:";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % 50) + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "enter value you want search :";
    cin >> value;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            cout << "your searching data " << value << " present in stack" << endl;
            break;
        }
        else
        {
            count++;
        }
    }
    cout << "your searching data located " << count << " number in the stack" << endl;
}
int main()
{
    
    searching();
    return 0;
}