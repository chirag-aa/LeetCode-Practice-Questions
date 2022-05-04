class Solution {
public:
    void findPath(vector<vector<int>>& graph,vector<vector<int>>& result,vector<int>& path,int n,int node ){
        
        
        if(node==n-1){
            path.push_back(node);
            result.push_back(path);
            path.pop_back();
            return;
        }
        path.push_back(node);
        for(int neighbour: graph[node]){
            findPath(graph,result,path,n,neighbour);
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int>path;
        int n=graph.size();
        int node=0;
        
        findPath(graph,result,path,n,node);
        return result;
    }
};