#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia {
    public:
    string name;
    jantung varJantung;
    manusia(string pName)
    : name (pName) {
            cout << "hidup\n";
        }
        ~manusia() {
            cout << "mati\n";
        }
};
#endif