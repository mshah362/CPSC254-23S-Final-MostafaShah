#include <iostream>
#include <string>
#include <vector>

using namespace std;

// User struct to store user information
struct User {
    string username;
    string password;
    vector<string> activityHistory;
    double balance;

    User(string uname, string pwd, double initialBalance);
};

// Function to display a random ad
void displayAd();

// Function to log in a user
bool login(vector<User>& users, string username, string password);

// Function to perform deposit
void deposit(User& user, double amount);

// Function to perform withdrawal
void withdraw(User& user, double amount);

int main();




