/*
◆───────────────────────────────◆
65. Dynamic Object Destructor
◆───────────────────────────────◆

💡 Remember

A Dynamic Object is created
using the new keyword.

Its Destructor is NOT called
automatically.

The Destructor runs only
when delete is used.

◆───────────────────────────────◆

🎯 Goal

Understand how the
Destructor works for
Dynamic Objects.

◆───────────────────────────────◆

📖 Simple Meaning

A Dynamic Object lives
in Heap Memory.

Unlike Local Objects,

it does NOT disappear
when the Scope ends.

You must destroy it
using delete.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine renting a Car.

You receive the Car.

(new)

You use it.

When finished,

you must return it.

(delete)

Otherwise,

the Car remains reserved.

Similarly,

Dynamic Objects remain
alive until delete is
called.

◆───────────────────────────────◆

⭐ Key Points

✔ Created using new.

✔ Stored in Heap Memory.

✔ Destructor does NOT run
  automatically.

✔ delete calls the
  Destructor.

✔ Forgetting delete
  causes Memory Leak.

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
    Student* ptr = new Student();

    cout << "Object Is Working"
         << endl;

    delete ptr;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Object Is Working

Destructor Called

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

One Dynamic Object is
created and destroyed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

new Student()

creates a Dynamic
Object.

Step 2:

The Constructor
runs automatically.

Step 3:

The Object remains
alive even if Scope
changes.

Step 4:

delete ptr;

destroys the Object.

Step 5:

Destructor runs
automatically.

Step 6:

Heap Memory is
released.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

When is the Destructor
of a Dynamic Object
called?

Answer:

The Destructor runs only
when delete is used.

Without delete,

the Object remains in
Heap Memory.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting delete.

✘ Assuming Scope destroys
Dynamic Objects.

✘ Calling delete twice
(Double Delete).

◆───────────────────────────────◆

🚀 Brain Booster

Question:

What happens if delete
is never called?

Answer:

The Destructor does NOT
run.

The Heap Memory remains
allocated.

This causes a
Memory Leak.

◆───────────────────────────────◆

📝 Summary

new
 │
 ▼
Constructor
 │
Object Lives
 │
delete
 │
Destructor
 │
Memory Released

◆───────────────────────────────◆

📌 Quick Revision

Dynamic Object
      │
new
      │
Heap Memory
      │
delete
      │
Destructor Runs

◆───────────────────────────────◆

*/