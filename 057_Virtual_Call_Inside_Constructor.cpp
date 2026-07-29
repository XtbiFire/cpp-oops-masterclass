/*
◆───────────────────────────────◆
57. Virtual Call Inside Constructor
◆───────────────────────────────◆

💡 Remember

If a Virtual Function is
called inside a Constructor,

the Base Class version
is called.

The Derived version is
NOT called.

◆───────────────────────────────◆

🎯 Goal

Understand why Virtual
Functions behave differently
inside Constructors.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine a House.

The Foundation is still
being built.

The First Floor does not
exist yet.

So,

the Foundation cannot use
the First Floor.

Similarly,

while the Base Constructor
is running,

the Derived part of the
Object does not exist yet.

Therefore,

only the Base version
of the Virtual Function
can run.

◆───────────────────────────────◆

🌍 Real Life Example

Base Constructor

      │

Object Partially Built

      │

Virtual Function Call

      │

Base Version Executes

Derived Part
Not Ready Yet

◆───────────────────────────────◆

⭐ Key Points

✔ Virtual dispatch is
disabled inside
Constructors.

✔ Base version is called.

✔ Derived Object is not
fully constructed.

✔ Same rule applies to
Destructors.

✔ Very common interview
question.

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
        Speak();
    }

    virtual void Speak()
    {
        cout << "Animal Speaks"
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

    void Speak() override
    {
        cout << "Dog Barks"
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

Animal Speaks

Dog Constructor

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

One Base Object and
one Derived Object
are constructed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Dog object creation
starts.

Step 2:

Animal Constructor
runs first.

Step 3:

Animal Constructor
calls

Speak().

Step 4:

Even though Speak()
is virtual,

the Compiler calls

Animal::Speak()

because the Dog part
of the Object is not
constructed yet.

Step 5:

After the Base
Constructor finishes,

Dog Constructor runs.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Which function is called
when a Virtual Function is
invoked inside a Base
Constructor?

Answer:

The Base Class version
is called because the
Derived Object has not
been fully constructed.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Expecting the Derived
Virtual Function to run.

✘ Forgetting that the
Derived Object is still
under construction.

✘ Using Virtual Functions
inside Constructors for
polymorphic behavior.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Output?

Animal Constructor calls
Speak().

Dog overrides Speak().

Which function executes?

Answer:

✅ Animal::Speak()

NOT

Dog::Speak()

◆───────────────────────────────◆

📝 Summary

Base Constructor
      │
Virtual Function Call
      │
Base Version Runs
      │
Derived Not Ready Yet

◆───────────────────────────────◆

📌 Quick Revision

Virtual Function
      │
Inside Constructor
      │
No Virtual Dispatch
      │
Base Version Executes

◆───────────────────────────────◆

*/