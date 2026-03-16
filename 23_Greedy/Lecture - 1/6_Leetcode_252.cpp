#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMeetingRooms(vector<vector<int> > &intervals) {
        // Write your code here
        if(intervals.size() == 0) return 0;
        vector<int> start, ending;
        for(auto el : intervals){
            start.push_back(el[0]);
            ending.push_back(el[1]);
        }
        sort(start.begin(), start.end());
        sort(ending.begin(), ending.end());

        int ans = 0;
        int rooms = 0;
        int i = 0, j = 0;
        while(i < start.size() && j < ending.size()){
            if(start[i] < ending[j]){
                // a meeting is starting before the earliest ending meeting ends, we need a new room
                rooms++;
                ans = max(ans, rooms);
                i++;
            }
            else if(start[i] >= ending[j]){
                // a meeting is ending before the next meeting starts, we can free up a room
                rooms--;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        return ans;
    }
};

int main(){
    return 0;
}
