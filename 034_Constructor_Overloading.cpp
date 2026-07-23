/*
◆───────────────────────────────◆
34. Constructor Overloading
◆───────────────────────────────◆

💡 Remember

A Class can have multiple
Constructors.

Each Constructor must have
a different parameter list.

This is called
Constructor Overloading.

◆───────────────────────────────◆

🎯 Goal

Understand how multiple
Constructors can initialize
Objects in different ways.

◆───────────────────────────────◆

📖 Simple Meaning

Sometimes,

different Objects need
different information.

For example,

Player 1

Name only

Player 2

Name + Health

Player 3

Name + Health + Level

Instead of creating
different Classes,

we create multiple
Constructors.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine buying a Laptop.

Option 1

Laptop()

Default Laptop

───────────────

Option 2

Laptop("Dell")

Only Brand

───────────────

Option 3

Laptop("Dell",16)

Brand + RAM

Same Laptop,

Different ways
to create it.

Similarly,

one Class can have
multiple Constructors.

◆───────────────────────────────◆

⭐ Key Points

✔ Multiple Constructors
  are allowed.

✔ Constructor names remain
  the same.

✔ Parameter lists must
  be different.

✔ Compiler selects the
  correct Constructor.

✔ Improves flexibility.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name;
    int age;

    // Default Constructor
    Student()
    {
        name = "Unknown";
        age = 0;
    }

    // Constructor 2
    Student(string studentName)
    {
        name = studentName;
        age = 0;
    }

    // Constructor 3
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

        cout << endl;
    }
};

int main()
{
    Student s1;

    Student s2("Alex");

    Student s3("Emma",22);

    s1.Display();

    s2.Display();

    s3.Display();

    return 0;
}

/*

▶ Execution Output

Name : Unknown
Age  : 0

Name : Alex
Age  : 0

Name : Emma
Age  : 22

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Compiler chooses one
Constructor based on the
arguments passed.

◆───────────────────────────◆

🧠 Code Explanation

Step 1:

Student s1;

No arguments.

Default Constructor
is called.

Step 2:

Student s2("Alex");

One argument.

Second Constructor
is called.

Step 3:

Student s3("Emma",22);

Two arguments.

Third Constructor
is called.

Step 4:

Compiler automatically
matches the arguments
with the correct
Constructor.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is Constructor
Overloading?

Answer:

Constructor Overloading
means creating multiple
Constructors in the same
Class with different
parameter lists.

The Compiler automatically
calls the matching
Constructor.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Creating two Constructors
with exactly the same
parameters.

✘ Thinking Constructors
can have different names.

✘ Forgetting that only
the parameter list can
be different.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can two Constructors have
the same parameter list?

Answer:

❌ No.

The Compiler cannot
distinguish between them.

◆───────────────────────────────◆

📝 Summary

One Class
      │
      ▼
Many Constructors
      │
      ▼
Different Parameters
      │
      ▼
Compiler Chooses
Correct Constructor

◆───────────────────────────────◆

📌 Quick Revision

Constructor Overloading
          │
Same Name
          │
Different Parameters
          │
Automatic Selection
          │
Flexible Object Creation

◆───────────────────────────────◆

*/