/*
◆───────────────────────────────◆
20. Private Data Hiding
◆───────────────────────────────◆

💡 Remember

Data Hiding means protecting
important data from direct
access outside the Class.

It is achieved using
private Access Specifier.

◆───────────────────────────────◆

🎯 Goal

Understand why Data Hiding
is needed and how private
protects important data.

◆───────────────────────────────◆

📖 Simple Meaning

Some data should not be
changed directly.

Instead of giving direct
access,

we provide controlled
access through Member
Functions.

This is called
Data Hiding.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine your ATM Account.

          Bank Server
               │
        ┌─────────────┐
        │ Balance     │
        │ ₹5000       │
        └─────────────┘
               🔒

Can anyone write

Balance = ₹10,00,000 ?

❌ No.

The Bank only allows

✔ Deposit()

✔ Withdraw()

✔ CheckBalance()

Similarly,

private hides important
data from direct access.

◆───────────────────────────────◆

⭐ Key Points

✔ Data Hiding protects data.

✔ private provides
  Data Hiding.

✔ Users cannot directly
  modify private data.

✔ Member Functions control
  access to private data.

✔ Improves Security.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class BankAccount
{
private:

    // Hidden Data
    double balance = 5000;

public:

    // Deposit Function
    void Deposit(double amount)
    {
        balance = balance + amount;
    }

    // Show Balance
    void ShowBalance()
    {
        cout << "Balance : ₹"
             << balance << endl;
    }
};

// Main Function
int main()
{
    BankAccount account;

    account.ShowBalance();

    account.Deposit(2000);

    account.ShowBalance();

    // Wrong ❌
    // account.balance = 1000000;

    return 0;
}

/*

▶ Execution Output

Balance : ₹5000

Balance : ₹7000

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

Only one Object is created
and constant-time operations
are performed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

'balance'

is declared private.

It cannot be accessed
directly.

Step 2:

Deposit()

updates balance safely.

Step 3:

ShowBalance()

displays the current balance.

Step 4:

main() cannot directly
modify balance.

Only public Member
Functions can.

This is called
Data Hiding.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is Data Hiding?

Answer:

Data Hiding is the process
of protecting important
data from direct access.

In C++, it is achieved
using the private Access
Specifier.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Trying to access
private data directly.

Wrong

account.balance = 1000;

✔ Correct

account.Deposit(1000);

✘ Thinking private means
data cannot be changed.

Data can be changed
through Member Functions.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Why is Data Hiding
important?

Answer:

Because it prevents
unauthorized access
and keeps data safe
from accidental or
invalid modifications.

◆───────────────────────────────◆

📝 Summary

private hides important
data from outside access.

Member Functions provide
controlled access.

This concept is called
Data Hiding.

◆───────────────────────────────◆

📌 Quick Revision

private
    │
Hidden Data
    │
No Direct Access
    │
Member Functions
    │
Controlled Access
    │
Data Hiding
    │
Better Security

◆───────────────────────────────◆

*/