class Solution {
public:
    #define ll long long
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        int n = p.size(), m = t.size(); 
        sort(p.begin(), p.end()); 
        sort(t.begin(), t.end()); 
        int st = 0, ans = 0; 
        for (auto &i : p) {
            auto it = lower_bound(t.begin() + st, t.end(), i); 
            if (it == t.end()) break; 
            st = (it - t.begin()) + 1; 
            ++ans; 
        }
        return ans; 
    }
};