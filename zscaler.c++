#include <bits/stdc++.h>

using namespace std;

// Helper function to convert a list of bit indices to the corresponding binary number



// int toBinary(const vector<int>& bits) {
//     int value = 0;
//     for (int idx : bits) {
//         value |= (1 << idx);  // Set the corresponding bit
//     }
//     return value;
// }

vector<int> sortBinaryNumbers(vector<vector<int>> a) {
    // Create a vector of pairs to store the binary value and their original index
    // vector<pair<int, int>> binValues;

    // // Convert each set of indices to a binary number and store them with their index
    // for (int i = 0; i < bitArrays.size(); i++) {
    //     binValues.push_back({toBinary(bitArrays[i]), i});
    // }

    // // Sort the pairs by the binary value in descending order
    // sort(binValues.begin(), binValues.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    //     return a.first > b.first;
    // });

    // // Prepare the result vector with the sorted indices
    // vector<int> result;
    // for (const auto& p : binValues) {
    //     result.push_back(p.second);
    // }

    // return result;


    int n = a.size(), m = a[0].size();
    vector<int> ord(n);
    iota(ord.begin(), ord.end(),0);
    
    for (int i = 0; i < n; i++) {
        sort(a[i].begin(), a[i].end(), greater<int>());
    }
    
    sort(ord.begin(), ord.end(),[&](int l, int r) {
        return a[l] > a[r];
    });
    
    return ord;
}

int main() {
    // Example usage
    vector<vector<int>> bitArrays = {{0, 2}, {2, 3}, {2, 1}};

    vector<int> result = sortBinaryNumbers(bitArrays);

    // Print the sorted indices
    for (int index : result) {
        cout << index << " ";
    }

    return 0;
}