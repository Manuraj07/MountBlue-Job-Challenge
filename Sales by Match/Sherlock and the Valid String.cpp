#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string isValid(string s) {
    unordered_map<char, int> charCount;
    unordered_map<int, int> countFrequency;

    for (char ch : s) {
        charCount[ch]++;
    }

    for (const auto &entry : charCount) {
        countFrequency[entry.second]++;
    }

    if (countFrequency.size() == 1) {
        return "YES"; // All characters have the same frequency
    }

    if (countFrequency.size() == 2) {
        auto it1 = countFrequency.begin();
        auto it2 = ++countFrequency.begin();

        int freq1 = it1->first;
        int count1 = it1->second;
        int freq2 = it2->first;
        int count2 = it2->second;

        if ((count1 == 1 && (freq1 - 1 == freq2 || freq1 == 1)) || 
            (count2 == 1 && (freq2 - 1 == freq1 || freq2 == 1))) {
            return "YES"; // One character can be removed to make frequencies equal
        }
    }

    return "NO";
}

int main() {
    string s;
    cin >> s;
    cout << isValid(s) << endl;
    return 0;
}
