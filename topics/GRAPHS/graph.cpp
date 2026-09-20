#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
using namespace std;

// ->>>>>>>
// thourgh Adjacency List
// ->>>>>>


class Graph{
    int V;                          // size of graph
    list<int>* l;                   // list of nodes or vertex in graph

public:
    Graph(int V){                // constructor
        this->V = V;
        l = new list<int>[V];
    }


    // Add Edge function
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }



    //Remove edge function
    void removeEdge(int u, int v){
        l[u].remove(v);
        l[v].remove(u);
    }



    // Has Edge
    bool hasEdge(int u, int v){
        for(int neigh : l[u]){
            if(neigh == v){
                return true;
            }
        }
        return false;
    }



    //BFS
    void BFS(int root){
        vector<bool>visited(V,false);
        queue<int>q;

        visited[root] = true;
        q.push(root);

        while(!q.empty()){
            int curr = q.front();
            q.pop();

            cout << curr << " ";  // id in leetcode style add it in vector of ans

            for(int neigh : l[curr]){
                if(!visited[neigh]){ // means neigh is not visited
                    visited[neigh] = true;
                    q.push(neigh);
                }
            }
        }
        cout << endl;
    }



    void DFS(int root){
        vector<bool> visited(V,false);    // size, visited = false
        stack<int> s;

        s.push(root);        // first push root to stack

        while(!s.empty()){
            int curr = s.top();    // store root in curr then pop
            s.pop();

            if(visited[curr]) continue;     // if already visited then leave and continue other

            visited[curr] = true;           // else mark it visited then print
            cout << curr << " ";

            for(int neigh : l[curr]){       // then check if neigh is visited else push it into stack 
                if(!visited[neigh]){
                    s.push(neigh);
                }
            }
        }
        cout << endl;
    }



    //Degree

    int degree(int u){            // means for a node how many edges are their
        return l[u].size();       // u means root v means neighbourr
    }


    // Connected
    bool isConnected(int root){
        vector<bool>visited(V,false);
        queue<int> q;

        q.push(root);

        while(!q.empty()){
            int curr = q.front();
            q.pop();

            visited[curr] = true;
            cout << curr << " ";

            for(int neigh : l[curr]){
                if(!visited[neigh]){
                    visited[neigh] = true;
                    q.push(neigh);
                }
            }
        }

        for(bool b : visited){
            if(!b) return false;
        }
        return true;
    }













    void print(){
        for(int i=0; i<V; i++){
            cout << i << " -> ";
            for(int neigh : l[i]){
                cout << neigh << " ";
            }
            cout << endl;
        }
    }
};

int main(){

    Graph g1(5);

    g1.addEdge(0, 1);
    g1.addEdge(0,2);
    g1.addEdge(0,3);
    g1.addEdge(1,2);
    g1.addEdge(1,3);


    g1.print();
    g1.BFS(0);
    g1.DFS(0);
    cout << g1.degree(0) << endl;
    cout << g1.degree(2) << endl;


    return 0;
}