#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxprofit = 0;
        
        for (int p : prices) {
            if (p < minprice) {
                minprice = p;
            } else if ((p - minprice) > maxprofit) {
                maxprofit = p - minprice;
            }
        }
        return maxprofit;
    }
};
