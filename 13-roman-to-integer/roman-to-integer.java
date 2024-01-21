class Solution {
    public int romanToInt(String s) {
        HashMap<Character,Integer>mpp = new HashMap<>();
        mpp.put('I',1);
        mpp.put('V',5);
        mpp.put('X',10);
        mpp.put('L',50);
        mpp.put('C',100);
        mpp.put('D',500);
        mpp.put('M',1000);

        int n = s.length();
        int ans = 0;
        for(int i=0;i<n;i++){
            if(i+1<n && s.charAt(i+1)=='V' && s.charAt(i)=='I'){
                ans = ans + 4;
                i++;
            
            }
            else if(i+1<n && s.charAt(i+1)=='X' && s.charAt(i)=='I'){
                ans = ans + 9;
                i++;
                
            }
            else if(i+1<n && s.charAt(i+1)=='L' && s.charAt(i)=='X'){
                ans = ans + 40;
                i++;
                
            }
            else if(i+1<n && s.charAt(i+1)=='C' && s.charAt(i)=='X'){
                ans = ans + 90;
                i++;
                
            }
            else if(i+1<n && s.charAt(i+1)=='D' && s.charAt(i)=='C'){
                ans = ans + 400;
                i++;
                
            }
            else if(i+1<n && s.charAt(i+1)=='M' && s.charAt(i)=='C'){
                ans = ans + 900;
                i++;
            
            }
            else {
                char ch = s.charAt(i);
                int value = mpp.get(ch);
                ans = ans + value;
            }
        }
        return ans;
    }
}