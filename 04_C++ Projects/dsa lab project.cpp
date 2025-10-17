#include<iostream>
using namespace std;

class Arrays
{
public:
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(int);
    int size_for_insert = 10;

// Function to traverse and display the array elements
    void traverse()
    {
        for(int i = 0; i<10; i++)
        {
            cout << arr[i] << endl;
        }
    }

// Function to search for a specific element in the array
    void search(int key)
    {
        cin >> key;
        for(int i = 0; i<size; i++)
        {
            if(arr[i] == key)
            {
                cout << arr[i] << endl;
            }
        }
    }


// Function to update the value of an existing element
    void update(int updatedVal)
    {
        for(int i = 0; i<size; i++)
        {
            cout << arr[i] << endl;
        }

        cout << "After Updation = " << endl;
        arr[3] = updatedVal;
        for(int i = 0; i<size; i++)
        {
            cout << arr[i] << endl;
        }
    }

// Function to insert a new element at a specified position
    void insert(int newElement, int pos)
    {

        for(int i = size_for_insert; i>pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos] = newElement;
        size_for_insert++;
        cout << "After Updation :-" << endl;
        for(int i = 0; i<size_for_insert; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

class Ex_Array
{
private:
    int arr[11];   // Array with fixed size
    int size;     // Current number of elements in the array

public:
    int position, NewVal, IndexToRem = -1, key, updatedVal;
    // Constructor to initialize array elements and size
    Ex_Array()
    {
        cout << "Enter 10 values = ";
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];  // Initializing all elements to 0
        }
        size = 10;
    }

    // Function to traverse and display the array elements
    void traverse()
    {
        for(int i = 0; i<size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    // Function to search for a specific element in the array
    void search()
    {
        cout << "Enter value = ";
        cin >> key;
        for(int i = 0; i<size; i++)
        {
            if(arr[i] == key)
            {
                cout << arr[i] << " is at index " << i << endl;
            }
            else cout << key << " not found!" << endl;
        }
    }

// 		Insertion at 1st Index
    void Insert_Index_1()
    {
        position = 1;
        for(int i = size; i>position; i--)
        {
            arr[i] = arr[i-1];
        }

        cout << "Insertion at 1st Index = " << endl;
        arr[position] = NewVal;
        for(int i = 0; i<=size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

// 		Insertion at Specific Index
    void Insert_Index_Spc()
    {
        cout << "Insertion at Last Index = " << endl;
        cout << "Enter index = ";
        cin >> position;

        if(position != size)
        {
            for(int i = size; i>position; i--)
            {
                arr[i] = arr[i - 1];
            }
        }

        arr[position] = NewVal;
        for(int i = 0; i<=size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

// 		Insertion at Last Index
    void Insert_Index_Lst()
    {
        position = size;
        cout << "Insertion at Last Index = " << endl;
        arr[position] = NewVal;
        for(int i = 0; i<=size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    // Function to insert a new element at a specified position
    void insert()
    {
        // Implementation for inserting an element in the array
        cout << "Enter value = ";
        cin >> NewVal;
        Insert_Index_1();
        Insert_Index_Spc();
        Insert_Index_Lst();
    }


// Function to update the value of an existing element
    void update()
    {
        cout << "Enter that You want to Update = ";
        cin >> updatedVal;
        arr[3] = updatedVal;
        cout << "After Updation = " << endl;
        traverse();
    }

    // First Index Deletion
    void Del_Index_1()
    {
        IndexToRem = 1;
        for(int i = IndexToRem; i<size; i++)
        {
            arr[i] = arr[i+1];
        }
        size--;
        cout << "Array after 1st Index Removal" << endl;
        traverse();
        cout << endl;
    }

    // Last Index Deletion
    void Del_Index_Spc()
    {
        cout << "Specify the Index = ";
        cin >> IndexToRem;
        if(IndexToRem == 1) Del_Index_1();
        else if (IndexToRem == size-1) Del_Index_Lst();
        else
        {
            for(int i = IndexToRem; i<size; i++)
            {
                arr[i] = arr[i+1];
            }
            size--;
        }
        traverse();
        cout << endl;
    }

    // Last Index Deletion
    void Del_Index_Lst()
    {
        IndexToRem = size-1;
        cout << "Array after Last Index Removal" << endl;
        for(int i = 0; i<IndexToRem; i++)
        {
            cout << arr[i] << " ";
        }
        size--;
        cout << endl;
    }

    // Function to delete an element from the array
    void remove()
    {
        Del_Index_1();
        Del_Index_Spc();
        Del_Index_Lst();
    }
};

class Node
{
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node* head;

public:
    LinkedList()
    {
        head = NULL;
    }

    // Function to traverse and display the linked list
    void traverse()
    {
        if(head == NULL)
        {
            cout << "Linked-List is EMPTY!" << endl;
            return;
        }
        Node* current = head;
        while(current != NULL)
        {
            cout << current->data;
            if(current->next != NULL) cout << " -> ";
            current = current->next;
        }
        cout << " -> NULL" << endl;
    }

    // Function to search for a specific value
    void search(int value)
    {
        Node* current = head;
        int position = 1;
        bool found = false;

        while(current != NULL)
        {
            if(current->data == value)
            {
                cout << "Value " << value << " found at position " << position << endl;
                found = true;
            }
            current = current->next;
            position++;
        }

        if(!found)
        {
            cout << "Value " << value << " not found in the list" << endl;
        }
    }

    // Function to insert at the end
    void insert(int value)
    {
        Node* newNode = new Node(value);

        if(head == NULL)
        {
            head = newNode;
            return;
        }

        Node* current = head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }

    // Function to update a value
    void update(int oldValue, int newValue)
    {
        Node* current = head;
        bool updated = false;

        while(current != NULL)
        {
            if(current->data == oldValue)
            {
                current->data = newValue;
                updated = true;
            }
            current = current->next;
        }

        if(updated)
        {
            cout << "Value updated successfully" << endl;
        }
        else
        {
            cout << "Value not found for updating" << endl;
        }
    }

    // Function to delete a value
    void remove(int value)
    {
        if(head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }

        // Case 1: Head node needs to be deleted
        if(head->data == value)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Value deleted successfully" << endl;
            return;
        }

        // Case 2: Middle or last node needs to be deleted
        Node* current = head;
        while(current->next != NULL && current->next->data != value)
        {
            current = current->next;
        }

        if(current->next == NULL)
        {
            cout << "Value not found for deletion" << endl;
        }
        else
        {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "Value deleted successfully" << endl;
        }
    }

};

class Ex_LL
{
private:
    Node* head;     // Pointer to the head of the linked list

public:
    // Constructor to initialize an empty linked list
    Ex_LL()
    {
        head = nullptr;
    }

    // Function to traverse and display the linked list
    void traverse()
    {
        if(head == NULL)
        {
            cout << "Linked-List is EMPTY!" << endl;
            return;
        }
        Node* current = head;
        while(current != NULL)
        {
            cout << current->data;
            if(current->next != NULL) cout << " -> ";
            current = current->next;
        }
        cout << " -> NULL" << endl;
    }


    // Function to insert a new value at the beginning of the linked list
    void insertAtFirst(int value)
    {
        Node* newNode = new Node(value);

        if(head == NULL)
        {
            head = newNode;
            return;
        }

        Node* current = head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }

    // Function to insert a new value at a specific position
    void insertAtPosition(int value, int position)
    {
        Node* newNode = new Node(value);

        if (head == nullptr || position <= 0)
        {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        int index = 0;
        while (current != nullptr && index < position - 1)
        {
            current = current->next;
            index++;
        }

        if (current == nullptr)
        {
            delete newNode; // memory leak se bachnay  liye
            cout << "Position " << position << " is out of bounds." << endl;
            return;
        }

        // Insert the new node at the specified position
        newNode->next = current->next; // ye pehlay wali node ko agay krnay or us ka link jornay k liye hai
        current->next = newNode;
    }

    // Function to insert a new value at the end of the linked list
    void insert(int value)
    {
        Node* newNode = new Node(value);

        if(head == NULL)
        {
            head = newNode;
            return;
        }

        Node* current = head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }


    // Function to delete the first node
    void deleteFirst()
    {
        if(head == NULL)
        {
            cout << "Linked-List is EMPTY!" << endl;
            return;
        }
        Node* current = head;
        head = current->next;
        delete current;
    }

    // Function to delete a node at a specific position
    void deleteAtPosition(int position)
    {
        if (head == nullptr)
        {
            cout << "The linked list is empty." << endl;
            return;
        }
        if (position == 0)
        {
            deleteFirst();
            return;
        }
        Node* current = head;
        int index = 0;
        while (current->next != nullptr && index < position - 1)
        {
            current = current->next;
            index++;
        }
        if (current->next == nullptr)
        {
            cout << "Position " << position << " is out of bounds." << endl;
        }
        else
        {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "Node at position " << position << " deleted from the linked list." << endl;
        }
    }

    // Function to delete the last node
    void deleteLast()
    {
        if (head == nullptr)
        {
            cout << "The linked list is empty." << endl;
            return;
        }
        if (head->next == nullptr)
        {
            deleteFirst();
            return;
        }
        Node* current = head;
        while (current->next->next != nullptr)
        {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
        cout << "Last node deleted from the linked list." << endl;
    }

    // Function to search for a specific value in the linked list
    void search(int value)
    {
        Node* current = head;
        int position = 0;
        while (current != nullptr)
        {
            if (current->data == value)
            {
                cout << "Value " << value << " found at position " << position << "." << endl;
                return;
            }
            current = current->next;
            position++;
        }
        cout << "Value " << value << " not found in the linked list." << endl;
    }

    // Function to update a specific value in the linked list
    void update(int oldValue, int newValue)
    {
        Node* current = head;
        while (current != nullptr)
        {
            if (current->data == oldValue)
            {
                current->data = newValue;
                cout << "Value " << oldValue << " updated to " << newValue << "." << endl;
                return;
            }
            current = current->next;
        }
        cout << "Value " << oldValue << " not found in the linked list." << endl;
    }

    // Function to bubble sort the linked list
    void bubbleSort()
    {
        if (head == nullptr || head->next == nullptr)
        {
            cout << "No sorting needed for an empty or single-element linked list." << endl;
            return;
        }
        bool swapped;
        do
        {
            swapped = false;
            Node* current = head;

            while (current->next != nullptr)
            {
                if (current->data > current->next->data)
                {
                    // Swap values
                    swap(current->data, current->next->data);
                    swapped = true;
                }
                current = current->next;
            }
        }
        while (swapped);

        cout << "Linked list sorted using bubble sort." << endl;
    }

};

// Node class for the doubly linked list
class DBNode
{
public:
    int data;       // Data of the node
    DBNode* next;     // Pointer to the next node
    DBNode* prev;     // Pointer to the previous node

    // Constructor to initialize node
    DBNode(int value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList
{
private:
    DBNode* head;     // Pointer to the head of the linked list
    DBNode* tail;     // Pointer to the tail of the linked list

public:
    // Constructor to initialize an empty linked list
    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    // Function to traverse and display the linked list forward
    void traverseForward()
    {
        if (head == nullptr)
        {
            cout << "The linked list is empty." << endl;
            return;
        }
        DBNode* current = head;
        while (current != nullptr)
        {
            cout << current->data << " <-> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }

    // Function to traverse and display the linked list backward
    void traverseBackward()
    {
        if (tail == nullptr)
        {
            cout << "The linked list is empty." << endl;
            return;
        }
        DBNode* current = tail;
        while (current != nullptr)
        {
            cout << current->data << " <-> ";
            current = current->prev;
        }
        cout << "NULL" << endl;
    }

    // Function to insert a new value at the beginning of the linked list
    void insertAtFirst(int value)
    {
        DBNode* newNode = new DBNode(value);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        cout << "Value " << value << " inserted at the beginning of the linked list." << endl;
    }

    // Function to insert a new value at a specific position
    void insertAtPosition(int value, int position)
    {
        if (position == 0)
        {
            insertAtFirst(value);
            return;
        }

        DBNode* newNode = new DBNode(value);
        DBNode* current = head;
        int index = 0;

        while (current != nullptr && index < position - 1)
        {
            current = current->next;
            index++;
        }

        if (current == nullptr)
        {
            cout << "Position " << position << " is out of bounds." << endl;
            delete newNode;
        }
        else
        {
            newNode->next = current->next;
            newNode->prev = current;
            if (current->next != nullptr)
            {
                current->next->prev = newNode;
            }
            else
            {
                tail = newNode; // Update tail if inserting at end
            }
            current->next = newNode;
            cout << "Value " << value << " inserted at position " << position << "." << endl;
        }
    }

    // Function to insert a new value at the end of the linked list
    void insert(int value)
    {
        DBNode* newNode = new DBNode(value);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        cout << "Value " << value << " inserted at the end of the linked list." << endl;
    }

    // Function to delete the first node
    void deleteFirst()
    {
        if (head == nullptr)
        {
            cout << "The linked list is empty." << endl;
            return;
        }

        DBNode* temp = head;
        if (head == tail)   // Only one node
        {
            head = tail = nullptr;
        }
        else
        {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
        cout << "First node deleted from the linked list." << endl;
    }

    // Function to delete a node at a specific position
    void deleteAtPosition(int position)
    {
        if (head == nullptr)
        {
            cout << "The linked list is empty." << endl;
            return;
        }
        if (position == 0)
        {
            deleteFirst();
            return;
        }

        DBNode* current = head;
        int index = 0;

        while (current != nullptr && index < position)
        {
            current = current->next;
            index++;
        }

        if (current == nullptr)
        {
            cout << "Position " << position << " is out of bounds." << endl;
        }
        else
        {
            if (current == tail)
            {
                tail = current->prev;
                tail->next = nullptr;
            }
            else
            {
                current->prev->next = current->next;
                current->next->prev = current->prev;
            }
            delete current;
            cout << "Node at position " << position << " deleted from the linked list." << endl;
        }
    }

    // Function to delete the last node
    void deleteLast()
    {
        if (tail == nullptr)
        {
            cout << "The linked list is empty." << endl;
            return;
        }

        DBNode* temp = tail;
        if (head == tail)   // Only one node
        {
            head = tail = nullptr;
        }
        else
        {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
        cout << "Last node deleted from the linked list." << endl;
    }

    // Function to search for a specific value in the linked list
    void search(int value)
    {
        DBNode* current = head;
        int position = 0;
        while (current != nullptr)
        {
            if (current->data == value)
            {
                cout << "Value " << value << " found at position " << position << "." << endl;
                return;
            }
            current = current->next;
            position++;
        }
        cout << "Value " << value << " not found in the linked list." << endl;
    }

    // Function to update a specific value in the linked list
    void update(int oldValue, int newValue)
    {
        DBNode* current = head;
        while (current != nullptr)
        {
            if (current->data == oldValue)
            {
                current->data = newValue;
                cout << "Value " << oldValue << " updated to " << newValue << "." << endl;
                return;
            }
            current = current->next;
        }
        cout << "Value " << oldValue << " not found in the linked list." << endl;
    }

    // Function to bubble sort the linked list
    void bubbleSort()
    {
        if (head == nullptr || head->next == nullptr)
        {
            cout << "No sorting needed for an empty or single-element linked list." << endl;
            return;
        }

        bool swapped;
        DBNode* lastSorted = nullptr;

        do
        {
            swapped = false;
            DBNode* current = head;

            while (current->next != lastSorted)
            {
                if (current->data > current->next->data)
                {
                    // Swap values
                    swap(current->data, current->next->data);
                    swapped = true;
                }
                current = current->next;
            }
            lastSorted = current;
        }
        while (swapped);

        cout << "Linked list sorted using bubble sort." << endl;
    }

};

class CircularLinkedList
{
private:
    Node* head;     // Pointer to the head of the linked list
    Node* tail;     // Pointer to the tail of the linked list

public:
    // Constructor to initialize an empty linked list
    CircularLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    // Function to traverse and display the circular linked list
    void traverse()
    {
        if (head == nullptr)
        {
            cout << "The circular linked list is empty." << endl;
            return;
        }

        Node* current = head;
        cout << "Circular List: ";
        do
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        while (current != head);
        cout << "(head)" << endl;
    }

    // Function to insert a new value at the beginning of the circular linked list
    void insertAtFirst(int value)
    {
        Node* newNode = new Node(value);

        if (head == nullptr)
        {
            head = tail = newNode;
            newNode->next = newNode; // Circular reference to itself
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head; // Maintain circularity
        }
        cout << "Value " << value << " inserted at the beginning of the circular linked list." << endl;
    }

    // Function to insert a new value at a specific position
    void insertAtPosition(int value, int position)
    {
        if (position == 0)
        {
            insertAtFirst(value);
            return;
        }

        Node* newNode = new Node(value);
        Node* current = head;
        int index = 0;

        // Traverse to the node before the desired position
        while (current->next != head && index < position - 1)
        {
            current = current->next;
            index++;
        }

        newNode->next = current->next;
        current->next = newNode;

        // Update tail if inserting at the end
        if (newNode->next == head)
        {
            tail = newNode;
        }

        cout << "Value " << value << " inserted at position " << position << "." << endl;
    }

    // Function to insert a new value at the end of the circular linked list
    void insert(int value)
    {
        Node* newNode = new Node(value);

        if (head == nullptr)
        {
            head = tail = newNode;
            newNode->next = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
        cout << "Value " << value << " inserted at the end of the circular linked list." << endl;
    }

    // Function to delete the first node
    void deleteFirst()
    {
        if (head == nullptr)
        {
            cout << "The circular linked list is empty." << endl;
            return;
        }

        if (head == tail)   // Only one node
        {
            delete head;
            head = tail = nullptr;
        }
        else
        {
            Node* temp = head;
            head = head->next;
            tail->next = head; // Maintain circularity
            delete temp;
        }
        cout << "First node deleted from the circular linked list." << endl;
    }

    // Function to delete a node at a specific position
    void deleteAtPosition(int position)
    {
        if (head == nullptr)
        {
            cout << "The circular linked list is empty." << endl;
            return;
        }

        if (position == 0)
        {
            deleteFirst();
            return;
        }

        Node* current = head;
        Node* prev = nullptr;
        int index = 0;

        // Traverse to the node at the desired position
        while (current->next != head && index < position)
        {
            prev = current;
            current = current->next;
            index++;
        }

        if (index != position)
        {
            cout << "Position " << position << " is out of bounds." << endl;
            return;
        }

        prev->next = current->next;

        // Update tail if deleting the last node
        if (current == tail)
        {
            tail = prev;
        }

        delete current;
        cout << "Node at position " << position << " deleted from the circular linked list." << endl;
    }

    // Function to delete the last node
    void deleteLast()
    {
        if (head == nullptr)
        {
            cout << "The circular linked list is empty." << endl;
            return;
        }

        if (head == tail)   // Only one node
        {
            deleteFirst();
            return;
        }

        Node* current = head;
        while (current->next != tail)
        {
            current = current->next;
        }

        Node* temp = tail;
        tail = current;
        tail->next = head; // Maintain circularity
        delete temp;

        cout << "Last node deleted from the circular linked list." << endl;
    }

    // Function to search for a specific value in the circular linked list
    void search(int value)
    {
        if (head == nullptr)
        {
            cout << "The circular linked list is empty." << endl;
            return;
        }

        Node* current = head;
        int position = 0;
        bool found = false;

        do
        {
            if (current->data == value)
            {
                found = true;
                break;
            }
            current = current->next;
            position++;
        }
        while (current != head);

        if (found)
        {
            cout << "Value " << value << " found at position " << position << "." << endl;
        }
        else
        {
            cout << "Value " << value << " not found in the circular linked list." << endl;
        }
    }

    // Function to update a specific value in the circular linked list
    void update(int oldValue, int newValue)
    {
        if (head == nullptr)
        {
            cout << "The circular linked list is empty." << endl;
            return;
        }

        Node* current = head;
        bool updated = false;

        do
        {
            if (current->data == oldValue)
            {
                current->data = newValue;
                updated = true;
                break;
            }
            current = current->next;
        }
        while (current != head);

        if (updated)
        {
            cout << "Value " << oldValue << " updated to " << newValue << "." << endl;
        }
        else
        {
            cout << "Value " << oldValue << " not found in the circular linked list." << endl;
        }
    }

    // Function to bubble sort the circular linked list
    void bubbleSort()
    {
        if (head == nullptr || head->next == head)
        {
            cout << "No sorting needed for an empty or single-element circular linked list." << endl;
            return;
        }

        bool swapped;
        Node* lastNode = nullptr;

        do
        {
            swapped = false;
            Node* current = head;

            while (current->next != head && current->next != lastNode)
            {
                if (current->data > current->next->data)
                {
                    // Swap values
                    swap(current->data, current->next->data);
                    swapped = true;
                }
                current = current->next;
            }
            lastNode = current;
        }
        while (swapped);

        cout << "Circular linked list sorted using bubble sort." << endl;
    }

};

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
        capacity = size;
        top = -1;
    }

    // Push operation
    void push(int value)
    {
        if(top >= capacity)
        {
            cout << "Stack OverFlow!!" << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " has been added at index " << top << endl;
    }

    // Pop operation
    void pop()
    {
        if(top == -1)
        {
            cout << "Stack Underflow!!" << endl;
            return ;
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
            if(arr[i] == value)
            {
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

class Queue
{
private:
    int arr[100];  // Static array for queue elements with a fixed size
    int front;     // Index of the front element
    int rear;      // Index of the rear element
    int capacity;  // Maximum capacity of the queue

public:
    // Constructor to initialize queue
    Queue(int size)
    {
        if (size > 100)
        {
            cout << "Maximum queue size is 100. Setting capacity to 100." << endl;
            size = 100;
        }
        capacity = size;
        front = 0;
        rear = -1;
    }

    // Enqueue operation (insert at the rear)
    void enqueue(int value)
    {
        if(rear > capacity)
        {
            cout << "Queue OverFlow!!" << endl;
            return;
        }
        arr[++rear] = value;
        cout << value << " has been inserted at " << rear << endl;
    }

    bool isEmpty()
    {
        return front > rear;
    }

    // Dequeue operation (remove from the front)
    void dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is UnderFlow!!" << endl;
            return;
        }
        cout << arr[front++] << " has been deleted" << endl;
        cout << "Queue after Deletion = " << endl;
        traverse();
    }

    // Peek operation (get front element)
    int peek()
    {
        if(isEmpty())
        {
            cout << "Queue is UnderFlow!!" << endl;
            return -1;
        }
        return arr[front];
    }

    // Traverse operation
    void traverse()
    {
        if(isEmpty())
        {
            cout << "Queue is UnderFlow!!" << endl;
            return;
        }
        for(int i = front; i <= rear; i++)
        {
            cout << "Index = " << i << "  Value = " << arr[i] << endl;
        }
    }

    // Search operation
    void search(int value)
    {
        if(isEmpty())
        {
            cout << "Queue is Empty!!" << endl;
            return;
        }

        for(int i = 0; i <= rear; i++)
        {
            if(arr[i] == value)
            {
                cout << value << " is at index = " << i << endl;
                return;
            }
        }
        cout << value << " is NOT present in Queue." << endl;
    }

    // Update operation
    void update(int oldValue, int newValue)
    {

        if(isEmpty())
        {
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


class bstNode
{
public:
    int data;
    bstNode* left;
    bstNode* right;
};

class BST
{
private:
    bstNode* root;

    // Helper function to create a new node
    bstNode* createNode(int value)
    {
        bstNode* newNode = new bstNode();
        newNode->data = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

    // Helper function for insertion
    bstNode* insert(bstNode* root, int value)
    {
        if(root == nullptr) return createNode(value);
        if(value < root->data) root->left = insert(root->left, value);
        else if(value > root->data) root->right = insert(root->right, value);
        return root;
    }

    // Helper function for searching
    bool search(bstNode* root, int value)
    {
        if(root == nullptr) return false;
        if(root->data == value) return true;
        if(value < root->data) return search(root->left, value);
        return search(root->right, value);
    }

    // Helper function to find the minimum value in a subtree
    bstNode* findMin(bstNode* root)
    {
        bstNode* temp = root;
        while(temp->left != nullptr)
        {
            temp = temp->left;
        }
        return temp;
    }

    // Helper function for deletion
    bstNode* deleteNode(bstNode* root, int value)
    {
        if(root == nullptr) return root;

        if(value < root->data) root->left = deleteNode(root->left, value);
        else if(value > root->data) root->right = deleteNode(root->right, value);
        else
        {
            if(root->left == nullptr)
            {
                bstNode* temp = root->right;
                delete root;
                return temp;
            }
            else if(root->right == nullptr)
            {
                bstNode* temp = root->left;
                delete root;
                return temp;
            }

            bstNode* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

    // Helper function for inorder traversal
    void inorder(bstNode* root)
    {
        if (root != nullptr)
        {
            inorder(root->left);
            cout << root->data << " ";
            inorder(root->right);
        }
    }

    void pre_order(bstNode* root)
    {
        if (root != nullptr)
        {
            cout << root->data << " ";
            pre_order(root->left);
            pre_order(root->right);
        }
    }

    void post_order(bstNode* root)
    {
        if (root != nullptr)
        {
            post_order(root->left);
            post_order(root->right);
            cout << root->data << " ";
        }
    }

public:
    // Constructor to initialize BST
    BST()
    {
        root = nullptr;
    }

    // Insert function
    void insert(int value)
    {
        root = insert(root, value);
        cout << "Value " << value << " inserted into the BST." << endl;
    }

    // Search function
    void search(int value)
    {
        if (search(root, value))
        {
            cout << "Value " << value << " found in the BST." << endl;
        }
        else
        {
            cout << "Value " << value << " not found in the BST." << endl;
        }
    }

    // Delete function
    void deleteNode(int value)
    {
        root = deleteNode(root, value);
        cout << "Value " << value << " deleted from the BST (if it existed)." << endl;
    }

    // Traverse (Inorder) function
    void traverse()
    {
        if (root == nullptr)
        {
            cout << "BST is empty." << endl;
        }
        else
        {
            cout << "Inorder traversal: ";
            inorder(root);
            cout << endl;

            cout << "Pre_order traversal: ";
            pre_order(root);
            cout << endl;

            cout << "Post_order traversal: ";
            post_order(root);
            cout << endl;
        }
    }

};

int main()
{
    int choice;
    do
    {
        cout << endl;
        cout << " |----DSA LAB FINAL PROJECT----| " << endl;
        cout << " 01. Arrays" << endl;
        cout << " 02. Arrays with Extended Oprs" << endl;
        cout << " 03. LinkedList" << endl;
        cout << " 04. LinkedList with Extended Oprs" << endl;
        cout << " 05. Doubly LinkedList" << endl;
        cout << " 06. Circular LinkedList" << endl;
        cout << " 07. Stack" << endl;
        cout << " 08. Queue" << endl;
        cout << " 09. BST" << endl;
        cout << " 10. Exit" << endl;
        cout << " Enter choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
        {
            Arrays a1;
            int choice, key, newElement = 500, pos = 3, updatedVal = 9;
            do
            {
                cout << endl;
                cout << "\n Array Operations:\n";
                cout << "1. Traverse\n";
                cout << "2. Search\n";
                cout << "3. Insert\n";
                cout << "4. Update\n";
                cout << "5. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice)
                {
                case 1:
                    a1.traverse();
                    break;
                case 2:
                    a1.search(key);
                    break;
                case 3:
                    a1.insert(newElement, pos);
                    break;
                case 4:
                    a1.update(updatedVal);
                    break;
                case 5:
                    cout << "Exiting program." << endl;
                    break;
                default:
                    cout << "Invalid choice! Try again." << endl;
                }
            }
            while (choice != 5);

            break;
        }
        case 2:
        {
            Ex_Array array;
            int choice;
            do
            {
                cout << "\n Ex_Array Operations:\n";
                cout << "1. Traverse\n";
                cout << "2. Search\n";
                cout << "3. Insert\n";
                cout << "4. Update\n";
                cout << "5. Delete\n";
                cout << "6. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice)
                {
                case 1:
                    array.traverse();
                    break;
                case 2:
                    array.search();
                    break;
                case 3:
                    array.insert();
                    break;
                case 4:
                    array.update();
                    break;
                case 5:
                    array.remove();
                    break;
                case 6:
                    cout << "Exiting program." << endl;
                    break;
                default:
                    cout << "Invalid choice! Try again." << endl;
                }
            }
            while (choice != 6);

            break;
        }
        case 3:
        {
            LinkedList list;
            int choice, value, oldValue, newValue;

            do
            {
                cout << "\n Linked List Operations:\n";
                cout << "1. Insert\n";
                cout << "2. Traverse\n";
                cout << "3. Search\n";
                cout << "4. Update\n";
                cout << "5. Delete\n";
                cout << "6. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice)
                {
                case 1:
                    cout << "Enter value to insert: ";
                    cin >> value;
                    list.insert(value);
                    break;
                case 2:
                    list.traverse();
                    break;
                case 3:
                    cout << "Enter value to search: ";
                    cin >> value;
                    list.search(value);
                    break;
                case 4:
                    cout << "Enter old value to update: ";
                    cin >> oldValue;
                    cout << "Enter new value: ";
                    cin >> newValue;
                    list.update(oldValue, newValue);
                    break;
                case 5:
                    cout << "Enter value to delete: ";
                    cin >> value;
                    list.remove(value);
                    break;
                case 6:
                    cout << "Exiting program." << endl;
                    break;
                default:
                    cout << "Invalid choice! Try again." << endl;
                }
            }
            while (choice != 6);

            break;
        }
        case 4:
        {
            Ex_LL list;
            int choice, value, position, oldValue, newValue;

            do
            {
                cout << "\nOperations:\n";
                cout << "1. Traverse\n";
                cout << "2. Insert at First\n";
                cout << "3. Insert at Position\n";
                cout << "4. Insert at Last\n";
                cout << "5. Delete First\n";
                cout << "6. Delete at Position\n";
                cout << "7. Delete Last\n";
                cout << "8. Search\n";
                cout << "9. Update\n";
                cout << "10. Sort (Bubble Sort)\n";
                cout << "11. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice)
                {
                case 1:
                    list.traverse();
                    break;
                case 2:
                    cout << "Enter value to insert at the beginning: ";
                    cin >> value;
                    list.insertAtFirst(value);
                    break;
                case 3:
                    cout << "Enter position to insert: ";
                    cin >> position;
                    cout << "Enter value to insert: ";
                    cin >> value;
                    list.insertAtPosition(value, position);
                    break;
                case 4:
                    cout << "Enter value to insert at the end: ";
                    cin >> value;
                    list.insert(value);
                    break;
                case 5:
                    list.deleteFirst();
                    break;
                case 6:
                    cout << "Enter position to delete: ";
                    cin >> position;
                    list.deleteAtPosition(position);
                    break;
                case 7:
                    list.deleteLast();
                    break;
                case 8:
                    cout << "Enter value to search: ";
                    cin >> value;
                    list.search(value);
                    break;
                case 9:
                    cout << "Enter old value to update: ";
                    cin >> oldValue;
                    cout << "Enter new value: ";
                    cin >> newValue;
                    list.update(oldValue, newValue);
                    break;
                case 10:
                    list.bubbleSort();
                    break;
                case 11:
                    cout << "Exiting program." << endl;
                    break;
                default:
                    cout << "Invalid choice! Try again." << endl;
                }
            }
            while (choice != 11);

            break;
        }
        case 5:
        {
            DoublyLinkedList list;
            int choice, value, position, oldValue, newValue;

            do
            {
                cout << "\nDoublyLinkedList Operations:\n";
                cout << "1. Traverse Forward\n";
                cout << "2. Traverse Backward\n";
                cout << "3. Insert at First\n";
                cout << "4. Insert at Position\n";
                cout << "5. Insert at Last\n";
                cout << "6. Delete First\n";
                cout << "7. Delete at Position\n";
                cout << "8. Delete Last\n";
                cout << "9. Search\n";
                cout << "10. Update\n";
                cout << "11. Sort (Bubble Sort)\n";
                cout << "12. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice)
                {
                case 1:
                    list.traverseForward();
                    break;
                case 2:
                    list.traverseBackward();
                    break;
                case 3:
                    cout << "Enter value to insert at the beginning: ";
                    cin >> value;
                    list.insertAtFirst(value);
                    break;
                case 4:
                    cout << "Enter position to insert: ";
                    cin >> position;
                    cout << "Enter value to insert: ";
                    cin >> value;
                    list.insertAtPosition(value, position);
                    break;
                case 5:
                    cout << "Enter value to insert at the end: ";
                    cin >> value;
                    list.insert(value);
                    break;
                case 6:
                    list.deleteFirst();
                    break;
                case 7:
                    cout << "Enter position to delete: ";
                    cin >> position;
                    list.deleteAtPosition(position);
                    break;
                case 8:
                    list.deleteLast();
                    break;
                case 9:
                    cout << "Enter value to search: ";
                    cin >> value;
                    list.search(value);
                    break;
                case 10:
                    cout << "Enter old value to update: ";
                    cin >> oldValue;
                    cout << "Enter new value: ";
                    cin >> newValue;
                    list.update(oldValue, newValue);
                    break;
                case 11:
                    list.bubbleSort();
                    break;
                case 12:
                    cout << "Exiting program." << endl;
                    break;
                default:
                    cout << "Invalid choice! Try again." << endl;
                }
            }
            while (choice != 12);

            break;
        }
        case 6:
        {
            CircularLinkedList list;
            int choice, value, position, oldValue, newValue;

            do
            {
                cout << "\nCircularLinkedList Operations:\n";
                cout << "1. Traverse\n";
                cout << "2. Insert at First\n";
                cout << "3. Insert at Position\n";
                cout << "4. Insert at Last\n";
                cout << "5. Delete First\n";
                cout << "6. Delete at Position\n";
                cout << "7. Delete Last\n";
                cout << "8. Search\n";
                cout << "9. Update\n";
                cout << "10. Sort (Bubble Sort)\n";
                cout << "11. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice)
                {
                case 1:
                    list.traverse();
                    break;
                case 2:
                    cout << "Enter value to insert at the beginning: ";
                    cin >> value;
                    list.insertAtFirst(value);
                    break;
                case 3:
                    cout << "Enter position to insert: ";
                    cin >> position;
                    cout << "Enter value to insert: ";
                    cin >> value;
                    list.insertAtPosition(value, position);
                    break;
                case 4:
                    cout << "Enter value to insert at the end: ";
                    cin >> value;
                    list.insert(value);
                    break;
                case 5:
                    list.deleteFirst();
                    break;
                case 6:
                    cout << "Enter position to delete: ";
                    cin >> position;
                    list.deleteAtPosition(position);
                    break;
                case 7:
                    list.deleteLast();
                    break;
                case 8:
                    cout << "Enter value to search: ";
                    cin >> value;
                    list.search(value);
                    break;
                case 9:
                    cout << "Enter old value to update: ";
                    cin >> oldValue;
                    cout << "Enter new value: ";
                    cin >> newValue;
                    list.update(oldValue, newValue);
                    break;
                case 10:
                    list.bubbleSort();
                    break;
                case 11:
                    cout << "Exiting program." << endl;
                    break;
                default:
                    cout << "Invalid choice! Try again." << endl;
                }
            }
            while (choice != 11);

            break;
        }
        case 7:
        {
            int size;
            cout << "Enter the size of the stack (max 100): ";
            cin >> size;

            Stack stack(size);
            int choice, value, oldValue, newValue;

            do
            {
                cout << "\nStack Menu:\n";
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

            break;
        }
        case 8:
        {
            int size;
            cout << "Enter the size of the queue (max 100): ";
            cin >> size;

            Queue queue(size);
            int choice, value, oldValue, newValue;

            do
            {
                cout << "\n Queue Menu:\n";
                cout << "1. Traverse\n";
                cout << "2. Search\n";
                cout << "3. Enqueue (Insert)\n";
                cout << "4. Dequeue (Delete)\n";
                cout << "5. Update\n";
                cout << "6. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice)
                {
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
            }
            while (choice != 6);

            break;
        }
        case 9:
        {
            BST bst;
            int choice, value;

            do
            {
                cout << "\n BST Menu:\n";
                cout << "1. Traverse (Inorder)\n";
                cout << "2. Search\n";
                cout << "3. Insert\n";
                cout << "4. Delete\n";
                cout << "5. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice)
                {
                case 1:
                    bst.traverse();
                    break;
                case 2:
                    cout << "Enter value to search: ";
                    cin >> value;
                    bst.search(value);
                    break;
                case 3:
                    cout << "Enter value to insert: ";
                    cin >> value;
                    bst.insert(value);
                    break;
                case 4:
                    cout << "Enter value to delete: ";
                    cin >> value;
                    bst.deleteNode(value);
                    break;
                case 5:
                    cout << "Exiting program." << endl;
                    break;
                default:
                    cout << "Invalid choice. Try again." << endl;
                }
            }
            while (choice != 5);

            break;
        }

        case 10:
        {
            cout << "Exiting program." << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
        }
    }
    while(choice != 10);
}
