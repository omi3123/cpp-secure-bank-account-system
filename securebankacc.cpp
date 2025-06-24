#include <iostream>
#include <stdexcept>
using namespace std;
class WrongPassword : public exception {
    string message;
public:
    WrongPassword(string msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};
class AdminAccessAuthorizationDenied : public exception {
    string message;
public:
    AdminAccessAuthorizationDenied(string msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};
class BankAccount {
private:
    string password;
    double balance;
    static const string admin_password;
public:
    BankAccount(string pass, double bal) {
        password = pass;
        balance = bal;
    }
    void check_balance(string pass) {
        if (pass == password)
            cout << "Current Balance is: " << balance << endl;
        else
            throw WrongPassword("Chutiye password galat hai tera!!");
    }
    void deposit(string pass, double amount) {
        if (pass == password) {
            balance += amount;
            cout << "New balance is: " << balance << endl;
        } else {
            throw WrongPassword("Chutiye password galat hai tera!!");
        }
    }
    void withdraw(string pass, double amount) {
        if (pass == password) {
            balance -= amount;
            cout << "New balance after withdrawal is: " << balance << endl;
        } else {
            throw WrongPassword("Chutiye password galat hai tera!!");
        }
    }
    string get_password() const {
        return password;
    }
    void set_password(string new_pass, string admin_pass) {
        if (admin_pass == admin_password) {
            password = new_pass;
        } else {
            throw AdminAccessAuthorizationDenied("Password is wrong");
        }
    }
};
const string BankAccount::admin_password = "12345";
int main() {
    try {
        BankAccount account("@123", 20000);
        account.set_password("@@123", "12345");
        account.check_balance("@@123");
    } catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}