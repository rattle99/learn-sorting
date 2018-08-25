// insertion sort

#include <iostream>
#include <vector>

using namespace std;

// insertion sort function
vector <int> insertionSort(vector <int> &a) {
    for (int i = 1; i < a.size(); i++) {
        int curr = a[i];
        int j = i-1;
        while (j >= 0 && a[j] > curr) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = curr;
    }
    return a;
}

// main function
int main() {
    vector <int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: \n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    insertionSort(arr); // sort array

    cout << "\n\nSorted array: \n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}