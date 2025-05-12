#include <string>
#include <vector>

struct Task {
    int id;
    std::string description;
    std::string status;       // "todo", "in-progress", "done"
    std::string createdAt;
    std::string updatedAt;
};