#include <iostream>

using namespace std;

int howManyGames(int p, int d, int m, int s) {
    int games = 0;

    while (s >= p) {
        games++;
        s -= p;
        p = max(p - d, m);
    }

    return games;
}

int main() {
    int p, d, m, s;
    cin >> p >> d >> m >> s;

    int result = howManyGames(p, d, m, s);
    cout << result << endl;

    return 0;
}
