#include<iostream>
using namespace std;

class Node {
    int data;
public:
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
    void set_Data(int data) { this->data = data; }
    int get_Data() { return data; }
};

class LinkedList {
    Node* head;
    Node* tail;
public:
    LinkedList() { head = tail = nullptr; }

    void Insert(int d) {
        Node* newNode = new Node(d);
        if(head == tail == nullptr) {
            newNode->next = nullptr;
        }

    }


};

int main() {
    LinkedList li;


    return 0;
}
