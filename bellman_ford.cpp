#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        vector<vector<int>> edges;

        for(int i=0;i<m; i++)
        {
            int u, v, w;
            cin>>u>>v>>w;

            edges.push_back({u,v,w});
        }

        int src;
        cin>>src;

        vector<int> dist(n, INT_MAX);

        dist[src] = 0;

        for(auto i = 0; i<n-1; i++)
        {
            for(auto x : edges)
            {
                int u = x[0];
                int v = x[1];
                int w = x[2];

                if(dist[u] != INT_MAX)
                {
                    dist[v] = min(dist[v], w + dist[u]);
                }
            }
        }

        for(auto i = 0; i<n-1; i++)
        {
            for(auto x : edges)
            {
                int u = x[0];
                int v = x[1];
                int w = x[2];
                
                if(dist[u] != INT_MAX &&  w + dist[u] < dist[v])
                {
                    cout<<"Graph Has Negative Cycle!";
                    return 0;
                }
            }
        }

        for(auto i : dist)
        {
            cout<<i<<" ";
        }
        cout<<"\n\n\n\n";
    }

    return 0;
}