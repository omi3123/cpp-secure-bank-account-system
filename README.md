# 🏦 **C++ Secure Bank Account System**

An Object-Oriented **C++** project that simulates a **password-protected bank account system**.  
It supports balance checks, deposits, withdrawals, and admin-level password resets with proper validation and access control.  
Custom exception handling is implemented for unauthorized or invalid access attempts.

---

## 📌 Features

- 🔐 Password-Protected Balance Operations  
- ✅ Deposit and Withdraw Funds  
- 📋 Check Current Balance  
- 🔄 Admin Can Reset User Password  
- ⚠️ Exception Handling for Unauthorized or Incorrect Actions

---

## ⚠️ Exception Handling

- `WrongPassword` – Raised when an incorrect password is used by the user  
- `AdminAccessAuthorizationDenied` – Raised when admin-level actions are attempted without a valid admin password  
- Custom exception classes are used for clear structure and validation

---

## 🧠 Concepts Used

- C++ OOP: Classes, Objects, Encapsulation, Access Modifiers  
- Custom Exception Handling  
- Admin/User Access Control  
- Password Getters/Setters with Validation  
- Class Security via Private Data Members  
- Console Input/Output

---

## ⚙️ How to Run

### 💻 Compile
```bash
g++ secure-bank.cpp -o secure-bank
▶️ Execute
bash
Copy
Edit
./secure-bank
📝 Ensure a C++ compiler (like g++) is installed on your system.

📂 File Structure
bash
Copy
Edit
secure-bank.cpp         # Main source code file
README.md               # Project documentation
👨‍💻 Author
Muhammad Umair Bashir
📧 umairbashir0319@gmail.com

🪪 License
This project is open-source and free to use for learning, academic, and personal use.
You are allowed to modify and share it with proper credits.
