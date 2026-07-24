/*
◆───────────────────────────────◆
48. Rule Of Zero
◆───────────────────────────────◆

💡 Remember

If a Class does not manage
resources directly,

it should not manually
write

✔ Destructor

✔ Copy Constructor

✔ Copy Assignment Operator

✔ Move Constructor

✔ Move Assignment Operator

Let the Compiler generate
them automatically.

This is called the
Rule Of Zero.

◆───────────────────────────────◆

🎯 Goal

Understand why modern C++
prefers letting the
Compiler manage special
Member Functions.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine buying a Fully
Automatic Washing Machine.

You do not manually

✔ Fill Water

✔ Drain Water

✔ Dry Clothes

The Machine manages
everything itself.

Similarly,

Modern C++ classes use
standard library classes
like string and vector.

These classes already
manage memory safely.

So,

you do not need to write
special Member Functions.

◆───────────────────────────────◆

🌍 Real Life Example

Student
      │
      ▼
string
vector
smart pointers
      │
      ▼
Compiler Handles
Everything

◆───────────────────────────────◆

⭐ Key Points

✔ No manual memory
  management.

✔ No Destructor.

✔ No Copy Constructor.

✔ No Move Constructor.

✔ Preferred in Modern C++.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:

    string name;
    int age;

    Student(string studentName,
            int studentAge)
    {
        name = studentName;
        age = studentAge;
    }

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
    Student s1("Alex",20);

    Student s2 = s1;

    s1.Display();

    cout << endl;

    s2.Display();

    return 0;
}

/*

▶ Execution Output

Name : Alex
Age  : 20

Name : Alex
Age  : 20

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

The Compiler-generated
special Member Functions
are sufficient because
no dynamic memory is
managed manually.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student contains

string

and

int.

Step 2:

string already manages
its own memory safely.

Step 3:

The Compiler generates

✔ Destructor

✔ Copy Constructor

✔ Copy Assignment

✔ Move Constructor

✔ Move Assignment

automatically.

Step 4:

No custom memory
management is needed.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the Rule Of Zero?

Answer:

The Rule Of Zero says that
Classes should avoid
managing resources
directly.

Instead, use standard
library types so the
Compiler-generated special
Member Functions are
enough.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Writing a Destructor
without managing any
resource.

✘ Writing unnecessary
Copy or Move functions.

✘ Ignoring standard
library classes.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which rule is preferred
in Modern C++?

Answer:

✅ Rule Of Zero

Because it reduces bugs
and makes code simpler.

◆───────────────────────────────◆

📝 Summary

No Manual Resource
Management
      │
      ▼
Compiler Generates
Special Functions
      │
      ▼
Cleaner Code
      │
      ▼
Safer Program

◆───────────────────────────────◆

📌 Quick Revision

Rule Of Zero
      │
No Manual Memory
Management
      │
Compiler Handles
Everything
      │
Modern C++ Best Practice

◆───────────────────────────────◆

*/