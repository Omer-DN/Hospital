#include <vector>
#include <string>
#include <map>
using namespace std;
class InjuryManager {
private:
    map<string, int> injuryWaitTimes;
    map<string, int> injuryTypes;
    vector<string> caseType1;
    vector<string> caseType2;
    vector<string> caseType3;

public:
    InjuryManager();

    //int getWaitTime(const string& injury) const;
    int getInjuryType(const string& injury) const;

    // New method to return a list of all injuries
    vector<string> getInjuryList() const {
        vector<string> injuryList;
        for (const auto& entry : injuryTypes) {
            injuryList.push_back(entry.first);
        }
        return injuryList;
    }
};
