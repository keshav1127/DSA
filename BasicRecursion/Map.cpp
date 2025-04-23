#include <bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int>& v) {
    map<int, int> freq;
    int n = v.size();

    // Count frequencies
    for (int x : v) {
        freq[x]++;
    }

    // Track min and max frequency elements
    int maxFreq = 0, minFreq = n + 1;
    int maxElem = -1, minElem = -1;

    for (auto& [val, count] : freq) {
        if (count > maxFreq || (count == maxFreq && val < maxElem)) {
            maxFreq = count;
            maxElem = val;
        }
        if (count < minFreq || (count == minFreq && val < minElem)) {
            minFreq = count;
            minElem = val;
        }
    }

    return {maxElem, minElem};
}

int main() {
  

    vector<int> v={1,1,1,2,2,3,3,7,7,7,7,7,7};
   

    vector<int> result = getFrequencies(v);

    cout << "Highest frequency element: " << result[0] << endl;
    cout << "Lowest frequency element: " << result[1] << endl;

    return 0;
}
