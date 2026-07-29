/*
◆───────────────────────────────◆
59. What Is Destructor?
◆───────────────────────────────◆

💡 Remember

A Destructor is a special
Member Function that runs
automatically when an
Object is destroyed.

It is mainly used to
release resources like
memory, files, or network
connections.

◆───────────────────────────────◆

🎯 Goal

Understand what a
Destructor is and why
it is used in C++.

◆───────────────────────────────◆

📖 Simple Meaning

A Constructor creates
an Object.

A Destructor destroys
an Object.

Constructor = Birth

Destructor = Death

Every Object has one
beginning and one end.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine renting a Room.

When you enter,

the Room is prepared
for you.

(Constructor)

When you leave,

the Room is cleaned.

(Destructor)

Similarly,

a Destructor cleans
resources before the
Object disappears.

◆───────────────────────────────◆

⭐ Key Points

✔ Special Member Function.

✔ Runs automatically.

✔ Called when an Object
  is destroyed.

✔ Has the same name as
  the Class.

✔ Starts with (~).

✔ Has no return type.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    Student()
    {
        cout << "Constructor Called"
             << endl;
    }

    ~Student()
    {
        cout << "Destructor Called"
             << endl;
    }
};

int main()
{
    Student s1;

    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Inside main()

Destructor Called

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

One Object is created
and destroyed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Object s1 is created.

Step 2:

Constructor runs
automatically.

Step 3:

Program executes.

Step 4:

main() ends.

Step 5:

Destructor runs
automatically before
the Object is removed
from memory.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is a Destructor?

Answer:

A Destructor is a special
Member Function that runs
automatically when an
Object is destroyed.

It is mainly used to
release resources.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Giving a return type
to a Destructor.

✘ Calling a Destructor
manually in normal code.

✘ Forgetting that every
Class can have only one
Destructor.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which runs first?

Constructor

OR

Destructor

Answer:

✅ Constructor runs first.

Destructor runs when the
Object is destroyed.

◆───────────────────────────────◆

📝 Summary

Object Created
      │
      ▼
Constructor
      │
Program Executes
      │
Destructor
      │
Object Destroyed

◆───────────────────────────────◆

📌 Quick Revision

Destructor
      │
Special Function
      │
Runs Automatically
      │
Cleans Resources
      │
Object Destroyed

◆───────────────────────────────◆

*/