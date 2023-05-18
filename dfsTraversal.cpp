#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;



void dfs(unordered_map<int,list<int>> &mp, unordered_map<int,bool> &bp,int start){
  if(bp[start] == 1) {
        return;
  }

  cout<<start<<endl;
  bp[start] = 1;

  for(auto i : mp[start]) {
    dfs(mp,bp,i);
  }


}

int main() {
    unordered_map<int,list<int>> mp;
    unordered_map<int,bool> bp;
    int edges;

    cout<<"Enter Number of Edges: ";
    cin>>edges;

    for(int i = 0; i<edges; i++) {
        int u,v;
        cin>>u>>v;
        mp[u].push_back(v);
        mp[v].push_back(u);
    }

    dfs(mp,bp,1);

}
