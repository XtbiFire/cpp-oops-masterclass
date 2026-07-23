/*
◆───────────────────────────────◆
41. Defaulted Constructor
◆───────────────────────────────◆

💡 Remember

A Defaulted Constructor
uses the Constructor
automatically generated
by the Compiler.

It is declared using

= default

◆───────────────────────────────◆

🎯 Goal

Understand how a Defaulted
Constructor works and why
it is used.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine buying a new Car.

Instead of building your
own Engine,

you tell the Company,

"Use the standard Engine."

Similarly,

= default tells the
Compiler,

"Generate the default
Constructor for me."

◆───────────────────────────────◆

🌍 Real Life Example

Company Engine

        │

        ▼

Standard Engine Installed

───────────────

Similarly,

Compiler

        │

        ▼

Generates Default
Constructor

◆───────────────────────────────◆

⭐ Key Points

✔ Uses = default.

✔ Compiler generates the
  Constructor.

✔ Cleaner than writing
  an empty Constructor.

✔ Introduced in C++11.

✔ Improves readability.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    // Defaulted Constructor
    Student() = default;

    string name = "Alex";
    int age = 20;

    void Display()
    {
        cout << "Name : "
             << name << endl;

        cout << "Age  : "
             << age << endl;
    }
};

int main()
{
    Student s1;

    s1.Display();

    return 0;
}

/*

▶ Execution Output

Name : Alex
Age  : 20

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

One Object is created
using the Compiler-
generated Constructor.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student() = default;

tells the Compiler
to generate the
Default Constructor.

Step 2:

Student s1;

creates an Object.

Step 3:

The Compiler-generated
Constructor runs.

Step 4:

The Object is created
successfully.

Step 5:

Display()

prints the values.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is a Defaulted
Constructor?

Answer:

A Defaulted Constructor
is a Constructor declared
using = default.

It tells the Compiler to
generate the default
Constructor automatically.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking = default
creates a custom
Constructor.

✘ Confusing = default
with = delete.

✘ Writing an empty
Constructor when
= default is enough.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which keyword asks the
Compiler to generate the
Default Constructor?

Answer:

✅ = default

◆───────────────────────────────◆

📝 Summary

Compiler
      │
= default
      │
Default Constructor
Generated
      │
Object Created

◆───────────────────────────────◆

📌 Quick Revision

= default
      │
Compiler Generates
Constructor
      │
Cleaner Code
      │
Modern C++

◆───────────────────────────────◆

*/