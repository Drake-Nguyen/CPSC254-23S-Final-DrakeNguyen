#include <iostream>
#include "login_page.cpp"
#include "user.h"

int main() {
    // Display the login page and random ad
    displayAd();

    // Prompt the user for login credentials
    promptLogin();

    // Get the entered username and password
    std::string username, password;
    std::cout << "Enter your username: ";
    std::cin >> username;
    std::cout << "Enter your password: ";
    std::cin >> password;

    // Validate the login credentials
    if (validateLogin(username, password)) {
        // Create a User object for the logged-in user
        User user(username, password);

        // Perform banking operations
        double amount;
        std::cout << "Enter the amount to deposit: ";
        std::cin >> amount;
        user.deposit(amount);

        std::cout << "Enter the amount to withdraw: ";
        std::cin >> amount;
        if (user.withdraw(amount)) {
            std::cout << "Withdrawal successful. Current balance: " << user.getBalance() << std::endl;
        } else {
            std::cout << "Insufficient funds. Current balance: " << user.getBalance() << std::endl;
        }
        
        // Display the user's activity history
        std::cout << "Activity History:" << std::endl;
        std::vector<std::string> activityHistory = user.getActivityHistory();
        for (const auto& activity : activityHistory) {
            std::cout << activity << std::endl;
        }
    } else {
        std::cout << "Invalid username or password. Login failed." << std::endl;
    }

    return 0;
}
