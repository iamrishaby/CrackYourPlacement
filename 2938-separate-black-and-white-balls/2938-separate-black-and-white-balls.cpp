class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.size();
        long long count = 0;
        int zero = 0;
        for(int i = n-1; i>=0; i--){
            if(s[i] == '0'){
                zero++;
                cout<<zero<<endl;
            }
            else{
                count = count + zero;
                cout<<count<<endl;
            }
        }

        return count;
    }
};