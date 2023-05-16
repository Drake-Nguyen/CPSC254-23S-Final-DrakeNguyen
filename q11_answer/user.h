#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User {
public:
    // Constructor
    User(const std::string& username, const std::string& password);

    // Function to deposit funds into the user's account
    void deposit(double amount);

    // Function to withdraw funds from the user's account
    bool withdraw(double amount);

    // Function to get the user's current balance
    double getBalance() const;

    // Function to get the user's activity history
    std::vector<std::string> getActivityHistory() const;

private:
    std::string username;
    std::string password;
    double balance;
    std::vector<std::string> activityHistory;
};

#endif  // USER_H
