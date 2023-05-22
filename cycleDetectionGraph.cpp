#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;
//This Algorithm detects cycle in both directed as well undirected graph
int cycleDetection(unordered_map<int,list<int>>&adjlist,unordered_map<int,int>&p,unordered_map<int,bool>&visited,int start,int parent) {
    if(visited[start] == true) {
        if(p[parent]!= start){
            return 1;
        }
        return 0;
    }

    p[start] = parent;
    visited[start] = true;

    for(auto i : adjlist[start]) {
        if(cycleDetection(adjlist,p,visited,i,start) == 1){
            return 1;

        }

        
    }

    return 0;




    

}

int main() {
    
    unordered_map<int,list<int>>adjlist;
    unordered_map<int,bool>visited;
    unordered_map<int,int>p;
  

    int edges;
    cout<<"Enter Number of Edges: ";
    cin>>edges;

    for(int i = 0; i<edges; i++) {
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }



    if(cycleDetection(adjlist,p,visited,1,-1)==1){ //passing start in the argument with -1 as a parent for starting node
        cout<<"Cycle Exists";

    }

    else {
        cout<<"No Cycle Found";
    }

    
}