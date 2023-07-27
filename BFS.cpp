#include<iostream>
#include<vector>
#include<queue>
using namespace std;

const int N = 1e5+2;
vector<int>g[N];
bool visited[N];

void bfs(int source)
{
    queue<int>q;
    q.push(source);
    visited[source] = true;

    while(!q.empty())
    {
    	int cur_v = q.front();
    	q.pop();
    	cout<<cur_v<<" ";

    	for(int child : g[cur_v])
    	{
    		if(!visited[child])
    		{
    			q.push(child);
    			visited[child] = true;
       		}
    	}
    }
}

int main()
{
	int n;
	cin>>n;

	for(int i=0;i<n-1;i++)
	{
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}

	bfs(1);
}