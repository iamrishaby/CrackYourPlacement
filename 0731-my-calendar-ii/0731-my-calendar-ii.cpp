class MyCalendarTwo {
public:
    
    vector<pair<int, int>> doubleoverlappedregion;
    vector<pair<int, int>> overallbooking;
    
    bool checkoverlap(int start1,int end1, int start2, int end2){
        return max(start1, start2) < min(end1,end2);
    }
    
    pair<int, int> findoverlappedregion(int start1, int end1, int start2, int end2){
        return {max(start1,start2), min(end1,end2)};
    }
    
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        //check if tripple booking is being created or not
        for(pair<int, int> region : doubleoverlappedregion){
            if(checkoverlap(region.first, region.second, start, end)){
                return false;
            }
        }
        
        //check if it is creating double bookings
        for(pair<int, int> booking: overallbooking){
            if(checkoverlap(booking.first, booking.second, start, end)){
                doubleoverlappedregion.push_back(findoverlappedregion(booking.first, booking.second, start, end));
            }
        }
        
        overallbooking.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */