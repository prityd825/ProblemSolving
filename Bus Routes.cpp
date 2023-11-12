problem_link: https://leetcode.com/problems/bus-routes/description/?envType=daily-question&envId=2023-11-12
class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {

        if (source == target) return 0;
        unordered_map<int, unordered_set<int>> stop2bus;
        for (int bus = 0; bus < routes.size(); bus++) {
            for (auto& stop : routes[bus]) stop2bus[stop].insert(bus);
        }
        queue<int> q;
        unordered_set<int> bus_taken;
        for (auto& bus : stop2bus[source]) {
            q.push(bus);
            bus_taken.insert(bus);
        }

        int step = 1;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                int bus = q.front();
                q.pop();
                for (auto& next_stop : routes[bus]) {
                    if (next_stop == target) return step;
                    for (auto& next_bus : stop2bus[next_stop]) {
                        if (bus_taken.count(next_bus) != 0) continue;
                        bus_taken.insert(next_bus);
                        q.push(next_bus);
                    }
                }
            }
            step++;
        }

        return -1;
    }
};
