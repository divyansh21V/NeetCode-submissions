class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {return s; }
        string res;
        int len = s.size();
        for (int i = 0 ; i < numRows ;i++){
            int increment = 2*(numRows - 1);
            for(int j = i ; j < len ;j += increment){
                res += s[j];
                if ( i > 0 && i < numRows-1 && j+increment-(2*i) < len){
                   res += s[j+increment - 2*i];  
                }
            }
        }
        return res;
        
    }
};