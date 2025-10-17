#include <iostream>
using namespace std;

class Stack
{
private:
    int arr[100];
    int top;
    int capacity;

public:
    // Constructor to initialize stack
    Stack(int size)
    {
        if (size > 100)
        {
            cout << "Maximum stack size is 100. Setting capacity to 100." << endl;
            size = 100;
        }
        capacity = size; // ye wo ho gi jo user specify karay ga
        top = -1;
    }

    // Push operation
    int push(int value)
    {
        if(top >= capacity)
        {
            cout << "Stack OverFlow!!" << endl;
            return -1;
        }
        arr[++top] = value;
        cout << value << " has been added at index " << top << endl;
    }

    // Pop operation
    int pop()
    {
        if(top == -1)
        {
            cout << "Stack Underflow!!" << endl;
            return -1;
        }
        arr[top--];
        cout << "Stack after Removal = " << endl;
        traverse();
    }

    void empty()
    {
        if(top == -1)
        {
            cout << "Stack is EMPTY" << endl;
        }
    }

    // Peek operation (get top element)
    int peek()
    {
        if(top == -1)
        {
            cout << "Stack is EMPTY" << endl;
            return -1;
        }
        return top;
    }

    // Traverse operation
    void traverse()
    {
        empty();
        for(int i = 0; i <= top; i++)
        {
            cout << i << " = " << arr[i] << endl;
        }
    }

    // Search operation
    void search(int value)
    {
        empty();
        for(int i = 0; i <= top; i++)
        {
            if(arr[i] == value) {
                cout << value << " is at index = " << i << endl;
                return;
            }
        }
        cout << value << " is NOT present in Stack" << endl;

    }

    // Update operation
    void update(int oldValue, int newValue)
    {
        empty();
        for(int i = 0; i <= top; i++)
        {
            if(arr[i] == oldValue)
            {
                arr[i] = newValue;
                cout << "Stack after Updation = " << endl;
                traverse();
                return;
            }
        }
        cout << oldValue << " is NOT present in Stack" << endl;
    }
};

int main()
{
    int size;
    cout << "Enter the size of the stack (max 100): ";
    cin >> size;

    Stack stack(size);
    int choice, value, oldValue, newValue;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Traverse\n";
        cout << "2. Search\n";
        cout << "3. Push (Insert)\n";
        cout << "4. Pop (Delete)\n";
        cout << "5. Update\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            stack.traverse();
            break;
        case 2:
            cout << "Enter value to search: ";
            cin >> value;
            stack.search(value);
            break;
        case 3:
            cout << "Enter value to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 4:
            stack.pop();
            break;
        case 5:
            cout << "Enter value to update: ";
            cin >> oldValue;
            cout << "Enter new value: ";
            cin >> newValue;
            stack.update(oldValue, newValue);
            break;
        case 6:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }
    while (choice != 6);

    return 0;
}
