#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

int main() {

    std::vector<short> graph[1001];
    bool visit1[1001], visit2[1001];
    short n, m, r, tmp;

    scanf("%hd %hd %hd", &n, &m, &r);

    short a, b;

    for(short i = 0; i < m; i++) {
        scanf("%hd %hd", &a, &b);
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
        if(!visit1[v]) {
            visit1[v] = 1;
            printf("%hd ", v);
            tmp = graph[v].size();
            for(short i = tmp-1; i >= 0; i--) {
                if(!visit1[graph[v][i]]) {
                    dfs.push(graph[v][i]);
                }
            }
        }
    }

    printf("\n");

    depth = 1, v = r;
    std::queue<short> bfs;
    bfs.push(v);
    visit2[0] = true;

    while(!bfs.empty()) {
        v = bfs.front();
        bfs.pop();
        if(!visit2[v]) {
            visit2[v] = 1;
            printf("%hd ", v);
            tmp = graph[v].size();
            for(int i = 0; i < tmp; i++) {
                if(!visit2[graph[v][i]]) {
                    bfs.push(graph[v][i]);
                }
            }
        }
    }


    return 0;
}