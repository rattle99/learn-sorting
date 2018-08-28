// selection sort

#include <iostream>
#include <vector>

using namespace std;

// selection sort function
void selectionSort(vector <int> &a) {
    for (int i = 0; i < a.size()-1; i++) {
        int mini = i;
        for (int j = i+1; j < a.size(); j++) {
            if (a[j] < a[mini]) {
                mini = j;
            }
        }
        int temp = a[mini];
        a[mini] = a[i];
        a[i] = temp;
    }
}

// main function
int main() {
    vector <int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: \n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    selectionSort(arr); // sort array

    cout << "\n\nSorted array: \n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}