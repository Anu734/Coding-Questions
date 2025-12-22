class Solution {
public:
    int hIndex(std::vector<int>& citations) {
        auto start = std::begin(citations);
        auto left = std::begin(citations);
        auto right = std::end(citations);

        while (auto range = std::distance(left, right)) {
            auto mid = std::next(left, range / 2);
            std::nth_element(left, mid, right, std::greater{});

            if (*mid > std::distance(start, mid)) {
                left = std::next(mid); 
            } else { 
                right = mid;
            }      
        }
        return std::distance(start, left);
    }
};