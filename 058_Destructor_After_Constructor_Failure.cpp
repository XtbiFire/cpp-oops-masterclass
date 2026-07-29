/*
◆───────────────────────────────◆
58. Destructor After Constructor Failure
◆───────────────────────────────◆

💡 Remember

If a Constructor throws an
Exception,

the Object is NOT fully
created.

Therefore,

its Destructor is NOT
called.

However,

Constructors and
Destructors of already
constructed Member Objects
are executed correctly.

◆───────────────────────────────◆

🎯 Goal

Understand what happens
when a Constructor fails
during Object creation.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine building a House.

First,

the Foundation is built.

Then,

an accident happens.

The House is never
completed.

So,

the unfinished House
cannot be demolished.

But,

the completed Foundation
is cleaned up safely.

Similarly,

only fully constructed
parts are destroyed.

◆───────────────────────────────◆

🌍 Real Life Example

Member Object
Created
      │
      ▼
Outer Constructor
Throws Exception
      │
      ▼
Member Destructor Runs
      │
      ▼
Outer Destructor
Does NOT Run

◆───────────────────────────────◆

⭐ Key Points

✔ Object is not fully
created.

✔ Outer Destructor is not
called.

✔ Member Objects are
cleaned automatically.

✔ No memory leak for
constructed Members.

✔ Exception handling is
important.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
#include <stdexcept>
using namespace std;

class Engine
{
public:

    Engine()
    {
        cout << "Engine Constructor"
             << endl;
    }

    ~Engine()
    {
        cout << "Engine Destructor"
             << endl;
    }
};

class Car
{
private:

    Engine engine;

public:

    Car()
    {
        cout << "Car Constructor"
             << endl;

        throw runtime_error(
            "Construction Failed");
    }

    ~Car()
    {
        cout << "Car Destructor"
             << endl;
    }
};

int main()
{
    try
    {
        Car c1;
    }
    catch(const exception& e)
    {
        cout << e.what()
             << endl;
    }

    return 0;
}

/*

▶ Execution Output

Engine Constructor

Car Constructor

Engine Destructor

Construction Failed

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

One Member Object is
constructed and cleaned
automatically.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Engine Constructor
runs first.

Step 2:

Car Constructor
starts.

Step 3:

An Exception is thrown.

Step 4:

Car Object is never
fully created.

Step 5:

Car Destructor does
NOT run.

Step 6:

Engine was already
constructed,

so its Destructor runs
automatically.

Step 7:

The Exception is caught
by the catch block.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

If a Constructor throws
an Exception,

which Destructor is called?

Answer:

The Destructor of the
partially created Object
does NOT run.

However,

all fully constructed
Base Classes and Member
Objects are destroyed
automatically.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking every
Destructor always runs.

✘ Forgetting that the
Object was never fully
constructed.

✘ Ignoring cleanup of
Member Objects.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Why does

Engine Destructor

run,

but

Car Destructor

does not?

Answer:

Because Engine was fully
constructed.

Car was never completely
constructed.

◆───────────────────────────────◆

📝 Summary

Engine Constructor
      │
Car Constructor
      │
Exception
      │
Engine Destructor
      │
Car Destructor
NOT Called

◆───────────────────────────────◆

📌 Quick Revision

Constructor
      │
Exception
      │
Object Not Created
      │
Member Cleanup
      │
No Outer Destructor

◆───────────────────────────────◆

*/