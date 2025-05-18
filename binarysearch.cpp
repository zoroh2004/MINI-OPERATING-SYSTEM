#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    char choice;
    do {
        cout << "Binary Search\n";
        cout << "Enter size of sorted array (max 100): ";
        int n;
        cin >> n;
        if (n <= 0 || n > 100) {
            cout << "Invalid size! Must be between 1 and 100.\n";
            continue;
        }
        int arr[100]; // Fixed-size array
        cout << "Enter " << n << " sorted numbers: ";
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << "Enter target value to search: ";
        int target;
        cin >> target;
        int result = binary_search(arr, n, target);
        if (result != -1) cout << target << " found at index " << result << endl;
        else cout << target << " not found\n";
        cout << "Try another search? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Exiting...\n";
    return 0;
}
