/*
◆───────────────────────────────◆
51. Base Class Constructor Call Order
◆───────────────────────────────◆

💡 Remember

When a Derived Class Object
is created,

the Base Class Constructor
always runs first.

After that,

the Derived Class
Constructor runs.

◆───────────────────────────────◆

🎯 Goal

Understand the Constructor
Call Order in Inheritance.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine building a House.

First,

the Foundation is built.

Then,

the Rooms are built.

Without the Foundation,

the House cannot exist.

Similarly,

the Base Class is created
before the Derived Class.

◆───────────────────────────────◆

🌍 Real Life Example

Foundation
      │
      ▼
Built First

───────────────

House
      │
      ▼
Built Second

Base Class is like
the Foundation.

Derived Class is like
the House.

◆───────────────────────────────◆

⭐ Key Points

✔ Base Class Constructor
runs first.

✔ Derived Class Constructor
runs second.

✔ Destructors run in the
reverse order.

✔ This rule always applies.

✔ Base Object is ready
before Derived Object.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Animal
{
public:

    Animal()
    {
        cout << "Animal Constructor"
             << endl;
    }
};

class Dog : public Animal
{
public:

    Dog()
    {
        cout << "Dog Constructor"
             << endl;
    }
};

int main()
{
    Dog d1;

    return 0;
}

/*

▶ Execution Output

Animal Constructor

Dog Constructor

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only one Base Object
and one Derived Object
are initialized.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Dog d1;

starts creating the
Derived Object.

Step 2:

Dog inherits from

Animal.

Step 3:

Animal Constructor
runs first.

Step 4:

After the Base Class
is ready,

Dog Constructor
runs.

Step 5:

The complete Dog
Object is created.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Which Constructor is
called first during
Inheritance?

Answer:

The Base Class Constructor
always runs first.

After it finishes,

the Derived Class
Constructor runs.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking the Derived
Constructor runs first.

✘ Forgetting that Base
must be initialized
before Derived.

✘ Confusing Constructor
order with Destructor
order.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

If there are three levels,

Animal
   ↑
Mammal
   ↑
Dog

Which Constructor runs
first?

Answer:

Animal

↓

Mammal

↓

Dog

Base to Derived.

◆───────────────────────────────◆

📝 Summary

Base Class
      │
Constructor
      │
      ▼
Derived Class
Constructor
      │
      ▼
Object Ready

◆───────────────────────────────◆

📌 Quick Revision

Base Constructor
      │
Runs First
      │
Derived Constructor
      │
Object Created

◆───────────────────────────────◆

*/