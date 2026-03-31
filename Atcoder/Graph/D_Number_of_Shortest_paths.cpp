#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> adj(N + 1);

    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    vector<int> dist(N + 1, -1);
    vector<long long> ways(N + 1, 0);

    queue<int> q;

    dist[1] = 0;
    ways[1] = 1;
    q.push(1);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {

            // first visit
            if (dist[v] == -1)
            {
                dist[v] = dist[u] + 1;
                ways[v] = ways[u];
                q.push(v);
            }

            // another shortest path
            else if (dist[v] == dist[u] + 1)
            {
                ways[v] = (ways[v] + ways[u]) % MOD;
            }
        }
    }

    cout << ways[N] % MOD << "\n";
}