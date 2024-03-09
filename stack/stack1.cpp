#include <iostream>
using namespace std;
int top = -1;
int arr[5];
void insert()
{

    while (top <= 5)
    {
        top++;
        if (top >= 5)
        {
            cout << "stack is full" << endl;
            break;
        }
        else
        {
            cout << "enter value for stack:";
            cin >> arr[top];
        }
    }
    cout<<endl;
}
void display()
{

    cout << "-> display time! <-" << endl;
    for (int i = 0; i < top; i++)
    {
        cout << "stack element of " << i << " is:" << arr[i] << endl;
        ;
    }
    cout<<endl;
}
void delete_end()
{
    int dlt;
    cout << "how many element  you want delete: ";
    cin >> dlt;
    for (int i = 1; i <= dlt; i++)
    {
        cout << "delete  element of top is:" << top << endl;
        top--;
    }
    cout<<endl;
}

int main()
{   
    
    insert();
    
    display();
    delete_end();
    display();
    return 0;
}