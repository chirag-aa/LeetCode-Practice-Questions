class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n= edges.size();
        set<int>temp;
       
        for(int i=0;i<n;i++){
            vector<int>it=edges[i];
            temp.insert(it[0]);
            temp.insert(it[1]);
        }
        int size=temp.size();
        vector<int>result(size+1,0);
         for(int i=0;i<n;i++){
            vector<int>it=edges[i];
            result[it[0]]++;
            result[it[1]]++;
        }
        for(int i=1;i<result.size();i++){
            if(result[i]==size-1){
                return i;
            }
        }
        return 0;
    }
};