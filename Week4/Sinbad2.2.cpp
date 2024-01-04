#include <iostream>
#include <vector>

using namespace std;

bool isValid(int x, int y, int width, int height) {
    return 0 <= x && x < width && 0 <= y && y < height;
}

void dfs(int x, int y, int width, int height, vector<vector<bool>>& visited, vector<vector<int>>& data) {
    if (!isValid(x, y, width, height) || visited[y][x] || data[y][x] == 0) {
        return;
    }
    visited[y][x] = true;

    // Explore neighboring cells
    for (int dx : {-1, 0, 1}) {
        for (int dy : {-1, 0, 1}) {
            int nx = x + dx;
            int ny = y + dy;
            dfs(nx, ny, width, height, visited, data);
        }
    }
}

int countIslands(int width, int height, vector<vector<int>>& data) {
    vector<vector<bool>> visited(height, vector<bool>(width, false));

    int islandCount = 0;
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            if (!visited[y][x] && data[y][x] == 1) {
                ++islandCount;
                dfs(x, y, width, height, visited, data);
            }
        }
    }

    return islandCount;
}

int main() {
    int width, height;
    cin >> width >> height;

    vector<vector<int>> mapData(height, vector<int>(width, 0));
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            cin >> mapData[y][x];
        }
    }

    int result = countIslands(width, height, mapData);

    cout << result << endl;

    return 0;
}
