/*
◆───────────────────────────────◆
19. Access Specifier : private
◆───────────────────────────────◆

💡 Remember

private is an Access Specifier.

Members declared as private
cannot be accessed directly
from outside the Class.

Only Member Functions of the
same Class can access them.

◆───────────────────────────────◆

🎯 Goal

Understand what private is,
why it is used, and how it
protects the Data Members
of a Class.

◆───────────────────────────────◆

📖 Simple Meaning

Think of private as a
"Locked Room".

Only the owner has the key.

Similarly,

private Members can only
be accessed inside the
same Class.

Outside code cannot
access them directly.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine an ATM Machine.

           ATM Machine
                │
                ▼
        ┌───────────────┐
        │ Account Balance│
        └───────────────┘
                🔒

You cannot directly
change your balance.

You must use ATM
functions like

• Deposit
• Withdraw
• Balance Inquiry

Similarly,

private Data can only be
accessed through Member
Functions.

◆───────────────────────────────◆

⭐ Key Points

✔ private is an Access
  Specifier.

✔ private Members are hidden
  from outside the Class.

✔ Data Members can be private.

✔ Member Functions inside the
  Class can access private Data.

✔ private improves Security.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class BankAccount
{
private:

    // Private Data Member
    double balance = 5000;

public:

    // Public Member Function
    void ShowBalance()
    {
        cout << "Balance : ₹"
             << balance << endl;
    }
};

// Main Function
int main()
{
    // Object Creation
    BankAccount account;

    // Correct Way
    account.ShowBalance();

    // Wrong Way ❌
    // cout << account.balance;

    return 0;
}

/*

▶ Execution Output

Balance : ₹5000

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

One Object is created and
one Member Function is called.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

'class BankAccount'

creates a new Class.

Step 2:

'private:'

makes 'balance'
accessible only inside
the Class.

Step 3:

'public:'

allows ShowBalance()
to be called from outside.

Step 4:

account.ShowBalance();

works because the Function
is public.

Step 5:

Inside ShowBalance(),

the private variable
'balance' is accessed.

Step 6:

Trying to write

account.balance;

causes a Compile-Time Error.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is private in C++?

Answer:

private is an Access
Specifier that hides
Class Members from
outside the Class.

Only Member Functions of
the same Class can access
private Members directly.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Trying to access
private Members directly.

Wrong

account.balance;

✔ Correct

account.ShowBalance();

✘ Thinking private
means no one can
access the data.

Member Functions of the
same Class can access it.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can main() directly
access a private
Data Member?

Answer:

❌ No.

Only the Class itself
can directly access
its private Members.

◆───────────────────────────────◆

📝 Summary

private protects the
Data of a Class.

It hides Members from
outside access and
improves Security.

◆───────────────────────────────◆

📌 Quick Revision

private
   │
Access Specifier
   │
Hidden Members
   │
Only Class Can Access
   │
Better Security
   │
Data Protection

◆───────────────────────────────◆