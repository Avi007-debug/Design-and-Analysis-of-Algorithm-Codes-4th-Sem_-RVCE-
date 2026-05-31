#include <iostream>
using namespace std;

// Hoare Partition (same as algorithm)
int HoarePartition(int A[], int l, int r) {
    int p = A[l];        // pivot
    int i = l;
    int j = r + 1;

    while (true) {
        // move i right
        do {
            i++;
        } while (i <= r && A[i] < p);

        // move j left
        do {
            j--;
        } while (A[j] > p);

        if (i >= j)
            break;

        // swap A[i] and A[j]
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

    // swap pivot A[l] with A[j]
    int temp = A[l];
    A[l] = A[j];
    A[j] = temp;

    return j;   // split position
}

// QuickSort (same as algorithm)
void QuickSort(int A[], int l, int r) {
    if (l < r) {
        int s = HoarePartition(A, l, r);

        QuickSort(A, l, s - 1);
        QuickSort(A, s + 1, r);
    }
}

// Main function
int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    QuickSort(A, 0, n - 1);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}