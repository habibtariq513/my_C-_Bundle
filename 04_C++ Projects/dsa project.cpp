/* LinkedList: Attendance records store karne ke liye.
BST: Students ko roll number ke hisaab se search aur sort karne ke liye.*/

#include<iostream>
using namespace std;

class Node   // For Both LL and BST
{
public:
    string name;
    int roll;
    bool status;
    Node* next;
    Node* left;
    Node* right;

    Node(string n, int r)
    {
        name  = n;
        roll = r;
        next = nullptr;
        left = nullptr;
        right = nullptr;
        status = false;
    }
};

class St_Node
{
public:
    int roll;
    bool status;
    St_Node* next;

    St_Node(bool s, int r)
    {
        roll = r;
        status = false;
        next = nullptr;
    }
};

class Stack
{
public:
    St_Node* top;
    void push(int r, bool st)
    {
        if(top == nullptr) {
            cout << "OOPS!! It is Empty!!" << endl;
            return;
        }
        St_Node* new_Node = new St_Node(st, r);
        new_Node ->next = top;
        top = new_Node;
    }

    void pop()
    {
        if(top == nullptr) {
            cout << "Nothing to UNDO!!" << endl;
            return;
        }
        St_Node* temp = top;

    }
};

class BST
{
public:
    Node* root;

    BST()
    {
        root = nullptr;
    }

    void insert(string n, int r)
    {
        root = insertHP(root, r, n);
    }

    Node* search(int r)
    {
        return searchHP(root, r);
    }

    void updateST(int r, bool newST)   // BST ma students ka status update hota rahay ga is se
    {
        Node* temp = searchHP(root, r);
        if(temp != nullptr)
        {
            temp ->status = newST;
        }
    }

    void displayInorder()
    {
        displayInorderHP(root);
    }
private:
    Node* insertHP(Node* root, int r, string n)
    {
        if(root == nullptr) return new Node(n, r);
        if(r < root ->roll) root ->left = insertHP(root ->left, r, n);
        else if(r > root ->roll) root -> right = insertHP(root ->right, r, n);
        else cout << "Roll No = " << r << " already Exists!" << endl;
        return root;
    }

    Node* searchHP(Node* root, int r)
    {
        if(root == nullptr) return nullptr;
        if(r < root ->roll) return searchHP(root ->left, r);
        if(r > root ->roll) return searchHP(root ->right, r);
        return root;
    }

    void displayInorderHP(Node* root)
    {
        if(root == nullptr) return;
        displayInorderHP(root->left);
        cout << root ->name << " with Roll no: " << root->roll << " is " << (root ->status ? " Present " : " Absent ") << endl;
        displayInorderHP(root->right);
    }
};


class LinkedList
{
    Node* head;
    Node* tail;
public:
    LinkedList()
    {
        head = tail = nullptr;
    }

    // Add Students
    void addStd(string n, int r)
    {
        Node* newNode = new Node(n, r);
        if(head == nullptr)
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    // Mark Attendance
    void mark_Attendence(int r, BST& bst)   // yahan BST ka ref is liye liya hai ta k BST ma bhi attendance update hoti rahay
    {
        Node* temp = head;
        while(temp != nullptr)
        {
            if(temp->roll == r)
            {
                temp-> status = true;
                bst.updateST(r, true);  //  it is for BST
                cout << temp -> name << " with Roll No " << temp ->roll << " is " << (temp -> status ? " Present. " : " Absent.") << endl;
                return;
            }
            temp = temp -> next;
        }
        cout << r << " is not FOUND!" << endl;
    }

    // Display Attendance
    void display_attendance()
    {
        Node* temp = head;
        if(head == nullptr)
        {
            cout << "No one has been enrolled!!" << endl;
            return;
        }
        while(temp != nullptr)
        {
            cout << temp -> name << " with Roll No " << temp ->roll << " is " << (temp -> status ? " Present. " : " Absent.") << endl;
            temp = temp -> next;
        }
    }
};

int main()
{
    string name;
    int roll, choice;
    bool status;
    LinkedList l1;
    BST b1;
    do
    {
        cout << "\n<( Student Attendance Management System )> \n" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Mark Attendance" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Display Attendance" << endl;
        cout << "5. Display Students" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 6) break;
        switch(choice)
        {
        case 1:
        {
            cout << "Enter Name = ";
            cin >> name;
            cout << "Enter Roll No = ";
            cin >> roll;
            l1.addStd(name, roll);
            b1.insert(name, roll);
            cout << name << " has been added with Roll no: " << roll << endl;
            break;
        }
        case 2:
        {
            cout << "Enter Roll No = ";
            cin >> roll;
            l1.mark_Attendence(roll, b1);
            break;
        }
        case 3:
        {
            cout << "Enter Roll No: ";
            cin >> roll;
            Node* found =  b1.search(roll);
            if(found) cout << found ->name << " with Roll no: " << found->roll << " is " << (found ->status ? " Presnt " : " Absent ") << endl;
            else cout << "Student not found!" << endl;
            break;
        }
        case 4:
        {
            cout << "Attendance of All Students \n";
            l1.display_attendance();
            break;
        }
        case 5:
        {
            cout << "List of All Students \n";
            b1.displayInorder();
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
        }
    }
    while(true);

}
