#include <iostream>
using namespace std;

// Define the structure of a tree node
class Node {
    public:
    int data;
    Node* left;
    Node* right;
};

// Class for BST
class BST {
private:
    Node* root;

    // Helper function to create a new node
    Node* createNode(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

    // Helper function for insertion
    Node* insert(Node* root, int value) {
        if(root == nullptr) return createNode(value);
        if(value < root->data) root->left = insert(root->left, value);
        else if(value > root->data) root->right = insert(root->right, value);
        return root;
    }

    // Helper function for searching
    bool search(Node* root, int value) {
        if(root == nullptr) return false;
        if(root->data == value) return true;
        if(value < root->data) return search(root->left, value);
        return search(root->right, value);
    }

    // Helper function to find the minimum value in a subtree
    Node* findMin(Node* root) {
        Node* temp = root;
        while(temp->left != nullptr) {
            temp = temp->left;
        }
        return temp;
    }

    // Helper function for deletion
    Node* deleteNode(Node* root, int value) {
        if(root == nullptr) return root;

        if(value < root->data) root->left = deleteNode(root->left, value);
        else if(value > root->data) root->right = deleteNode(root->right, value);
        else {
            if(root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            }
            else if(root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

    // Helper function for inorder traversal
    void inorder(Node* root) {
        if (root != nullptr) {
            inorder(root->left);
            cout << root->data << " ";
            inorder(root->right);
        }
    }

    void pre_order(Node* root) {
        if (root != nullptr) {
            cout << root->data << " ";
            pre_order(root->left);
            pre_order(root->right);
        }
    }

    void post_order(Node* root) {
        if (root != nullptr) {
            post_order(root->left);
            post_order(root->right);
            cout << root->data << " ";
        }
    }

public:
    // Constructor to initialize BST
    BST() {
        root = nullptr;
    }

    // Insert function
    void insert(int value) {
        root = insert(root, value);
        cout << "Value " << value << " inserted into the BST." << endl;
    }

    // Search function
    void search(int value) {
        if (search(root, value)) {
            cout << "Value " << value << " found in the BST." << endl;
        } else {
            cout << "Value " << value << " not found in the BST." << endl;
        }
    }

    // Delete function
    void deleteNode(int value) {
        root = deleteNode(root, value);
        cout << "Value " << value << " deleted from the BST (if it existed)." << endl;
    }

    // Traverse (Inorder) function
    void traverse() {
        if (root == nullptr) {
            cout << "BST is empty." << endl;
        } else {
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

// Main function
int main() {
    BST bst;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Traverse (Inorder)\n";
        cout << "2. Search\n";
        cout << "3. Insert\n";
        cout << "4. Delete\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
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
    } while (choice != 5);

    return 0;
}

