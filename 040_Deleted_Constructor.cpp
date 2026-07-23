/*
◆───────────────────────────────◆
40. Deleted Constructor
◆───────────────────────────────◆

💡 Remember

A Deleted Constructor
cannot be used.

The Compiler generates
an error if someone tries
to call it.

It is declared using

= delete

◆───────────────────────────────◆

🎯 Goal

Understand how to disable
a Constructor using
= delete.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine a Building.

One Door has a sign:

🚫 Entry Not Allowed

Even if someone tries to
enter,

security stops them.

Similarly,

a Deleted Constructor
cannot be called.

The Compiler immediately
reports an error.

◆───────────────────────────────◆

🌍 Real Life Example

Object Creation

        │

Default Constructor

        │

❌ Deleted

        │

Compiler Error

───────────────

Parameterized Constructor

        │

✅ Allowed

        │

Object Created

◆───────────────────────────────◆

⭐ Key Points

✔ Uses = delete.

✔ Prevents Object creation.

✔ Compiler reports an error.

✔ Improves program safety.

✔ Introduced in C++11.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    // Deleted Default Constructor
    Student() = delete;

    // Parameterized Constructor
    Student(string studentName)
    {
        cout << "Student : "
             << studentName
             << endl;
    }
};

int main()
{
    // Student s1;   ❌ Error

    Student s2("Alex");

    return 0;
}

/*

▶ Execution Output

Student : Alex

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only one Object is created.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student() = delete;

tells the Compiler that
the Default Constructor
cannot be used.

Step 2:

If we write

Student s1;

the Compiler reports
an error.

Step 3:

Student s2("Alex");

uses the Parameterized
Constructor.

Step 4:

The Object is created
successfully.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is a Deleted
Constructor?

Answer:

A Deleted Constructor is
a Constructor marked with

= delete

It cannot be called.

If someone tries to use it,
the Compiler generates
an error.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking = delete removes
the Constructor at runtime.

It is checked during
compilation.

✘ Forgetting that other
Constructors can still
be used.

✘ Confusing = delete with
private Constructors.

They solve different
problems.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Will this compile?

Student s1;

Answer:

❌ No.

Because the Default
Constructor has been
deleted.

◆───────────────────────────────◆

📝 Summary

Constructor
      │
= delete
      │
Cannot Be Called
      │
Compiler Error

◆───────────────────────────────◆

📌 Quick Revision

Deleted Constructor
        │
= delete
        │
Object Creation Blocked
        │
Compile-Time Error

◆───────────────────────────────◆

*/