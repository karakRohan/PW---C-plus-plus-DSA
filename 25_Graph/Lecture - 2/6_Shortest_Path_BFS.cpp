#include <bits/stdc++.h>
using namespace std;

// 1st graph banaenge
vector<list<int>>graph;
int v; // no of vertices
// visited set
unordered_set<int>visited;
// set<int>visited;
vector<vector<int>> result;
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void bfs(int src, int dest, vector<int> &dist){
    queue<int>qu; // queue for bfs
    visited.clear();
    dist.resize(v, INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    qu.push(src);
    while(not qu.empty()){
        int curr = qu.front();
        cout<<curr<<" ";
        qu.pop();
        for(auto neighbour : graph[curr]){
            if(not visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
    cout<<endl;
}

int main(){
    cin>>v;
    graph.resize(v, list<int>());
    int e; // no of edges
    cin>>e;
    visited.clear();
    while(e--){
        int src, dest; // source and destination
        cin>>src>>dest;
        add_edge(src, dest); // Directed Graph
    }
    int x, y; // source and destination
    cin>>x>>y;
    vector<int> dist;
    bfs(x, y, dist);
    //print distances
    for(int i = 0; i<dist.size(); i++){
        cout<<dist[i]<<" ";
    }
    return 0;
}






// Sample Input
/*
4
0 1
0 2
1 3
2 4
0 4
*/

// Sample Output
/*
0 1 1 2 2 
*/