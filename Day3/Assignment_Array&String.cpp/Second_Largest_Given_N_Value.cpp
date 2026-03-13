#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] > second)
            second = arr[i];
    }

    cout << "Second Largest: " << second;

    return 0;
}