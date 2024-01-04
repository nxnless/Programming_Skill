#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> heights;
    vector<int> pressures(M);
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }
    for (int j = 0; j < M; ++j) {
        cin >> pressures[j];
    }
    for (int j = 0; j < M; ++j) {
        int broken_count = 0;
        for (int i = 0; i < N; ++i) {
            if (heights[i] > pressures[j]) {
                ++broken_count;
            }
        }
        cout << broken_count << endl;
    }

    return 0;
}

