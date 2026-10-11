
class Solution {
public:
    string solveEquation(string equation) {
        int variable = 0;
        int constant = 0;
        int equal = 1;
        int sign = 1;
        int n = equation.size();

        for (int i = 0; i < n;) {
            if (equation[i] == '=') {
                equal = -1;
                sign = equal;
                i++;
                continue;
            }
            if (equation[i] == '+') {
                sign = equal;
                i++;
                continue;
            }
            if (equation[i] == '-') {
                sign = -equal;
                i++;
                continue;
            }
            int num = 0;
            bool hasnum = false;
            while (i < n && isdigit(equation[i])) {
                num = num * 10 + (equation[i] - '0');
                hasnum = true;
                i++;
            }
            if (i < n && equation[i] == 'x') {
                variable += sign * (hasnum ? num : 1);
                i++;
            } else {
                constant += sign * num;
            }
            sign = equal;
        }
        if (variable == 0) {
            if (constant == 0)
                return "Infinite solutions";

            return "No solution";
        }
        int x = -constant / variable;
        return "x=" + to_string(x);
    }
};
