#include<bits/stdc++.h>
using namespace std;

int makingAnagrams(string s1, string s2) {
    vector<int> count(26, 0);
    
    for (char ch : s1) count[ch - 'a']++;
    for (char ch : s2) count[ch - 'a']--;
    int ans = 0;
    for (int ch : count) ans += abs(ch);
    return ans;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << makingAnagrams(s1, s2) << endl;
    return 0;
}
