/*
◆───────────────────────────────◆
27. Why Do We Need Constructors?
◆───────────────────────────────◆

💡 Remember

A Constructor automatically
initializes an Object when
it is created.

Without Constructors,
Objects may contain
uninitialized data.

◆───────────────────────────────◆

🎯 Goal

Understand why Constructors
are needed and what problems
they solve.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine you buy a new Car.

Before driving,

someone must

✔ Install the Engine

✔ Fill Fuel

✔ Connect the Battery

Otherwise,

the Car is not ready.

Similarly,

when an Object is created,

it should also be prepared
before we use it.

This preparation is done
by the Constructor.

◆───────────────────────────────◆

🌍 Real Life Example

Mobile Phone

New Mobile
      │
      ▼
Power On
      │
      ▼
System Starts Automatically
      │
      ▼
Ready To Use

Similarly,

Object Created
      │
      ▼
Constructor Runs
      │
      ▼
Object Ready To Use

◆───────────────────────────────◆

⭐ Key Points

✔ Constructor prepares
  the Object.

✔ Constructor runs
  automatically.

✔ No need to call it
  manually.

✔ Prevents uninitialized
  Objects.

✔ Makes code safer.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name;
    int age;

    // Constructor
    Student()
    {
        name = "Alex";
        age = 20;
    }

    void ShowData()
    {
        cout << "Name : "
             << name << endl;

        cout << "Age  : "
             << age << endl;
    }
};

int main()
{
    Student s1;

    s1.ShowData();

    return 0;
}

/*

▶ Execution Output

Name : Alex
Age  : 20

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

One Object is created and
initialized automatically.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student s1;

creates an Object.

Step 2:

Immediately,

Student()

(Constructor)

is called automatically.

Step 3:

The Constructor assigns

name = "Alex"

age = 20

Step 4:

The Object becomes ready
to use.

Step 5:

ShowData()

prints the initialized data.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why do we need Constructors?

Answer:

Constructors automatically
initialize Objects when
they are created.

They make Objects ready
to use and help avoid
uninitialized data.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking Constructors
must be called manually.

✘ Forgetting that every
new Object executes the
Constructor.

✘ Assuming Objects always
contain valid data without
initialization.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

What problem would occur
if Constructors did not
exist?

Answer:

Objects could be created
without proper initialization,
making them unsafe and
unreliable.

◆───────────────────────────────◆

📝 Summary

Object Created
      │
      ▼
Constructor Called
      │
      ▼
Object Initialized
      │
      ▼
Ready To Use

◆───────────────────────────────◆

📌 Quick Revision

Need Object
     │
Create Object
     │
Constructor Runs
     │
Initialize Data
     │
Ready To Use

◆───────────────────────────────◆

*/