#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Interval {
public:
	int start;
	int end;

	Interval() {
		start = 0;
		end = 0; 
	}

	Interval(int s, int e) {
		start = s;
		end = e;
	}

};

class Solution {
public:
	vector<Interval> insert(vector<Interval> intervals, Interval newINterval){
		int i = 0;

		if( intervals.size() == 0){
			intervals.push_back(newINterval);
			return intervals;
		}
		
		Interval toInsert = newINterval;
		while(i < intervals.size()) {
			Interval current = intervals[i];
			if (current.end < toInsert.start) {
				i++;
				continue;
			} else if(toInsert.end < current.start) {
				intervals.insert(intervals.begin()+i, toInsert);
				break;	
			} else {
				toInsert.start = min(toInsert.start, current.start);
				toInsert.end = max(toInsert.end, current.end);
				intervals.erase(intervals.begin()+i);
			}
		}

		if(i == intervals.size()) {
			intervals.push_back(toInsert);
		}

		return intervals;
	}
};

int main() {

	vector<Interval> res = {Interval(1,4), Interval(6, 8), Interval(9, 14)};
	Interval toInsert = (Interval(3, 5));

	Solution s;
	vector<Interval> ans = s.insert(res, toInsert);

	for (auto i: ans) {
		cout<<"("<<i.start<<", "<<i.end<<"), ";
	}

	return 0;
}