#include <bits/stdc++.h>

using namespace std;

int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(), prices.end());
    int maxToys = 0, spent = 0;
    
    for (int i = 0; i < prices.size() && spent + prices[i] <= k; i++) {
        spent += prices[i];
        maxToys++;
    }
    
    return maxToys;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> prices(n);
    
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    int result = maximumToys(prices, k);
    cout << result << endl;
    
    return 0;
}
