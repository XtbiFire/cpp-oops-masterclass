/*
◆───────────────────────────────◆
53. Global Object Constructor Order
◆───────────────────────────────◆

💡 Remember

A Global Object is created
before main() starts.

Its Constructor runs
automatically before main().

Its Destructor runs
after main() ends.

◆───────────────────────────────◆

🎯 Goal

Understand when Global
Objects are created and
destroyed.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine an Office.

The Security Guard
arrives before all
employees.

At the end of the day,

all employees leave first.

The Security Guard
leaves last.

Similarly,

a Global Object is
created before main()
and destroyed after
main() finishes.

◆───────────────────────────────◆

🌍 Real Life Example

Program Starts
       │
       ▼
Global Object Created

───────────────

main() Starts

───────────────

main() Ends

───────────────

Global Object Destroyed

◆───────────────────────────────◆

⭐ Key Points

✔ Declared outside all
Classes and Functions.

✔ Constructor runs before
main().

✔ Destructor runs after
main().

✔ Lifetime is the entire
program.

✔ Accessible globally.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Demo
{
public:

    Demo()
    {
        cout << "Global Object Constructor"
             << endl;
    }

    ~Demo()
    {
        cout << "Global Object Destructor"
             << endl;
    }
};

// Global Object
Demo obj;

int main()
{
    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Global Object Constructor

Inside main()

Global Object Destructor

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only one Global Object
exists throughout the
program.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Global Object

obj

is created before
main() starts.

Step 2:

Its Constructor runs
automatically.

Step 3:

main() executes.

Step 4:

After main() finishes,

the Global Object is
destroyed automatically.

Step 5:

Its Destructor runs.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

When is a Global Object's
Constructor called?

Answer:

A Global Object's
Constructor is called
before main() starts.

Its Destructor is called
after main() ends.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking Global Objects
are created inside main().

✘ Confusing Global Objects
with Local Objects.

✘ Forgetting that Global
Objects remain alive
throughout the program.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which runs first?

Global Object Constructor

OR

main()

Answer:

✅ Global Object
Constructor

because Global Objects
are initialized before
main() begins.

◆───────────────────────────────◆

📝 Summary

Program Starts
      │
      ▼
Global Constructor
      │
      ▼
main()
      │
      ▼
Global Destructor
      │
      ▼
Program Ends

◆───────────────────────────────◆

📌 Quick Revision

Global Object
      │
Constructor First
      │
main()
      │
Destructor Last

◆───────────────────────────────◆

*/