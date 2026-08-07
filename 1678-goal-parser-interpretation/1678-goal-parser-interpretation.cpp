class Solution {
public:
    string interpret(string command) {
        string goal = "";
        for (int i = 0; i < command.size(); i++) {
            if (command[i] == 'G') {
                goal += 'G';
            }
            if (command[i] == '(' && command[i + 1] == ')') {
                goal += 'o';
            }
            if (command[i] == '(' && command[i + 1] == 'a' &&
                command[i + 2] == 'l' && command[i + 3] == ')') {
                goal += 'a';
                goal += 'l';
            }
        }
        return goal;
    }
};