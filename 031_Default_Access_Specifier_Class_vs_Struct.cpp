/*
◆───────────────────────────────◆
31. Default Access Specifier
Class vs Struct
◆───────────────────────────────◆

💡 Remember

Both class and struct can
contain

✔ Data Members

✔ Member Functions

✔ Constructors

✔ Destructors

The biggest difference is
their default Access Specifier.

◆───────────────────────────────◆

🎯 Goal

Understand the default
Access Specifier of
class and struct.

◆───────────────────────────────◆

📖 Simple Meaning

class

Default Access
↓

private

struct

Default Access
↓

public

Everything else works
almost the same.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine two Houses.

House A

Default Door

🔒 Locked

(class)

House B

Default Door

🔓 Open

(struct)

You can still lock or unlock
both houses manually.

Similarly,

You can write

public:

private:

protected:

inside both class
and struct.

◆───────────────────────────────◆

⭐ Key Points

✔ class default access
  is private.

✔ struct default access
  is public.

✔ Both support
  Constructors.

✔ Both support
  Member Functions.

✔ Both support
  Inheritance.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

// Class
class Student
{
    int age = 20;

public:

    void ShowAge()
    {
        cout << "Age : "
             << age << endl;
    }
};

// Struct
struct Player
{
    string name = "Alex";
};

int main()
{
    Student s1;

    s1.ShowAge();

    Player p1;

    cout << "Name : "
         << p1.name << endl;

    return 0;
}

/*

▶ Execution Output

Age : 20

Name : Alex

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only constant-time
operations are performed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student is declared
using class.

Its Members are
private by default.

Step 2:

ShowAge()

is made public so
main() can call it.

Step 3:

Player is declared
using struct.

Its Members are
public by default.

Step 4:

Therefore,

p1.name

can be accessed
directly.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the difference
between class and struct
in C++?

Answer:

The main difference is
the default Access
Specifier.

class → private

struct → public

Otherwise, both support
almost all OOP features.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking struct cannot
have Constructors.

✘ Thinking struct cannot
have Member Functions.

✘ Thinking struct is not
used in OOP.

All of these are false.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can a struct have a
Constructor?

Answer:

✅ Yes.

A struct supports
Constructors,
Member Functions,
Inheritance,
and almost every
feature of a class.

◆───────────────────────────────◆

📝 Summary

class
   │
Default → private

struct
   │
Default → public

Everything else is
mostly the same.

◆───────────────────────────────◆

📌 Quick Revision

class
   │
private (Default)

struct
   │
public (Default)

Both
   │
Constructors
Member Functions
Inheritance

◆───────────────────────────────◆

*/