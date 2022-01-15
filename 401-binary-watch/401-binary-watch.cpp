class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>ans;
        string res="";
        for(int hr=0;hr<12;hr++){
            for(int min=0;min<60;min++){
                res="";
                if(__builtin_popcount(hr)+__builtin_popcount(min)==turnedOn){
                    res+=to_string(hr);
                    res+=":";
                    if(min<10){
                        res+="0";
                    }
                    res+=to_string(min);
                    ans.push_back(res);
                }
            }
        }
        return ans;
    }
};