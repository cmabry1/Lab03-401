#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int totalElementsProcessed = 0;
struct Stats {
    int sum;
    double average;
    int maximum;
};
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
    Stats result = computeStats(arr);
    cout << "\nSum: " << result.sum << endl;
    cout << "Average: " << result.average << endl;
    cout << "Maximum: " << result.maximum << endl;
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
