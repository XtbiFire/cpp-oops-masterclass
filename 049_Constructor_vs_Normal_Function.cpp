/*
◆───────────────────────────────◆
49. Constructor vs Normal Function
◆───────────────────────────────◆

💡 Remember

A Constructor is a special
Member Function that
automatically runs when
an Object is created.

A Normal Function runs
only when we call it.

◆───────────────────────────────◆

🎯 Goal

Understand the difference
between a Constructor and
a Normal Function.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine buying a Mobile.

When you switch it on,

Initial Setup starts
automatically.

You do not manually
start it.

That is like a Constructor.

Later,

when you open Camera,

Gallery,

Calculator,

you choose them manually.

Those are like Normal
Functions.

◆───────────────────────────────◆

🌍 Real Life Example

Object Created
       │
       ▼
Constructor Runs
Automatically

───────────────

Object Exists
       │
       ▼
Normal Function
Called Manually

◆───────────────────────────────◆

⭐ Key Points

✔ Constructor runs
automatically.

✔ Normal Function is
called manually.

✔ Constructor name must
match the Class name.

✔ Constructor has no
return type.

✔ Normal Function may
return a value.

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

    void Display()
    {
        cout << "Display Function Called"
             << endl;
    }
};

int main()
{
    Student s1;

    s1.Display();

    return 0;
}

/*

▶ Execution Output

Constructor Called

Display Function Called

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Constructor and Function
execute only once.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student s1;

creates the Object.

Step 2:

Constructor runs
automatically.

Step 3:

Display()

does not run
automatically.

Step 4:

It runs only when

s1.Display();

is called.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the difference
between a Constructor and
a Normal Function?

Answer:

A Constructor runs
automatically when an
Object is created.

A Normal Function runs
only when it is called.

Constructors have no
return type and their
name is the same as the
Class name.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Giving a return type
to a Constructor.

✘ Calling the Constructor
like a Normal Function.

✘ Thinking Constructors
can be called repeatedly
on the same Object.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which one runs first?

Constructor

OR

Display()

Answer:

✅ Constructor

because it runs
automatically during
Object creation.

◆───────────────────────────────◆

📝 Summary

Object Created
      │
      ▼
Constructor
(Auto)
      │
      ▼
Normal Function
(Manual)

◆───────────────────────────────◆

📌 Quick Revision

Constructor
      │
Automatic
      │
No Return Type
      │
Same Name As Class

───────────────

Normal Function
      │
Manual Call
      │
May Return Value
      │
Any Valid Name

◆───────────────────────────────◆

*/