#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Global variable to track total elements processed
int totalElementsProcessed = 0;

// Structure to hold results
struct Stats {
    int sum;
    double average;
    int maximum;
};

// Function to compute sum, average, and max
Stats computeStats(const vector<int>& arr) {
    Stats s;
    s.sum = 0;
    s.maximum = arr[0];

    for (int num : arr) {
        s.sum += num;
        if (num > s.maximum)
            s.maximum = num;
    }

    s.average = static_cast<double>(s.sum) / arr.size();

    // Update global counter
    totalElementsProcessed += arr.size();

    return s;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Compute statistics
    Stats result = computeStats(arr);

    cout << "\nSum: " << result.sum << endl;
    cout << "Average: " << result.average << endl;
    cout << "Maximum: " << result.maximum << endl;

    // Lambda function to sort in descending order
    sort(arr.begin(), arr.end(), [](int a, int b) {
        return a > b;
    });

    cout << "\nArray sorted in descending order:\n";
    for (int num : arr) {
        cout << num << " ";
    }

    cout << "\n\nTotal elements processed so far: "
         << totalElementsProcessed << endl;

    return 0;
}
