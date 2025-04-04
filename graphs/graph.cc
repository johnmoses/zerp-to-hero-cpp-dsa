// from cracking the coding interview

#include <iostream>
#include <queue>
#include <cstring>
#include <cstdio>
#include <stdio.h>

using namespace std;

const int maxn = 100;
bool g[maxn][maxn], visited[maxn];
int n;
queue<int> q;

void init() {
    memset(g,false,sizeof(g));
    memset(visited,false,sizeof(visited));
}

bool route(int src, int dst) {
    q.push(src);
    visited[src] = true;
    while (!q.empty()) {
        int t = q.front();
        q.pop();
        if (t == dst) return true;
        for (int i = 0; i < n; ++i) {
            if (g[t][i] && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
    return false;
}

// this has segmentation fault
int main() {
    cout << "Graph example" << endl;

    freopen("graph.in", "r", stdin);
    init();
    int m, u, v;
    for (int i = 0; i < m; ++i) {
        cin >> u >> v;
        g[u][v] = true;
    }

    cout << route(0, 6) << endl;
    fclose(stdin);

    return 0;
}