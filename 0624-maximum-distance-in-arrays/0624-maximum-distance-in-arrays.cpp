class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int global_min = arrays[0][0];
        int global_max = arrays[0].back();
        int max_diff = 0;
    
    // Start from the second array
    for (int i = 1; i < arrays.size(); ++i) {
        int current_min = arrays[i][0];
        int current_max = arrays[i].back();
        
        // Calculate the maximum differences with the current array
        max_diff = max(max_diff, abs(current_max - global_min));
        max_diff = max(max_diff, abs(global_max - current_min));
        
        // Update global_min and global_max for the next iteration
        global_min = min(global_min, current_min);
        global_max = max(global_max, current_max);
    }
    
    return max_diff;
    }
};