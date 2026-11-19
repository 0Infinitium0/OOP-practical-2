# Practical 02 – Classes, Access Specifiers and Member Functions

## Aim
To understand how classes combine data and behaviour, and how access specifiers protect data in C++.

## Problem Statement
Design and implement a `BankAccount` class with private data members and public member functions. Use a constructor to initialize account details and demonstrate account operations using at least two objects.

## Concepts Used
- Classes and objects
- Private and public access specifiers
- Constructors
- Encapsulation
- Public member functions
- Input validation for deposits and withdrawals

## Files
| File | Description |
|---|---|
| `practical2.cpp` | Complete C++ source code |
| `output.txt` | Sample program output |
| `OBSERVATION.md` | Result and observation |
| `README.md` | Practical documentation |

## How to Compile and Run

Using g++:

```bash
g++ practical2.cpp -o practical2
```

On Windows PowerShell:

```powershell
.\practical2.exe
```

On Linux or macOS:

```bash
./practical2
```

## Class Design

### Private members
- `accountHolder` stores the account holder's name.
- `accountNumber` stores the account number.
- `balance` stores the current account balance.

These members are private so they cannot be accessed or changed directly from outside the class. This protects the account data and supports encapsulation.

### Public members
- `BankAccount()` initializes an account.
- `displayDetails()` displays account information.
- `deposit()` adds money when the amount is positive.
- `withdraw()` subtracts money only when the amount is valid and sufficient funds are available.

Public functions provide controlled access to the private data.

## Sample Demonstration
The program creates two objects:
1. Satinderpal Singh Chaney – starts with Rs. 10,000, deposits Rs. 2,000 and withdraws Rs. 1,500. Final balance: Rs. 10,500.
2. Priya – starts with Rs. 5,000, deposits Rs. 1,000 and withdraws Rs. 500. Final balance: Rs. 5,500.

See [`output.txt`](output.txt) for the sample output.

## Result
Successfully designed and implemented a Bank Account class using private and public access specifiers. A constructor initializes account details, and public member functions display account information, deposit money and withdraw money. Two objects demonstrate that each account maintains its own balance.

## Author
C++ Practical 02
