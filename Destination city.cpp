#include <vector>
#include <unordered_set>
#include <string>

class Solution {
public:
    std::string destCity(std::vector<std::vector<std::string>>& paths) {

        std::unordered_set<std::string> outgoingCities;

        for (const auto& path : paths) {
            outgoingCities.insert(path[0]);
        }

        for (const auto& path : paths) {
            if (outgoingCities.find(path[1]) == outgoingCities.end()) {
                return path[1];
            }
        }

        return "";
    }
};
