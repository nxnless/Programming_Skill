#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin>>N>>M;
    int Height[N];
    int Press[M];
    for (int i = 0; i < N; ++i) {
        cin >> Height[i];
    }
    for (int j = 0; j < M; ++j) {
        cin >> Press[j];
    }
    for (int j = 0; j < M; ++j) {
        int Count = 0;

        for (int i = 0; i < N; ++i) {
            if (Height[i] > Press[j]) {
                ++Count;
            }
        }

        cout << Count << endl;
    }
    return 0;
}

