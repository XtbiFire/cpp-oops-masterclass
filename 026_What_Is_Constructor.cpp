/*
◆───────────────────────────────◆
26. What Is Constructor?
◆───────────────────────────────◆

💡 Remember

A Constructor is a special
Member Function of a Class.

It is automatically called
when an Object is created.

◆───────────────────────────────◆

🎯 Goal

Understand what a Constructor
is, why it is used, and when
it is automatically executed.

◆───────────────────────────────◆

📖 Simple Meaning

The word "Construct" means

"To Build"
or
"To Create"

A Constructor helps initialize
an Object when it is created.

You do not call a Constructor
yourself.

C++ calls it automatically.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine buying a new Mobile.

As soon as you press
the Power Button
for the first time,

The Mobile automatically

✔ Loads the System

✔ Allocates Memory

✔ Starts Basic Services

You do not manually perform
these steps.

Similarly,

When an Object is created,

the Constructor automatically
runs.

◆───────────────────────────────◆

⭐ Key Points

✔ Constructor is a special
  Member Function.

✔ Constructor name is exactly
  the same as the Class Name.

✔ Constructor has no
  return type.

✔ Constructor is called
  automatically.

✔ Every Object executes
  the Constructor once
  during creation.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    // Constructor
    Student()
    {
        cout << "Constructor Called"
             << endl;
    }
};

int main()
{
    Student s1;

    return 0;
}

/*

▶ Execution Output

Constructor Called

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

Only one Object is created,
so the Constructor runs once.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

A Class named Student
is created.

Step 2:

Student()

This is the Constructor.

Notice that

its name is exactly the
same as the Class Name.

Step 3:

Student s1;

creates an Object.

Step 4:

Immediately after the
Object is created,

C++ automatically calls

Student()

Step 5:

The message

"Constructor Called"

is printed.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is a Constructor?

Answer:

A Constructor is a special
Member Function that is
automatically called when
an Object is created.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking Constructors
must be called manually.

✘ Giving a return type.

Wrong

void Student()

✔ Correct

Student()

✘ Giving a different name.

The Constructor name must
match the Class Name exactly.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

How many times is a
Constructor called if
five Objects are created?

Answer:

✅ Five times.

Each Object calls the
Constructor once during
its creation.

◆───────────────────────────────◆

📝 Summary

Constructor

↓

Special Member Function

↓

Same Name As Class

↓

No Return Type

↓

Automatically Called

↓

Runs Once Per Object

◆───────────────────────────────◆

📌 Quick Revision

Class
   │
Object Created
   │
Constructor Called
   │
Object Ready To Use

◆───────────────────────────────◆

*/