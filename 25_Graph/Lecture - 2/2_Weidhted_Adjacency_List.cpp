#include <bits/stdc++.h>
using namespace std;

vector<list<pair<int, int>>>graph;
int v; // no of vertices
void add_edge(int src, int dest, int weight, bool bi_dir = true){
    graph[src].push_back({dest, weight});
    if(bi_dir){
        graph[dest].push_back({src, weight});
    }
}

void display(){
    for(int i = 0; i < graph.size(); i++){
         cout<<i<<" -> ";
        for(auto el : graph[i]){ // el = element
            cout<<el.first<<"("<<el.second<<") , ";
        }   
        cout<<endl;
    }
}

int main(){
    
    cin>>v;
    graph.resize(v, list<pair<int, int>>());
    int e; // no of edges
    cin>>e;
    while(e--){
        int src, dest; // source and destination
        int weight;
        cin>>src>>dest>>weight;
        add_edge(src, dest, weight, false);
    }
    display();
    return 0;
}