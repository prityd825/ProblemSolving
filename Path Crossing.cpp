class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        unordered_set<string> visited;
        visited.insert("0,0");

        for (char direction : path) {
            // Update current position based on the direction
            if (direction == 'N') {
                y++;
            } else if (direction == 'S') {
                y--;
            } else if (direction == 'E') {
                x++;
            } else if (direction == 'W') {
                x--;
            }

            // Check if the current position has been visited before
            string currentPosition = to_string(x) + "," + to_string(y);
            if (visited.count(currentPosition) > 0) {
                return true;
            }

            // Mark the current position as visited
            visited.insert(currentPosition);
        }

        return false;
    }
};
