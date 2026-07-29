/*
◆───────────────────────────────◆
69. Virtual Destructor
◆───────────────────────────────◆

💡 Remember

If a Base Class is used
through a Base Pointer,

its Destructor should
be Virtual.

Otherwise,

the Derived Destructor
may never execute.

This can cause
Resource Leaks.

◆───────────────────────────────◆

🎯 Goal

Understand why Virtual
Destructors are important
in Inheritance.

◆───────────────────────────────◆

📖 Simple Meaning

If you delete a Derived
Object using a Base
Pointer,

C++ should destroy the

Derived Object

first,

then

Base Object.

A Virtual Destructor
makes this possible.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Building.

Top Floor

↓

Ground Floor

If demolition starts,

the Top Floor should
be removed first.

Otherwise,

parts of the Building
remain unfinished.

Virtual Destructor
ensures proper cleanup.

◆───────────────────────────────◆

⭐ Key Points

✔ Used in Base Class.

✔ Ensures complete cleanup.

✔ Prevents Memory Leaks.

✔ Required for Runtime
Polymorphism.

✔ Very common Interview
Question.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>     // Input Output Library
using namespace std;

// Base Class
class Animal
{
public:

    // Base Constructor
    Animal()
    {
        cout << "Animal Constructor"
             << endl;
    }

    // Virtual Destructor
    virtual ~Animal()
    {
        cout << "Animal Destructor"
             << endl;
    }
};

// Derived Class
class Dog : public Animal
{
public:

    // Derived Constructor
    Dog()
    {
        cout << "Dog Constructor"
             << endl;
    }

    // Derived Destructor
    ~Dog()
    {
        cout << "Dog Destructor"
             << endl;
    }
};

// Main Function
int main()
{
    // Base Pointer
    Animal* ptr = new Dog();

    cout << "Object Is Working"
         << endl;

    // Destroy Object
    delete ptr;

    return 0;
}

/*

▶ Execution Output

Animal Constructor

Dog Constructor

Object Is Working

Dog Destructor

Animal Destructor

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

One Base Object and
one Derived Object
are destroyed correctly.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Base Pointer

points to

Derived Object.

Step 2:

Dog Object is created.

Step 3:

Program executes.

Step 4:

delete ptr;

calls the Virtual
Destructor.

Step 5:

Dog Destructor
runs first.

Step 6:

Animal Destructor
runs last.

Complete cleanup
is performed.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why do we need a
Virtual Destructor?

Answer:

A Virtual Destructor
ensures that both
Derived and Base
Destructors execute
when deleting an
Object through a
Base Pointer.

This prevents
Memory Leaks.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting virtual
in the Base Destructor.

✘ Deleting Derived
Objects using a Base
Pointer without a
Virtual Destructor.

✘ Assuming only the
Base Destructor is enough.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Without a Virtual
Destructor,

which Destructor
runs?

Answer:

❌ Only the Base
Destructor.

The Derived Destructor
is skipped.

This may cause
Resource Leaks.

◆───────────────────────────────◆

📝 Summary

Base Pointer

↓

Derived Object

↓

delete

↓

Derived Destructor

↓

Base Destructor

◆───────────────────────────────◆

📌 Quick Revision

Base Pointer
      │
Virtual Destructor
      │
Derived Destructor
      │
Base Destructor
      │
Complete Cleanup

◆───────────────────────────────◆

*/