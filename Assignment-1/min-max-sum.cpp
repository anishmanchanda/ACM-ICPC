#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5];
    long long totalSum = 0;
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        totalSum += arr[i];
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    long long minSum = totalSum - max;
    long long maxSum = totalSum - min;

    cout << minSum << " " << maxSum;
    return 0;
}
