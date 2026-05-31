/*
#include <iostream>
using namespace std;

// Merge function (same as algorithm)
void Merge(int B[], int p, int C[], int q, int A[]) {
    int i = 0, j = 0, k = 0;

    while (i < p && j < q) {
        if (B[i] <= C[j]) {
            A[k] = B[i];
            i++;
        } else {
            A[k] = C[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while (i < p) {
        A[k] = B[i];
        i++;
        k++;
    }

    while (j < q) {
        A[k] = C[j];
        j++;
        k++;
    }
}

// MergeSort function (same logic as your notes)
void MergeSort(int A[], int n) {
    if (n > 1) {
        int mid = n / 2;

        // Create two subarrays
        int B[mid], C[n - mid];

        // Copy first half to B
        for (int i = 0; i < mid; i++)
            B[i] = A[i];

        // Copy second half to C
        for (int i = mid; i < n; i++)
            C[i - mid] = A[i];

        // Recursive calls
        MergeSort(B, mid);
        MergeSort(C, n - mid);

        // Merge back into A
        Merge(B, mid, C, n - mid, A);
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Call MergeSort
    MergeSort(A, n);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
*/

#include <stdio.h>

void Merge(int B[], int p, int C[], int q, int A[])
{
    int i = 0, j = 0, k = 0;

    while(i < p && j < q)
    {
        if(B[i] <= C[j])
        {
            A[k] = B[i];
            i++;
        }
        else
        {
            A[k] = C[j];
            j++;
        }
        k++;
    }

    while(i < p)
    {
        A[k] = B[i];
        i++;
        k++;
    }

    while(j < q)
    {
        A[k] = C[j];
        j++;
        k++;
    }
}

void MergeSort(int A[], int n)
{
    if(n > 1)
    {
        int mid = n / 2;

        int B[mid];
        int C[n - mid];

        int i;

        for(i = 0; i < mid; i++)
            B[i] = A[i];

        for(i = mid; i < n; i++)
            C[i - mid] = A[i];

        MergeSort(B, mid);
        MergeSort(C, n - mid);

        Merge(B, mid, C, n - mid, A);
    }
}

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    MergeSort(A, n);

    printf("Sorted Array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
