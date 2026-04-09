#include <bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
int v; // no of vertices
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void display(){
    for(int i = 0; i < graph.size(); i++){
         cout<<i<<" -> ";
        for(auto el : graph[i]){ // el = element
            cout<<el<<" , ";
        }   
        cout<<endl;
    }
}

int main(){
    
    cin>>v;
    graph.resize(v, list<int>());
    int e; // no of edges
    cin>>e;
    while(e--){
        int src, dest; // source and destination
        cin>>src>>dest;
        add_edge(src, dest, false);
    }
    display();
    return 0;
}