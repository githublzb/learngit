#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());   
        int count = 0;
        int n = costs.size();
        for (int i = 0; i < n; i++) {
            int cost = costs[i];
            if (coins >= cost) {
                coins -= cost;
                count++;
            }
            else {
                break;
            }
        }
        return count;
    }
};


int main() {
    vector<int> input = {2, 3, 6, 1, 4};
    
    Solution solution;
    int output;
    int coins = 10;
    output = solution.maxIceCream(input,coins);
    cout << output << endl;
    
    return 0;
}