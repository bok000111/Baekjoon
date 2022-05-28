#include <cstdio>
#include <queue>

int main() {
    int cnt=0;
    int num;
    
    scanf("%d", &num);
    
    int n, m, ipt;
    
    for(int i = 0; i < num; i++) {
        cnt = 0;
        scanf("%d %d", &n, &m);
        std::queue<std::pair<int, int>> q;
        std::priority_queue<int> pq;
        for (int j = 0; j < n; ++j) {
            scanf("%d", &ipt);
            q.push({ j, ipt });
            pq.push(ipt);
        }
        while (!q.empty()) {
            int idx = q.front().first;
            int val = q.front().second;
            q.pop();
            if (pq.top() == val) {
                pq.pop();
                ++cnt;
                if (idx == m) {
                    printf("%d\n", cnt);
                    break;
                }
            }
            else q.push({idx, val});
        }
    }
    
    return 0;
}