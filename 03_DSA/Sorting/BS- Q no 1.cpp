#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) { // No of Passes
        for(int j = 0; j < n-1-i; j++) {    // " i "  <-- ye i ko yahan add is liye kiya hai q k ek to ye optimized code hai or dosra ye k hum ne har dosray pass ma 1 dafa kum iteration kri hai
            if(arr[j] == 0) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
}

int main() {
    int arr[] = {5,0,2,0,0,3,4,0,1};
    int size = sizeof(arr) / sizeof(int);
    BubbleSort(arr, size);
}

