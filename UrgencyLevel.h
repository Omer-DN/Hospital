#pragma once

using namespace std;

class UrgencyLevel {
public:
    enum class Level {
        Low,
        Medium,
        High
    };

    static string toString(Level level) {
        switch (level) {
        case Level::Low: return "Low";
        case Level::Medium: return "Medium";
        case Level::High: return "High";
        default: return "Unknown";
        }
    }
};
