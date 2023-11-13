#include <stdio.h>
#include <stdlib.h>

#define MAX_ACCOUNTS 10

struct Account {
    int accountNumber;
    float balance;
};

struct Account bankAccounts[MAX_ACCOUNTS];
int totalAccounts = 0;

void createAccount(float initialBalance) {
    if (totalAccounts < MAX_ACCOUNTS) {
        bankAccounts[totalAccounts].accountNumber = totalAccounts + 1;
        bankAccounts[totalAccounts].balance = initialBalance;
        totalAccounts++;
        printf("Account created successfully with initial balance: %.2f\n", initialBalance);
    } else {
        printf("Maximum number of accounts reached. Cannot create more accounts.\n");
    }
}

void deposit(int accountNumber, float amount) {
    for (int i = 0; i < totalAccounts; i++) {
        if (bankAccounts[i].accountNumber == accountNumber) {
            bankAccounts[i].balance += amount;
            printf("Deposited %.2f to account %d. New balance: %.2f\n", amount, accountNumber, bankAccounts[i].balance);
            return;
        }
    }
    printf("Account %d not found. Deposit failed.\n", accountNumber);
}

void withdraw(int accountNumber, float amount) {
    for (int i = 0; i < totalAccounts; i++) {
        if (bankAccounts[i].accountNumber == accountNumber) {
            if (bankAccounts[i].balance >= amount) {
                bankAccounts[i].balance -= amount;
                printf("Withdrawn %.2f from account %d. New balance: %.2f\n", amount, accountNumber, bankAccounts[i].balance);
            } else {
                printf("Insufficient balance in account %d. Withdrawal failed.\n", accountNumber);
            }
            return;
        }
    }
    printf("Account %d not found. Withdrawal failed.\n", accountNumber);
}

void checkBalance(int accountNumber) {
    for (int i = 0; i < totalAccounts; i++) {
        if (bankAccounts[i].accountNumber == accountNumber) {
            printf("Account %d has a balance of %.2f\n", accountNumber, bankAccounts[i].balance);
            return;
        }
    }
    printf("Account %d not found. Cannot check balance.\n", accountNumber);
}

int main() {
    createAccount(11000.00);
    createAccount(500.00);

    deposit(1, 250.00);
    withdraw(2, 100.00);
    withdraw(1, 1200.00); // Attempting to withdraw more than available balance
    deposit(3, 300.00); // Attempting to deposit in a non-existing account
    checkBalance(1);
    checkBalance(2);
    checkBalance(3); // Checking balance of a non-existing account

    return 0;
}
