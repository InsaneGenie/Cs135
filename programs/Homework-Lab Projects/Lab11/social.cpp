#include <string>
#include <iostream>
using namespace std;

class Profile {
private:
    string username;
    string displayname;

public:
    // Profile constructor for a user (initializing private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

// Implementations of Profile class methods

// Profile constructor implementation
Profile::Profile(string usrn, string dspn) {
    username = usrn;
    displayname = dspn;
}

// Default Profile constructor implementation
Profile::Profile() {
    username = "";
    displayname = "";
}

// Return username implementation
string Profile::getUsername() {
    return username;
}

// Return name in the format: "displayname (@username)" implementation
string Profile::getFullName() {
    return displayname + " (@" + username + ")";
}

// Change display name implementation
void Profile::setDisplayName(string dspn) {
    displayname = dspn;
}

int main() {
    // Test the Profile class
    Profile p1("marco", "Marco");
    cout << p1.getUsername() << endl;    // marco
    cout << p1.getFullName() << endl;    // Marco (@marco)

    p1.setDisplayName("Marco Rossi");
    cout << p1.getUsername() << endl;    // marco
    cout << p1.getFullName() << endl;    // Marco Rossi (@marco)

    Profile p2("tarma1", "Tarma Roving");
    cout << p2.getUsername() << endl;    // tarma1
    cout << p2.getFullName() << endl;    // Tarma Roving (@tarma1)
}
