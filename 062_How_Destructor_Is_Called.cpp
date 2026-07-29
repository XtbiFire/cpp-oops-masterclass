/*
◆───────────────────────────────◆
62. How Destructor Is Called?
◆───────────────────────────────◆

💡 Remember

A Destructor is called
automatically when an
Object is destroyed.

It is NEVER called
automatically while the
Object is still alive.

◆───────────────────────────────◆

🎯 Goal

Understand exactly when
a Destructor is called
in C++.

◆───────────────────────────────◆

📖 Simple Meaning

Every Object has a
lifetime.

When that lifetime ends,

the Destructor runs
automatically.

◆───────────────────────────────◆

🌍 Real Life Example

Employee Joins Company

        │

Works

        │

Resigns

        │

ID Card Returned

The ID Card is collected
only when the Employee
leaves.

Similarly,

Destructor runs only
when the Object's life
ends.

◆───────────────────────────────◆

⭐ Key Points

✔ Called automatically.

✔ Runs when Object's
  lifetime ends.

✔ Local Objects are
  destroyed when Scope
  ends.

✔ Dynamic Objects are
  destroyed using delete.

✔ Global & Static Objects
  are destroyed when the
  Program ends.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    Student()
    {
        cout << "Constructor Called"
             << endl;
    }

    ~Student()
    {
        cout << "Destructor Called"
             << endl;
    }
};

int main()
{
    cout << "Program Starts"
         << endl;

    {
        Student s1;

        cout << "Inside Block"
             << endl;
    }

    cout << "Outside Block"
         << endl;

    return 0;
}

/*

▶ Execution Output

Program Starts

Constructor Called

Inside Block

Destructor Called

Outside Block

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only one Object is
created and destroyed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Program starts.

Step 2:

Object s1 is created.

Step 3:

Constructor runs.

Step 4:

Execution reaches the
end of the block.

Step 5:

The Object goes out
of Scope.

Step 6:

Destructor runs
automatically.

Step 7:

Program continues.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

When is a Destructor
called?

Answer:

A Destructor is called
automatically when an
Object's lifetime ends.

Examples:

• Scope ends.

• delete is used.

• Program ends for
  Global and Static
  Objects.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking Destructor
runs after every line.

✘ Forgetting that Scope
controls Local Objects.

✘ Forgetting delete for
Dynamic Objects.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

When does s1 get
destroyed?

{
    Student s1;
}

Answer:

Immediately after the
closing brace ( } ).

◆───────────────────────────────◆

📝 Summary

Object Created
      │
Constructor
      │
Program Executes
      │
Scope Ends
      │
Destructor

◆───────────────────────────────◆

📌 Quick Revision

Local Object
      │
Scope Ends
      │
Destructor Runs

Dynamic Object
      │
delete
      │
Destructor Runs

Global / Static Object
      │
Program Ends
      │
Destructor Runs

◆───────────────────────────────◆

*/