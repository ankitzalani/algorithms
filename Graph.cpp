using namespace std;

#include <iostream>
#include <list>

class Graph {
  private:
        int v;
        std::list<int> *list;
  public:
    Graph(int vertices) {
        v = vertices;
        list = new std::list<int>[vertices];
    }
    
    void addEdge(int u, int v) {
        list[u].push_front(v);
        list[v].push_front(u);
    }
    
    void printList() {
        for(int i=0;i<v;i++) {
            std::cout << "(" <<  i << ") ";
            std::list<int>::const_iterator itr;
            for(itr = list[i].begin();itr != list[i].end();++ itr) {
                cout << *itr << " -> ";
            }
            cout << "NULL" << endl;
        }
    }
};

int main() {
    
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);
    
    graph.printList();
    
    return 0;
}
