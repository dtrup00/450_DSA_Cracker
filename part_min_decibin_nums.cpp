class Solution {
public:
    int minPartitions(string n) {
        int minNum = INT_MIN;
        for(int i=0; i<n.size(); i++) {
            minNum = max(minNum, n[i]-'0');
        }
        return minNum;
    }
};