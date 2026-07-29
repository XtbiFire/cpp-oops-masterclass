/*
◆───────────────────────────────◆
68. Base vs Derived Destructor
◆───────────────────────────────◆

💡 Remember

When a Derived Object is
destroyed,

the Derived Destructor
runs first,

then the Base Destructor
runs.

Construction happens from

Base → Derived

Destruction happens from

Derived → Base

◆───────────────────────────────◆

🎯 Goal

Understand the order of
Destructor calls in
Inheritance.

◆───────────────────────────────◆

📖 Simple Meaning

A Child cannot exist
without a Parent.

So,

while creating,

Parent is created first.

Child is created second.

While destroying,

Child is removed first.

Parent is removed last.

◆───────────────────────────────◆

🌍 Real Life Example

Building Construction

Foundation

↓

First Floor

───────────────

Building Demolition

First Floor

↓

Foundation

Objects follow exactly
the same rule.

◆───────────────────────────────◆

⭐ Key Points

✔ Base Constructor runs first.

✔ Derived Constructor runs second.

✔ Derived Destructor runs first.

✔ Base Destructor runs last.

✔ Reverse Order follows LIFO.

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

    // Base Destructor
    ~Animal()
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
    // Create Derived Object
    Dog d1;

    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Animal Constructor

Dog Constructor

Inside main()

Dog Destructor

Animal Destructor

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

One Base Object and
one Derived Object
are created and destroyed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Animal Constructor
runs first.

Step 2:

Dog Constructor
runs second.

Step 3:

Program executes.

Step 4:

Dog Object is destroyed.

Step 5:

Dog Destructor
runs first.

Step 6:

Animal Destructor
runs last.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the Destructor
order in Inheritance?

Answer:

Constructors execute as

Base → Derived

Destructors execute as

Derived → Base

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking Base Destructor
runs first.

✘ Forgetting destruction
is reverse of construction.

✘ Confusing Constructor
order with Destructor
order.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Object Creation

Animal

↓

Dog

Which Destructor runs
first?

Answer:

✅ Dog Destructor

Then

Animal Destructor

◆───────────────────────────────◆

📝 Summary

Construction

Base

↓

Derived

───────────────

Destruction

Derived

↓

Base

◆───────────────────────────────◆

📌 Quick Revision

Constructor

Base → Derived

Destructor

Derived → Base

◆───────────────────────────────◆

*/