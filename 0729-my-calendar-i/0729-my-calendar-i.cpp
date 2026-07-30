class MyCalendar {
public:vector<vector<int>> cal;

    MyCalendar() {
      
    }
    
    bool book(int startTime, int endTime) {
        for(auto &x:cal){
            int st=x[0];
            int ed=x[1];
            if(ed>startTime&&endTime>st) return false;
        }
        cal.push_back({startTime,endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */