/*
◆───────────────────────────────◆
29. How Constructor Is Called?
◆───────────────────────────────◆

💡 Remember

A Constructor is called
automatically whenever an
Object is created.

The programmer does not
call it manually.

◆───────────────────────────────◆

🎯 Goal

Understand how and when
Constructors are called.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine entering a Hotel.

As soon as you enter,

the Reception automatically

✔ Verifies your booking

✔ Gives your room key

✔ Activates your room

You never ask for these
steps one by one.

Similarly,

When an Object is created,

C++ automatically calls
its Constructor.

◆───────────────────────────────◆

🌍 Real Life Example

Object Created

        │

        ▼

Memory Allocated

        │

        ▼

Constructor Called

        │

        ▼

Object Ready To Use

◆───────────────────────────────◆

⭐ Key Points

✔ Constructor is called
  automatically.

✔ Every Object calls its
  own Constructor.

✔ Constructor runs only
  once per Object.

✔ It runs immediately
  after Object creation.

✔ No manual call is needed.

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
};

int main()
{
    Student s1;

    Student s2;

    Student s3;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Constructor Called

Constructor Called

◆───────────────────────────────◆

⚙ Complexity

Time  : O(n)

Space : O(1)

Reason:

If n Objects are created,

the Constructor executes
once for every Object.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student s1;

creates the first Object.

Constructor runs once.

Step 2:

Student s2;

creates another Object.

Constructor runs again.

Step 3:

Student s3;

creates the third Object.

Constructor runs again.

Step 4:

Every Object has its own
Constructor call.

No Constructor is shared
between Objects.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

When is a Constructor called?

Answer:

A Constructor is called
automatically immediately
after an Object is created.

Every Object calls its own
Constructor exactly once.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Trying to call

s1.Student();

This is invalid.

✘ Thinking one Constructor
call initializes all Objects.

Every Object gets its own
Constructor call.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

If 100 Objects are created,

how many times will the
Constructor execute?

Answer:

✅ 100 times.

One Constructor call for
each Object.

◆───────────────────────────────◆

📝 Summary

Create Object
      │
      ▼
Memory Allocated
      │
      ▼
Constructor Called
      │
      ▼
Object Ready

◆───────────────────────────────◆

📌 Quick Revision

Object
   │
Created
   │
Constructor
Automatically Called
   │
Runs Once
Per Object

◆───────────────────────────────◆

*/