/*
◆───────────────────────────────◆
64. Local Object Destructor
◆───────────────────────────────◆

💡 Remember

A Local Object is an
Object created inside a
Function or Block.

Its Destructor is called
automatically when the
Object goes out of Scope.

◆───────────────────────────────◆

🎯 Goal

Understand when the
Destructor of a Local
Object is called.

◆───────────────────────────────◆

📖 Simple Meaning

A Local Object lives only
inside its Scope.

As soon as the Scope ends,

the Object is destroyed
automatically.

Its Destructor is called
immediately.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Classroom.

A Student enters the
Classroom.

He studies only during
the Class.

When the Class ends,

he leaves automatically.

Similarly,

a Local Object exists
only inside its Scope.

◆───────────────────────────────◆

⭐ Key Points

✔ Created inside a
Function or Block.

✔ Lifetime depends on
its Scope.

✔ Destructor runs
automatically.

✔ No need to call
delete.

✔ Destroyed when Scope
ends.

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

    cout << "Block Finished"
         << endl;

    return 0;
}

/*

▶ Execution Output

Program Starts

Constructor Called

Inside Block

Destructor Called

Block Finished

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

One Local Object is
created and destroyed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

A new Block starts.

Step 2:

Local Object

s1

is created.

Step 3:

Constructor runs.

Step 4:

Program executes inside
the Block.

Step 5:

The Block ends.

Step 6:

The Local Object goes
out of Scope.

Step 7:

Destructor runs
automatically.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

When is the Destructor
of a Local Object called?

Answer:

A Local Object's
Destructor is called
automatically when the
Object goes out of Scope.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking Local Objects
live until the Program
ends.

✘ Calling delete on a
Local Object.

✘ Forgetting that Scope
controls its lifetime.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

When does

Student s1;

get destroyed?

{
    Student s1;
}

Answer:

✅ Immediately after the
closing brace ( } ).

◆───────────────────────────────◆

📝 Summary

Local Object
      │
Constructor
      │
Scope Ends
      │
Destructor
      │
Object Destroyed

◆───────────────────────────────◆

📌 Quick Revision

Local Object
      │
Inside Scope
      │
Scope Ends
      │
Destructor Runs
      │
Object Destroyed

◆───────────────────────────────◆

*/