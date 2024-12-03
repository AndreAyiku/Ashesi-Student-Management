#include <string>
#include <iostream>
#include <regex>


using namespace std;

class User {
protected:
    int userID;
    string firstName;
    string lastName;
    string email;
    string hashedPassword;
    bool isLoggedIn;
};