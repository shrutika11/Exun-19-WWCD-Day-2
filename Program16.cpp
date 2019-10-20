#include <iostream>
#include<algorithm>
using namespace std;
class edge{
  
    int src;
    int dest;
    int weight;
 public:
  void retweight()
  {
    return weight;
  } 
};
bool compare(edge a, edge b){
    return a.retweight() < b.retweight();
}
int findp(int v,int parent[]){
    if(parent[v] == v)
        return v;
    else 
        return findp(parent[v], parent);
        
}
void function(edge* input, int v, int e){
    edge output = new edge[v - 1];
    int i = 0, count = 0;
    int* parent = new int[v];
    for(int j = 0; j < v; j++)
        parent[j] = j;
    while(count != v - 1){
        edge cur = input[i];
        int srcp = findp(cur.src, parent);
        int destp = findp(cur.dest, parent);
        if(srcp != destp){
            output[count] = cur;
        }
        i++;
    } 
    for(int j = 0; j < v - 1; j++){
        if(output[j].src < output[j].dest)
            cout << output[j].src << " " << output[j].dest << " " << output[j].weight << endl;
        else
            cout << output[j].dest << " " << output[j].src << " " << output[j].weight << endl;
    }
    delete []parent;
    delete []output;
}
int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;
   edge* input = new edge[E];
    for(int i = 0; i < E; i++){
        int u, v , w;
        cin >> u >> v >> w;
        input[i].src = u;
        input[i].dest = v;
        input[i].weight = w;
    }
    sort(input , input + E, compare);
    function(input, V, E);
    delete []input;
  return 0;
}
