/*
◆───────────────────────────────◆
52. Static Object Constructor Order
◆───────────────────────────────◆

💡 Remember

A Static Object is created
only once.

Its Constructor runs
before main() starts.

Its Destructor runs
after main() ends.

◆───────────────────────────────◆

🎯 Goal

Understand when the
Constructor and Destructor
of a Static Object are called.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine a School.

The Principal arrives
before all Students.

At the end of the day,

Students leave first.

The Principal leaves last.

Similarly,

A Static Object exists
before main() begins
and is destroyed after
main() finishes.

◆───────────────────────────────◆

🌍 Real Life Example

Program Starts
       │
       ▼
Static Object Created

───────────────

main() Starts

───────────────

main() Ends

───────────────

Static Object Destroyed

◆───────────────────────────────◆

⭐ Key Points

✔ Created only once.

✔ Constructor runs before
  main().

✔ Destructor runs after
  main().

✔ Lifetime is the entire
  program.

✔ Useful for shared data.

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
        cout << "Constructor Called"
             << endl;
    }

    ~Demo()
    {
        cout << "Destructor Called"
             << endl;
    }
};

// Static Object
static Demo obj;

int main()
{
    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Inside main()

Destructor Called

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only one Static Object
exists during the entire
program.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Static Object

obj

is created before
main() starts.

Step 2:

Its Constructor
runs automatically.

Step 3:

main() begins.

Step 4:

After main() ends,

the Static Object is
destroyed automatically.

Step 5:

Its Destructor runs.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

When does a Static Object's
Constructor run?

Answer:

The Constructor runs
before main() starts.

Its Destructor runs
after main() finishes.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking Static Objects
are created inside main().

✘ Forgetting that they
exist for the entire
program.

✘ Assuming they are
created every time a
function is called.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which runs first?

Static Object Constructor

OR

main()

Answer:

✅ Static Object
Constructor

because the Object is
created before main().

◆───────────────────────────────◆

📝 Summary

Program Starts
      │
      ▼
Static Constructor
      │
      ▼
main()
      │
      ▼
Static Destructor
      │
      ▼
Program Ends

◆───────────────────────────────◆

📌 Quick Revision

Static Object
      │
Constructor First
      │
main()
      │
Destructor Last

◆───────────────────────────────◆

*/