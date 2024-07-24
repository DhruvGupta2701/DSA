#include <iostream>
using namespace std;
void insert(int arr[], int &n, int position, int value) {
    if(position < 0 || position > n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for(int i = n; i > position; i--) {
        arr[i] = arr[i-1];
    }
    arr[position] = value;
    n++;
}
void deletes(int arr[], int &n, int position) {
    if(position < 0 || position >= n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for(int i = position; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
}
void update(int arr[], int n, int position, int value) {
    if(position < 0 || position >= n) {
        cout << "Invalid position!" << endl;
        return;
    }
    arr[position] = value;
}
void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[100], n, choice, position, value;
    cout << "Enter the size of array: "<<endl;
    cin >> n;
    cout << "Enter elements of the array: "<<endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    do {
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Update\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter position to insert: ";
                cin >> position;
                cout << "Enter value to insert: ";
                cin >> value;
                insert(arr, n, position, value);
                break;
            case 2:
                cout << "Enter position to delete: ";
                cin >> position;
                deletes(arr, n, position);
                break;
            case 3:
                cout << "Enter position to update: ";
                cin >> position;
                cout << "Enter new value: ";
                cin >> value;
                update(arr, n, position, value);
                break;
            case 4:
                display(arr, n);
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while(choice != 5);
    return 0;
}
