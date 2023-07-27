#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

const int N = 1e5+2;
vector<int>g[N];
bool visited[N];

void dfs(int source)
{
    cout<<source<<" ";
    visited[source] = true;
     for(int child : g[source])
     {
        if(!visited[child])
          dfs(child);
     }
}

int main()
{
    int n;
    cin>>n;
    int x,y;
        for(int i=0;i<n-1;i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1);
}