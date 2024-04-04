#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
            return binarySearch(arr, left, mid - 1, target);

        return binarySearch(arr, mid + 1, right, target);
    }

    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    char choice;

    do {
        cout << "Enter the element to search (enter 'n' to end): ";
        cin >> choice;

        if (choice == 'n' || choice == 'N') {
            cout << "Finished Search" << endl;
            break;
        }

        target = choice - '0';
        int result = binarySearch(arr, 0, n - 1, target);
        if (result != -1)
            cout << "Element found at index " << result << endl;
        else
            cout << "Element not found in the array" << endl;

    } while (true);

    return 0;
}