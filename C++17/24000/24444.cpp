#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    std::vector<std::vector<int>> graph;
    bool *visit;
    int *srt;
    int n, m, r;

    std::cin >> n >> m >> r;

    graph.resize(n+1);
    visit = new bool[m+1];
    srt = new int[n+1];

    int a, b;

    for(int i = 0; i < m; i++) {
        std::cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 1; i <= n; i++) {
        std::sort(graph[i].begin(), graph[i].end());
    }

    int cnt = 1, v = r;
    std::queue<int> bfs;
    bfs.push(v);

    while(!bfs.empty()) {
        v = bfs.front();
        bfs.pop();
        if(!visit[v]) {
            visit[v] = 1;
            srt[v] = cnt++;
            int tmp = graph[v].size();
            for(int i = 0; i < tmp; i++) {
                if(!visit[graph[v][i]]) {
                    bfs.push(graph[v][i]);
                }
            }
        }
    }
    
    for(int i = 1; i <= n; i++) {
        std::cout << srt[i] << '\n';
    }

    delete []visit;
    delete []srt;
    return 0;
}