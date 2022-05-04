class Solution {
public:
    void updateGrid(vector<vector<int>>& image,int sr,int sc,int newColor,int n,int target,vector<vector<bool>>& visited){
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size() || image[sr][sc]!=target || image[sr][sc]==newColor){
            return;
        }
        // if(visited[sr][sc]==true){
        //     return;
        // }
        if(image[sr][sc]==target){
            image[sr][sc]=newColor;
        }
      //  visited[sr][sc]=true;
        
        updateGrid(image,sr+1,sc,newColor,n,target, visited);
        updateGrid(image,sr-1,sc,newColor,n,target, visited);
        updateGrid(image,sr,sc+1,newColor,n,target, visited);    
        updateGrid(image,sr,sc-1,newColor,n,target, visited);
           
        return;   
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image.size();
        int target=image[sr][sc];
        vector<vector<bool>>visited(n,vector<bool>(n,false));
        updateGrid(image,sr,sc,newColor,n,target,visited);
        return image;
    }
};