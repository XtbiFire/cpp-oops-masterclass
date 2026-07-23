/*
◆───────────────────────────────◆
38. Explicit Constructor
◆───────────────────────────────◆

💡 Remember

An Explicit Constructor
prevents automatic
implicit conversions.

It forces the programmer
to create Objects
explicitly.

◆───────────────────────────────◆

🎯 Goal

Understand why the
explicit keyword is used
with Constructors.

◆───────────────────────────────◆

📖 Simple Meaning

Suppose a Club allows
entry only with an
ID Card.

Without checking,

nobody can enter.

Similarly,

explicit prevents C++
from automatically
creating Objects.

The programmer must
create the Object
intentionally.

◆───────────────────────────────◆

🌍 Real Life Example

Without explicit

Person
      │
Automatically Allowed
      │
Object Created

───────────────

With explicit

Person
      │
ID Checked
      │
Object Created
      │
Only if allowed

◆───────────────────────────────◆

⭐ Key Points

✔ Uses the explicit keyword.

✔ Stops implicit conversion.

✔ Makes code safer.

✔ Prevents accidental
  Object creation.

✔ Commonly used with
  single-parameter
  Constructors.

Student s = 20;   // Allowed?
Student s(20);    // Allowed?
Student s{20};    // Allowed?
◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    int age;

    // Explicit Constructor
    explicit Student(int studentAge)
    {
        age = studentAge;
    }

    void Display()
    {
        cout << "Age : "
             << age << endl;
    }
};

int main()
{
    Student s1(20);

    s1.Display();

    return 0;
}

/*

▶ Execution Output

Age : 20

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only one Object is
initialized.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

The Constructor is marked
with the explicit keyword.

Step 2:

Student s1(20);

creates the Object.

Step 3:

The Constructor stores
20 inside age.

Step 4:

Display()

prints the value.

Step 5:

The explicit keyword
prevents unwanted
automatic conversions.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why do we use the
explicit keyword?

Answer:

The explicit keyword
prevents implicit Object
creation and accidental
type conversions.

It makes the program
safer and easier to
understand.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking explicit changes
the Constructor logic.

✘ Using explicit on every
Constructor unnecessarily.

✘ Forgetting that it is
mainly useful for
single-parameter
Constructors.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which Constructor usually
uses explicit?

Answer:

A Constructor having
only one parameter.

◆───────────────────────────────◆

📝 Summary

Single Parameter
Constructor
        │
explicit
        │
No Implicit Conversion
        │
Safer Code

◆───────────────────────────────◆

📌 Quick Revision

explicit
     │
Stops Automatic
Conversion
     │
Programmer Creates
Object
     │
Safer C++

◆───────────────────────────────◆

*/