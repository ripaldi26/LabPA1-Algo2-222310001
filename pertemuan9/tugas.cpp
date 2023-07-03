#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> path;
int minCost = INT_MAX;

void findShortestPath(vector<vector<int>>& costMatrix, vector<bool>& visited, int currentCity, int totalCost, int citiesVisited) {
    if (citiesVisited == visited.size() && costMatrix[currentCity][0] != 0) {
        totalCost += costMatrix[currentCity][0];
        if (totalCost < minCost) {
            minCost = totalCost;
            path.push_back(currentCity + 1);
        }
        return;
    }

    for (int i = 0; i < visited.size(); i++) {
        if (!visited[i] && costMatrix[currentCity][i] != 0) {
            visited[i] = true;
            path.push_back(currentCity + 1);
            findShortestPath(costMatrix, visited, i, totalCost + costMatrix[currentCity][i], citiesVisited + 1);
            path.pop_back();
            visited[i] = false;
        }
    }
}

int main() {
    int jumlahKota;
    cout << "Masukkan jumlah kota: ";
    cin >> jumlahKota;

    vector<vector<int>> costMatrix(jumlahKota, vector<int>(jumlahKota));

    cout << "Nilai cost matrix\n";
    for (int i = 0; i < jumlahKota; i++) {
        cout << "Cost element baris ke-" << (i + 1) << ": " << endl;
        for (int j = 0; j < jumlahKota; j++) {
            cin >> costMatrix[i][j];
        }
    }

    cout << "Output:\n";
    for (int i = 0; i < jumlahKota; i++) {
        for (int j = 0; j < jumlahKota; j++) {
            cout << costMatrix[i][j] << " ";
        }
        cout << endl;
    }

    vector<bool> visited(jumlahKota, false);
    visited[0] = true;
    findShortestPath(costMatrix, visited, 0, 0, 1);

    cout << "\nJalur terpendek:\n";
    for (int i = 0; i < path.size(); i++) {
        cout << path[i];
        if (i != path.size() - 1) {
            cout << "---->";
        }
    }

    cout << "\n\nMinimum cost: " << minCost << endl;

    return 0;
}
