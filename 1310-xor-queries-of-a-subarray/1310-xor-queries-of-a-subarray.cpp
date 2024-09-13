class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        
        
        vector<int> cumxor(n,0); //space : 0(n)
        
        cumxor[0] = arr[0];
        
        for(int i = 1; i<n; i++){
            cumxor[i] = cumxor[i-1] ^ arr[i];
            
        }
        
        vector<int> result;
        for(vector<int>& query : queries){
            int l = query[0];
            int r = query[1];
            
            int xor_val = cumxor[r] ^ (l==0 ? 0 : cumxor[l-1]);
            
            result.push_back(xor_val);
        }
        
        return result;
    }
};