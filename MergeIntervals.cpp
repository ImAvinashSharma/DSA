    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergeIntervals;
        if(intervals.size()==0)
            return mergeIntervals;
        sort(intervals.begin(),intervals.end());
        vector<int> tmpInterval=intervals[0];
        for(auto it : intervals){
            if(it[0]<=tmpInterval[1]){
                tmpInterval[1]=max(it[1],tmpInterval[1]);
            }else{
                mergeIntervals.push_back(tmpInterval);    
                tmpInterval=it;
            }
        }
        mergeIntervals.push_back(tmpInterval);
        return mergeIntervals;
    }
