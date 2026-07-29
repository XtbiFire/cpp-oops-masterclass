/*
◆───────────────────────────────◆
54. Temporary Objects And Constructors
◆───────────────────────────────◆

💡 Remember

A Temporary Object is
created automatically
by the Compiler.

It exists only for a
short time.

After its work is
finished,

it is destroyed
automatically.

◆───────────────────────────────◆

🎯 Goal

Understand Temporary
Objects and when they
are created.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine borrowing a Chair
for an Exam.

You use it only during
the Exam.

After the Exam,

the Chair is returned.

Similarly,

a Temporary Object exists
only until it is no longer
needed.

◆───────────────────────────────◆

🌍 Real Life Example

Temporary Object

        │

Created

        │

Used

        │

Destroyed

The Object lives only
for a short duration.

◆───────────────────────────────◆

⭐ Key Points

✔ Created automatically.

✔ Lives for a short time.

✔ Destructor runs
automatically.

✔ Often created when
returning Objects.

✔ Important for Move
Semantics.

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
    Student();

    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Destructor Called

Inside main()

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only one Temporary
Object is created.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student();

creates a Temporary
Object.

Step 2:

Its Constructor
runs immediately.

Step 3:

The Object is not
stored in any variable.

Step 4:

After the statement
ends,

the Temporary Object
is destroyed.

Step 5:

Its Destructor runs
automatically.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is a Temporary
Object?

Answer:

A Temporary Object is
an unnamed Object
created automatically
by the Compiler.

It exists only until
the end of the
expression.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking Temporary
Objects live until
program ends.

✘ Confusing Temporary
Objects with Local
Objects.

✘ Assuming they must
always have a name.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Does

Student();

create an Object?

Answer:

✅ Yes.

It creates an unnamed
Temporary Object.

◆───────────────────────────────◆

📝 Summary

Temporary Object
      │
Constructor
      │
Used
      │
Destructor
      │
Destroyed

◆───────────────────────────────◆

📌 Quick Revision

Temporary Object
      │
Unnamed
      │
Short Lifetime
      │
Automatic Destruction

◆───────────────────────────────◆

*/