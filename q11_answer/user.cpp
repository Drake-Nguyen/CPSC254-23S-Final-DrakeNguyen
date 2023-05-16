#include "user.h"

// Constructor
User::User(const std::string& username, const std::string& password) {
    this->username = username;
    this->password = password;
    balance = 0.0;
}

// Function to deposit funds into the user's account
void User::deposit(double amount) {
    balance += amount;
    // Record the deposit activity in the user's activity history
    activityHistory.push_back("Deposit: +" + std::to_string(amount));
}

// Function to withdraw funds from the user's account
bool User::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        // Record the withdrawal activity in the user's activity history
        activityHistory.push_back("Withdrawal: -" + std::to_string(amount));
        return true;
    } else {
        return false; // Insufficient funds
    }
}

// Function to get the user's current balance
double User::getBalance() const {
    return balance;
}

// Function to get the user's activity history
std::vector<std::string> User::getActivityHistory() const {
    return activityHistory;
}