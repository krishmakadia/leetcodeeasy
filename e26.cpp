#include <iostream>
using namespace std;

int dupl(int arr[], int n) {
    if (n == 0) return 0;
    int j = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[j] = arr[i];
            j++;
        }
    }
    return j;
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n > 10) {
        cout << "Size exceeds the limit of 10." << endl;
        return 1;
    }
    int arr[10];
    cout << "Enter the elements in the array in ascending order: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int newSize = dupl(arr, n);
    cout << "The updated array after removing the duplicates is: " << endl;
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
