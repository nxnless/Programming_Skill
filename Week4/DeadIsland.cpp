#include <iostream>
using namespace std;

void dead_I(){
    int W, H;
    cin >> W>>H;
    int arr[H][W];

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (arr[i][j] == 1) {
                int count = 0;
                for (int m = i - 1; m <= i + 1; ++m) {
                    for (int n = j - 1; n <= j + 1; ++n) {
                        if (m >= 0 && m < H && n >= 0 && n < W && arr[m][n] == 1) {
                            count++;
                        }
                    }
                }
                if (count < 3) {
                    cout << "No" << endl;
                    return;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return;
}

int main(){
	dead_I();
}
