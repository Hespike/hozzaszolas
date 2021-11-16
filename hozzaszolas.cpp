#include <string>

using namespace std;

class Hozzaszolas {
    string kiiro;
    string tartalom;
    mutable unsigned  lajkok;

public:
    Hozzaszolas(const string& kiiro, const string& tartalom): kiiro(kiiro), tartalom(tartalom), lajkok(lajkok) {}

};
