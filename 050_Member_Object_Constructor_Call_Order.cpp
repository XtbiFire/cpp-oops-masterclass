/*
◆───────────────────────────────◆
50. Member Object Constructor Call Order
◆───────────────────────────────◆

💡 Remember

When a Class contains
another Class as a Member,

the Member Object's
Constructor runs first.

Then,

the Outer Class
Constructor runs.

◆───────────────────────────────◆

🎯 Goal

Understand the order in
which Constructors are
called for Member Objects.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine building a Car.

First,

the Engine is installed.

Then,

the Car is assembled.

Without the Engine,
the Car cannot be
completed.

Similarly,

Member Objects are created
before the Outer Object.

◆───────────────────────────────◆

🌍 Real Life Example

Engine
   │
   ▼
Constructor

───────────────

Car
   │
   ▼
Constructor

Engine is ready before
the Car.

◆───────────────────────────────◆

⭐ Key Points

✔ Member Objects are
created first.

✔ Outer Class Constructor
runs later.

✔ Destruction happens in
the reverse order.

✔ Declaration order
decides Constructor order.

✔ Initialization List
does NOT change the order.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Engine
{
public:

    Engine()
    {
        cout << "Engine Constructor"
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
    }
};

int main()
{
    Car c1;

    return 0;
}

/*

▶ Execution Output

Engine Constructor
Car Constructor

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only one Engine Object
and one Car Object
are created.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Car object creation starts.

Step 2:

Car contains

Engine engine;

as a Member Object.

Step 3:

Engine Constructor
runs first.

Step 4:

After Engine is ready,

Car Constructor
runs.

Step 5:

The complete Car
Object is ready.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Which Constructor is
called first?

Member Object
Constructor

OR

Outer Class Constructor

Answer:

The Member Object
Constructor always
runs first.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking the Outer
Class Constructor
runs first.

✘ Believing the
Initialization List
changes Constructor
order.

✘ Ignoring declaration
order of Member Objects.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

If a Class has three
Member Objects,

which Constructor
runs first?

Answer:

Constructors run in the
same order in which
the Member Objects are
declared inside the Class.

◆───────────────────────────────◆

📝 Summary

Member Object
      │
      ▼
Member Constructor
      │
      ▼
Outer Class Constructor
      │
      ▼
Object Ready

◆───────────────────────────────◆

📌 Quick Revision

Member Object
      │
Constructor First
      │
Outer Constructor
      │
Object Created

◆───────────────────────────────◆

*/