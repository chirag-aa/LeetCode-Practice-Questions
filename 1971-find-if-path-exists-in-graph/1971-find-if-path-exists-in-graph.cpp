class Solution {
public:
    
    bool pathExist(int src,int desti,vector<vector<int>>& graph,vector<bool>& visited){
        if(src==desti){
            return true;
        }
        
        if(visited[src]==true){
            return false;
        }
        
        visited[src]=true;
        bool status=false;
        for(int i=0;i<graph[src].size();i++){
            status= status || pathExist(graph[src][i],desti,graph,visited);
        }
        return status;
        
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination)    {
        
        if(source==destination){
            return true;
        }
        
        // populating the graph using adjancency list
        
        vector<vector<int>>graph(n);
        
        
        for(int i=0;i<edges.size();i++){
            int v1=edges[i][0];
            int v2=edges[i][1];
            
            graph[v1].push_back(v2);
            graph[v2].push_back(v1);
        }
        
        vector<bool>visited(n,false);
        return pathExist(source,destination,graph,visited);
    }
};