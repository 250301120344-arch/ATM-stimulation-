![OIP](https://github.com/user-attachments/assets/11186bff-b624-40a2-aee1-4a7b580995d9)

# 🏧 ATM Simulation in C

A simple **ATM (Automated Teller Machine) Simulation** written in **C programming**.  
This project is ideal for **1st semester** students learning loops, conditions, switch-case, and basic user interaction.

---

## 📌 Features

- 🔐 PIN Authentication  
- 💵 Check Balance  
- ➕ Deposit Money  
- ➖ Withdraw Money  
- 🔁 Menu-driven system  
- ⚠️ Basic input validation  

---

<img width="435" height="526" alt="Screenshot 2025-11-22 003324" src="https://github.com/user-attachments/assets/8ec935c3-9f6f-4ab9-a480-104f954b1ba8" />

## 🛠️ Instructions to Run

### **Compile the program**
```bash
gcc atm.c -o atm
./atm
1234
```
# 🧩 Program Description

This C program demonstrates:

Use of loops (do-while)

Conditional statements (if-else)

Selection control (switch-case)

User input with validation

Simple banking operations (deposit, withdraw, balance inquiry)

It simulates a basic ATM system and repeatedly shows the menu until the user chooses to exit.

---
####SOURCE CODE

#include <stdio.h>

int main() {
    int pin = 1234, enteredPin;
    int balance = 5000;
    int choice, amount;

    printf("====== ATM Simulation ======\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Exiting...\n");
        return 0;
    }

    do {
        printf("\n====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Your current balance is: %d\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful! New balance: %d\n", balance);
                } else {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful! Remaining balance: %d\n", balance);
                } else {
                    printf("Invalid or insufficient amount.\n");
                }
                break;

            case 4:
                printf("Thank you for using ATM.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}


#📘 Documents Included

Inside the docs/ folder:

algorithm.md

Step-by-step algorithm of the ATM program.

flowchart.png

Flowchart of the ATM system.

project_report.md

Short project report for academic submissions


---

# 📄 License

This project is licensed under the MIT License.
You may modify and use it freely.

---


# 👤 Author

BISWAJIT MOHAPATRA 
1st Semester – C Programming Project


---
