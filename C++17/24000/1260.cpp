#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    std::vector<short> graph[1001];
    bool visit[1001];
    short n, m, r, tmp;

    std::cin >> n >> m >> r;

    short a, b;

    for(short i = 0; i < m; i++) {
        std::cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(short i = 1; i <= n; i++) {
        std::sort(graph[i].begin(), graph[i].end());
    }

    short depth = 1, v = r;
    std::stack<short> dfs;
    dfs.push(v);
    
    while(!dfs.empty()) {
        v = dfs.top();
        dfs.pop();
        if(!visit[v]) {
            visit[v] = 1;
            std::cout << v << ' ';
            tmp = graph[v].size();
            for(short i = tmp-1; i >= 0; i--) {
                if(!visit[graph[v][i]]) {
                    dfs.push(graph[v][i]);
                }
            }
        }
    }

    for(short i = 1; i <= n; i++) {
        visit[i] = 0;
    }
    std::cout << '\n';

    depth = 1, v = r;
    std::queue<short> bfs;
    bfs.push(v);
    visit[0] = true;

    while(!bfs.empty()) {
        v = bfs.front();
        bfs.pop();
        if(!visit[v]) {
            visit[v] = 1;
            std::cout << v << ' ';
            tmp = graph[v].size();
            for(int i = 0; i < tmp; i++) {
                if(!visit[graph[v][i]]) {
                    bfs.push(graph[v][i]);
                }
            }
        }
    }


    return 0;
}