#include<iostream>
using namespace std;
int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int size = sizeof(arr)/sizeof(int);
int size_for_insert = 10;

// Function to traverse and display the array elements
void traverse() {
	for(int i = 0; i<size; i++) {
		cout << arr[i] << endl;
	}
}

// Function to search for a specific element in the array
void search(int key) {
	cin >> key;
	for(int i = 0; i<size; i++) {
		if(arr[i] == key) {
			cout << arr[i] << endl;
		}
	}
}


// Function to update the value of an existing element
void update(int updatedVal) {
	for(int i = 0; i<size; i++) {
		cout << arr[i] << endl;
	}

	cout << "After Updation = " << endl;
	arr[3] = updatedVal;
	for(int i = 0; i<size; i++) {
		cout << arr[i] << endl;
	}
}

// Function to insert a new element at a specified position
void insert(int newElement, int pos) {

	for(int i = size_for_insert; i>pos; i--) {
		arr[i] = arr[i-1];
	}
	arr[pos] = newElement;
	size_for_insert++;
	cout << "After Updation :-" << endl;
	for(int i = 0; i<size_for_insert; i++) {
		cout << arr[i] << endl;
	}
}

int main() {
	int choice, key, newElement = 500, pos = 3, updatedVal = 9;
	do {
		cout << "\nOperations:\n";
		cout << "1. Traverse\n";
		cout << "2. Search\n";
		cout << "3. Insert\n";
		cout << "4. Update\n";
		cout << "5. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			traverse();
			break;
		case 2:
			search(key);
			break;
		case 3:
			insert(newElement, pos);
			break;
		case 4:
			update(updatedVal);
			break;
		case 5:
			cout << "Exiting program." << endl;
			break;
		default:
			cout << "Invalid choice! Try again." << endl;
		}
	} while (choice != 5);

	return 0;
}
