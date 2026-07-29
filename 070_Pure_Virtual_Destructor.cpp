/*
◆───────────────────────────────◆
70. Pure Virtual Destructor
◆───────────────────────────────◆

💡 Remember

A Destructor can be
Pure Virtual.

But,

it MUST always have a
definition.

Otherwise,

the program will produce
a Linker Error.

◆───────────────────────────────◆

🎯 Goal

Understand what a Pure
Virtual Destructor is
and why it still needs
a definition.

◆───────────────────────────────◆

📖 Simple Meaning

A Pure Virtual Destructor
makes a Class Abstract.

Even though it is Pure
Virtual,

its body must still
exist because it is
always called while
destroying an Object.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Company Rule.

Every Employee must
complete the Exit
Process before leaving.

Even if the Exit Process
is declared mandatory,

it must actually exist.

Similarly,

a Pure Virtual Destructor
must always have a
definition.

◆───────────────────────────────◆

⭐ Key Points

✔ Makes a Class Abstract.

✔ Written using = 0.

✔ Must always have a
Definition.

✔ Called during Object
Destruction.

✔ Common Interview Topic.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>     // Input Output Library
using namespace std;

// Base Class
class Animal
{
public:

    // Pure Virtual Destructor
    virtual ~Animal() = 0;
};

// Definition of Pure Virtual Destructor
Animal::~Animal()
{
    cout << "Animal Destructor"
         << endl;
}

// Derived Class
class Dog : public Animal
{
public:

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

    // Destroy Object
    delete ptr;

    return 0;
}

/*

▶ Execution Output

Dog Destructor

Animal Destructor

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

One Base Object and
one Derived Object are
destroyed correctly.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Animal has a Pure
Virtual Destructor.

Step 2:

Animal becomes an
Abstract Class.

Step 3:

Dog inherits Animal.

Step 4:

A Dog Object is created.

Step 5:

delete ptr;

calls the Derived
Destructor first.

Step 6:

After that,

Animal Destructor
runs.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Can a Destructor be
Pure Virtual?

Answer:

Yes.

But it must always have
a Definition because it
is executed during
Object destruction.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting to define
the Pure Virtual
Destructor.

✘ Thinking Pure Virtual
Destructors never run.

✘ Confusing Pure Virtual
Functions with Pure
Virtual Destructors.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Will this compile?

virtual ~Animal() = 0;

without writing

Animal::~Animal(){}

Answer:

❌ No.

A Linker Error will
occur because the
Destructor definition
is missing.

◆───────────────────────────────◆

📝 Summary

Pure Virtual Destructor

↓

Makes Class Abstract

↓

Must Have Definition

↓

Derived Destructor

↓

Base Destructor

◆───────────────────────────────◆

📌 Quick Revision

virtual ~Class() = 0;

        │

Definition Required

        │

Derived Destructor

        │

Base Destructor

◆───────────────────────────────◆

*/