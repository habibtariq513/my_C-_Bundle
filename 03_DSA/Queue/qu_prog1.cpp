
#include <iostream>
using namespace std;

class Queue {
private:
    int arr[100];  // Static array for queue elements with a fixed size
    int front;     // Index of the front element
    int rear;      // Index of the rear element
    int capacity;  // Maximum capacity of the queue

public:
    // Constructor to initialize queue
    Queue(int size) {
        if (size > 100) {
            cout << "Maximum queue size is 100. Setting capacity to 100." << endl;
            size = 100;
        }
        capacity = size;
        front = 0;
        rear = -1;
    }

    // Enqueue operation (insert at the rear)
    void enqueue(int value) {
        if(rear > capacity) {
            cout << "Queue OverFlow!!" << endl;
            return;
        }
        arr[++rear] = value;
        cout << value << " has been inserted at " << rear << endl;
    }

    bool isEmpty() {
        return front > rear;
    }

    // Dequeue operation (remove from the front)
    void dequeue() {
        if(isEmpty()) {
            cout << "Queue is UnderFlow!!" << endl;
            return;
        }
        cout << arr[front++] << " has been deleted" << endl;
        cout << "Queue after Deletion = " << endl;
        traverse();
    }

    // Peek operation (get front element)
    int peek() {
        if(isEmpty()) {
            cout << "Queue is UnderFlow!!" << endl;
            return -1;
        }
        return arr[front];
    }

    // Traverse operation
    void traverse() {
        if(isEmpty()) {
            cout << "Queue is UnderFlow!!" << endl;
            return;
        }
        for(int i = front; i <= rear; i++) {
            cout << "Index = " << i << "  Value = " << arr[i] << endl;
        }
    }

    // Search operation
    void search(int value) {
        if(isEmpty()) {
            cout << "Queue is Empty!!" << endl;
            return;
        }

        for(int i = 0; i <= rear; i++)
        {
            if(arr[i] == value) {
                cout << value << " is at index = " << i << endl;
                return;
            }
        }
        cout << value << " is NOT present in Queue." << endl;
    }

    // Update operation
    void update(int oldValue, int newValue) {

        if(isEmpty()) {
            cout << "Queue is Empty!!" << endl;
            return;
        }

        for(int i = 0; i <= rear; i++)
        {
            if(arr[i] == oldValue)
            {
                arr[i] = newValue;
                cout << "Queue after Updation = " << endl;
                traverse();
                return;
            }
        }
        cout << oldValue << " is NOT present in Queue." << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the queue (max 100): ";
    cin >> size;

    Queue queue(size);
    int choice, value, oldValue, newValue;

    do {
        cout << "\nMenu:\n";
        cout << "1. Traverse\n";
        cout << "2. Search\n";
        cout << "3. Enqueue (Insert)\n";
        cout << "4. Dequeue (Delete)\n";
        cout << "5. Update\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                queue.traverse();
                break;
            case 2:
                cout << "Enter value to search: ";
                cin >> value;
                queue.search(value);
                break;
            case 3:
                cout << "Enter value to enqueue: ";
                cin >> value;
                queue.enqueue(value);
                break;
            case 4:
                queue.dequeue();
                break;
            case 5:
                cout << "Enter value to update: ";
                cin >> oldValue;
                cout << "Enter new value: ";
                cin >> newValue;
                queue.update(oldValue, newValue);
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 6);

    return 0;
}


