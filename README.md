# C++ Secure Bank Account System 🏦

An Object-Oriented C++ project that simulates a password-protected bank account system.  
It supports checking balance, depositing, and withdrawing with proper validation and admin-level password management.  
Exception handling is used for wrong password attempts and unauthorized admin access.

---

## 📌 Features

- 🔐 Password-protected balance operations  
- ✅ Deposit and Withdraw funds  
- 📋 Check current balance  
- 🔄 Admin can reset user password  
- ⚠️ Exception handling for unauthorized or incorrect actions  

---

## ⚠️ Exception Handling

- `WrongPassword` — Raised when an incorrect password is used by the user  
- `AdminAccessAuthorizationDenied` — Raised when admin-level actions are attempted without valid admin password

---

## 🧠 Concepts Used

- C++ OOP: Classes, Encapsulation, Access Modifiers  
- Custom Exception Handling  
- Admin/User Access Control  
- Password Getter/Setter with validation  
- Class security via private members

---

## ⚙️ How to Run

```bash
g++ secure-bank.cpp -o secure-bank
./secure-bank
