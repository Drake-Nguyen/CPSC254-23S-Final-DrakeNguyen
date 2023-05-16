#ifndef LOGIN_PAGE_H
#define LOGIN_PAGE_H

// Function to display a random ad
void displayAd();

// Function to prompt the user for login credentials
void promptLogin();

// Function to validate the entered username and password
bool validateLogin(const std::string& username, const std::string& password);

#endif  // LOGIN_PAGE_H
