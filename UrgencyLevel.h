#pragma once
#ifndef URGENCYLEVEL_H
#define URGENCYLEVEL_H

#include <string>

class UrgencyLevel {
public:
    enum Level {
        Critical = 1,
        Urgent = 2,
        Normal = 3
    };

    // הוספת פונקציה להמרת רמת דחיפות למחרוזת
    static std::string toString(Level level) {
        switch (level) {
        case Critical: return "Critical";
        case Urgent: return "Urgent";
        case Normal: return "Normal";
        default: return "Unknown";
        }
    }
};

#endif // URGENCYLEVEL_H
