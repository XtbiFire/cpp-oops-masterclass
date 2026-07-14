/*
◆───────────────────────────────◆
16. Member Functions
◆───────────────────────────────◆

💡 Remember

Functions declared inside a
Class are called Member
Functions.

They perform operations on
the Data Members of an Object.

◆───────────────────────────────◆

🎯 Goal

Understand what Member
Functions are, why they are
used, and how they work with
Data Members.

◆───────────────────────────────◆

📖 Simple Meaning

A Function written inside a
Class is called a Member
Function.

Just like Data Members store
information,

Member Functions perform
actions.

Without Member Functions,
an Object can store data,
but cannot perform work.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Car.

Car has

• Color
• Speed
• Fuel

These are Data Members.

The Car can also

• Start
• Stop
• Accelerate
• Brake

These are like Member
Functions.

Data tells us WHAT the Car has.

Functions tell us WHAT the
Car can do.

◆───────────────────────────────◆

⭐ Key Points

✔ Functions inside a Class
  are called Member Functions.

✔ Member Functions perform
  actions.

✔ They can access Data
  Members directly.

✔ One Class can have many
  Member Functions.

✔ Member Functions are
  called using the Dot (.)
  Operator.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Car
{
public:

    // Data Members
    string color = "Red";
    int speed = 120;

    // Member Function
    void ShowData()
    {
        cout << "Color : "
             << color << endl;

        cout << "Speed : "
             << speed << " km/h"
             << endl;
    }

    // Member Function
    void Start()
    {
        cout << "Car Started..."
             << endl;
    }

    // Member Function
    void Stop()
    {
        cout << "Car Stopped..."
             << endl;
    }
};

// Main Function
int main()
{
    // Object Creation
    Car c1;

    // Calling Member Functions
    c1.ShowData();

    cout << endl;

    c1.Start();
    c1.Stop();

    return 0;
}

/*

▶ Execution Output

Color : Red
Speed : 120 km/h

Car Started...
Car Stopped...

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

One Object is created and
a fixed number of Member
Functions are called.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

A Class named Car
is created.

Step 2:

'color' and 'speed'
are Data Members.

Step 3:

ShowData(),
Start(),
and Stop()

are Member Functions.

Step 4:

Car c1;

creates an Object.

Step 5:

c1.ShowData();

prints the Data Members.

Step 6:

c1.Start();

starts the Car.

Step 7:

c1.Stop();

stops the Car.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is a Member Function?

Answer:

A Function declared inside
a Class is called a Member
Function.

It performs operations on
the Data Members of an
Object.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting to create an
Object before calling a
Member Function.

✘ Calling a Member Function
without using the Dot (.).

Wrong

Start();

Correct

c1.Start();

✘ Thinking Member Functions
can exist outside a Class.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can a Member Function
directly access Data Members
of the same Class?

Answer:

✅ Yes.

Example:

void ShowData()
{
    cout << color;
}

No Object Name is needed
inside the same Class.

◆───────────────────────────────◆

📝 Summary

Member Functions are
Functions inside a Class.

They perform actions and
work with Data Members.

Objects use the Dot (.)
Operator to call them.

◆───────────────────────────────◆

📌 Quick Revision

Class
   │
├── Data Members
│      │
│      ▼
│   Store Data
│
└── Member Functions
       │
       ▼
 Perform Actions
       │
Called Using (.)

◆───────────────────────────────◆

*/