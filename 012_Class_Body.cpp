/*
◆───────────────────────────────◆
12. Class Body
◆───────────────────────────────◆

💡 Remember

The Class Body is the area
inside the curly braces { }.

It contains the complete
definition of a Class.

◆───────────────────────────────◆

🎯 Goal

Understand what the Class Body
is and what can be written
inside it.

◆───────────────────────────────◆

📖 Simple Meaning

Everything written inside

{

}

is called the Class Body.

The Class Body stores all
Data Members and Member
Functions of a Class.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a School Bag.

        School Bag
             │
             ▼
      ┌─────────────┐
      │ Books       │
      │ Notebook    │
      │ Pen         │
      │ Pencil Box  │
      └─────────────┘

The Bag is the container.

Similarly,

The Class Body is a container
that keeps all members of
the Class together.

◆───────────────────────────────◆

⭐ Key Points

✔ Class Body starts with {.

✔ Class Body ends with }.

✔ It stores Data Members.

✔ It stores Member Functions.

✔ Everything related to the
  Class is written inside it.

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

One Object is created and
one Member Function is called.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

'class Player'

Starts a new Class.

Step 2:

{

This begins the Class Body.

Step 3:

Inside the Class Body,
Data Members are written.

Step 4:

Member Functions are also
written inside the Class Body.

Step 5:

}

Ends the Class Body.

Step 6:

;

Ends the complete
Class Definition.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the Class Body?

Answer:

The Class Body is the area
inside the curly braces { }
where Data Members and
Member Functions are written.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Writing Class members
outside the Class Body.

✘ Forgetting the opening
or closing brace.

✘ Thinking only variables
can be written inside
the Class Body.

Functions can also be
written inside it.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can a Class Body contain
both Variables and Functions?

Answer:

✅ Yes.

A Class Body can contain

• Data Members

• Member Functions

• Constructors

• Destructors

• Static Members

• Nested Classes

and many other members.

◆───────────────────────────────◆

📝 Summary

The Class Body is the main
part of a Class.

It stores everything related
to that Class.

Without a Class Body,
a Class cannot define
its members.

◆───────────────────────────────◆

📌 Quick Revision

Class
   │
{
   │
Class Body
   │
├── Data Members
│
└── Member Functions
   │
}
   │
Class Ends

◆───────────────────────────────◆

*/