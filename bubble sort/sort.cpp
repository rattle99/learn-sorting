// bubble sort

#include <iostream>
#include <vector>

using namespace std;

// bubble sort function
void bubbleSort(vector <int> &a) {
    for (int i = 0; i < a.size()-1; i++) {
        bool swapped = false;
        for (int j = 0; j < a.size()-i-1; j++) {
            if (a[j] > a[j+1]) {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}

// main function
int main() {
    vector <int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: \n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    bubbleSort(arr); // sort array

    cout << "\n\nSorted array: \n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}