class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int size=arr.size();
        if(n==1 && size==1 && arr[0]==0){
            return true;
        }
        for(int i=0;i<size;i++){
            if(n==0){
                return true;
            }
            if(i==0 && arr[i]==0 && i+1<size && arr[i+1]==0){
                arr[i]=1;
                n=n-1;
            }
            else if(arr[i]==0 && i-1>=0 && arr[i-1]==0 && i==size-1){
                arr[i]=1;
                n=n-1;
               
            }
            else if(arr[i]==0 && i+1<size && i-1>=0 && arr[i+1]==0 && arr[i-1]==0){
                arr[i]=1;
                n=n-1;
            }
        }
         if(n==0){
                    return true;
                }
        return false;
    }
};