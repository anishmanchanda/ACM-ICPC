#include <iostream>
using namespace std;

void circularArrayRotation(int n, int k, int q, int arr[], int query[]);

int main() {
    int n, k, q; // no. of elements in array, rotation count, no. of queries
    cin >> n >> k >> q;
    
    // Use dynamic memory allocation
    int* a = new int[n];
    int* query = new int[q];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int j = 0; j < q; j++) {
        cin >> query[j];
    }
    
    circularArrayRotation(n, k, q, a, query);
    
    // Free the allocated memory
    delete[] a;
    delete[] query;
    
    return 0;
}

void circularArrayRotation(int n, int k, int q, int arr[], int query[]) {
    // Reduce k to a minimum number of rotations
    k = k % n;
    
    // Create a new array to store the rotated version
    int* rotated = new int[n];
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    
    // Answer the queries
    for (int h = 0; h < q; h++) {
        cout << rotated[query[h]] << endl;
    }
    
    // Free the allocated memory
    delete[] rotated;
}