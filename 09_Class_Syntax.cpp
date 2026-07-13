/*
◆───────────────────────────────◆
09. Class Syntax
◆───────────────────────────────◆

💡 Remember

Every Class in C++ follows a
fixed syntax.

If the syntax is incorrect,
the program will not compile.

◆───────────────────────────────◆

🎯 Goal

Learn the complete syntax of
a Class and understand every
part of it.

◆───────────────────────────────◆

📖 Simple Meaning

Syntax means the correct way
of writing code.

Just like every language has
grammar rules, C++ also has
rules for writing Classes.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a House Blueprint.

         Blueprint
             │
             ▼
      ┌────────────┐
      │  House     │
      └────────────┘
             │
      ┌──────┴──────┐
      ▼             ▼
   Rooms         Functions

Every Blueprint follows a
proper structure.

Similarly,

Every Class also follows
a fixed structure.

◆───────────────────────────────◆

⭐ Key Points

✔ class is a Keyword.

✔ Player is the Class Name.

✔ { } is called the Class Body.

✔ public: is an Access Specifier.

✔ Variables inside a Class
  are called Data Members.

✔ Functions inside a Class
  are called Member Functions.

✔ Every Class ends with (;).

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Player
{
public:

    // Data Members
    string name = "Alex";
    int health = 100;

    // Member Function
    void ShowData()
    {
        cout << "Name   : " << name << endl;
        cout << "Health : " << health << endl;
    }
};

// Main Function
int main()
{
    // Object Creation
    Player p1;

    // Calling Member Function
    p1.ShowData();

    return 0;
}

/*

▶ Execution Output

Name   : Alex
Health : 100

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)
Space : O(1)

Reason:

Only one object is created
and one member function is
called.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

'class' tells C++ that a new
User-Defined Data Type is
being created.

Step 2:

'Player' is the Class Name.

Step 3:

Inside { } we write Data
Members and Member Functions.

Step 4:

'public:' makes members
accessible outside the Class.

Step 5:

Player p1;

creates an Object.

Step 6:

p1.ShowData();

calls the Member Function
using the dot (.) operator.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the syntax of a Class?

Answer:

A Class starts with the
'class' keyword followed by
the Class Name, Class Body,
and ends with a semicolon (;).

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting the semicolon (;).

✘ Writing () after the
  Class Name.

Wrong:

class Player()

✘ Forgetting the opening
  or closing braces.

✘ Thinking a Class creates
  memory.

Memory is created only when
an Object is created.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Does writing

class Player
{

};

create memory?

Answer:

❌ No.

Only a Blueprint is created.

Memory is allocated when
an Object is created.

Example:

Player p1;

◆───────────────────────────────◆

📝 Summary

A Class follows a fixed syntax.

It contains Data Members and
Member Functions.

Objects are created from a
Class.

Every Class definition ends
with a semicolon.

◆───────────────────────────────◆

📌 Quick Revision

class
   │
Keyword
   │
Class Name
   │
Class Body { }
   │
public:
   │
Data Members
   │
Member Functions
   │
Object Creation
   │
Member Function Call
   │
Semicolon (;)

◆───────────────────────────────◆

*/