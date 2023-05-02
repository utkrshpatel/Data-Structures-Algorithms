#include <iostream>
#include <unordered_map>
#include <set>
#include <queue>
using namespace std;
unordered_map<int,set<int>>mp;

void addEdge(int u, int v) {
    mp[u].insert(v);
    mp[v].insert(u);


}

void BFStraversal(int start) {
    unordered_map<int,bool>bp;
    queue<int>q;
    
  q.push(start);
   while(!q.empty()) {
        int frontNode = q.front();
        if(bp[frontNode]!=1) {
            bp[frontNode] = 1;
            q.pop();
            cout<<frontNode<<endl;
            for (auto j : mp[frontNode]) {
            if (bp[j] != 1) {
                q.push(j);
            }
            }

        }
   }
    

}

void printList() {
    for(auto i:mp) {
        cout<<i.first<<"->";
        for(auto j : i.second) {
            cout<<j<<" ";
        }
        cout<<endl;

    }
}

int main() {
    int n,start;
    cout<<"Enter Number of Edges: ";
    cin>>n;

    for(int i = 1; i<=n; i++) {
        int u,v;
        cin>>u>>v;
        addEdge(u,v);



    }

    cout<<"Enter Start: ";
    cin>>start;
    BFStraversal(start);

}