class Solution {
public:
    int minLength(string s) {
        int n = s.size();
        //vector<int> st = to_int(s);
        
        for(int i = 0; i<n-1; i++){
            if((s[i] == 'A') && (s[i+1] == 'B')){
                s.erase(i,2);
                i=-1;
                
            }
            else if((s[i] == 'C') && (s[i+1] == 'D')){
                s.erase(i,2);
                i=-1;
                
            }
        }
        int res = s.size();
        
        return res;
    }
};