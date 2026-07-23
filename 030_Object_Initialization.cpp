/*
◆───────────────────────────────◆
30. Object Initialization
◆───────────────────────────────◆

💡 Remember

Object Initialization means
giving initial values to an
Object when it is created.

A Constructor is commonly
used to initialize an Object.

◆───────────────────────────────◆

🎯 Goal

Understand how an Object is
initialized and what happens
during Object creation.

◆───────────────────────────────◆

📖 Simple Meaning

When an Object is created,

C++ first allocates memory.

Then,

the Constructor automatically
initializes the Object.

After that,

the Object becomes ready
to use.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine buying a new Laptop.

           Laptop
              │
              ▼
      Hardware Created
              │
              ▼
 Operating System Installed
              │
              ▼
      Laptop Ready To Use

Similarly,

Object Created
      │
      ▼
Memory Allocated
      │
      ▼
Constructor Runs
      │
      ▼
Object Initialized
      │
      ▼
Ready To Use

◆───────────────────────────────◆

⭐ Key Points

✔ Memory is allocated first.

✔ Constructor runs after
  memory allocation.

✔ Constructor initializes
  the Object.

✔ Initialization happens
  automatically.

✔ Object becomes ready
  after initialization.

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

    Student()
    {
        name = "Alex";
        age = 20;

        cout << "Constructor Executed"
             << endl;
    }

    void Display()
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

    s1.Display();

    return 0;
}

/*

▶ Execution Output

Constructor Executed

Name : Alex
Age  : 20

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

Only one Object is created
and initialized.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student s1;

creates an Object.

Step 2:

Memory is allocated
for s1.

Step 3:

Student()

(Constructor)

runs automatically.

Step 4:

The Constructor assigns

name = "Alex"

age = 20

Step 5:

The Object becomes
fully initialized.

Step 6:

Display()

prints the initialized
values.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is Object Initialization?

Answer:

Object Initialization is the
process of assigning initial
values to an Object when it
is created.

In C++, Constructors are
commonly used for this.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking initialization
happens before memory
allocation.

Memory is allocated first.

✘ Thinking Constructors
must be called manually.

They run automatically.

✘ Confusing Object Creation
with Object Initialization.

Creation and Initialization
are related but not exactly
the same process.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

What happens first?

A) Constructor Runs

B) Memory Allocation

Answer:

✅ B) Memory Allocation

After memory allocation,
the Constructor runs.

◆───────────────────────────────◆

📝 Summary

Object Created
      │
      ▼
Memory Allocated
      │
      ▼
Constructor Runs
      │
      ▼
Object Initialized
      │
      ▼
Ready To Use

◆───────────────────────────────◆

📌 Quick Revision

Object
   │
Memory Allocation
   │
Constructor
   │
Initialization
   │
Ready To Use

◆───────────────────────────────◆

*/