class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        int largest = INT_MIN;
        int secondlargest = INT_MIN;
        int smallest = INT_MAX;
        int secondsmallest = INT_MAX;
        for (int a : nums) {
            if (a > largest) {
                secondlargest = largest;
                largest = a;
            } else if (a > secondlargest) {
                secondlargest = a;
            }

            if (a < smallest) {
                secondsmallest = smallest;
                smallest = a;
            } else if (a < secondsmallest) {
                secondsmallest = a;
            }
        }
        int ans = (largest * secondlargest) - (smallest * secondsmallest);
        return ans;
    }
};