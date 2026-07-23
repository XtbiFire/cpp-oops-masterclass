/*
◆───────────────────────────────◆
35. Default Arguments In Constructor
◆───────────────────────────────◆

💡 Remember

A Constructor can have
Default Arguments.

If some arguments are not
provided, the default values
are automatically used.

◆───────────────────────────────◆

🎯 Goal

Understand how Default
Arguments simplify Object
creation.

◆───────────────────────────────◆

📖 Simple Meaning

Sometimes,

we want some values to be
optional.

If the user does not provide
them,

the Constructor uses
default values.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine ordering a Pizza.

Order()

↓

Small Pizza

───────────────

Order("Medium")

↓

Medium Pizza

───────────────

Order("Large",2)

↓

Large Pizza
2 Extra Cheese

The missing information
is automatically filled
using default values.

Similarly,

Constructors can also use
Default Arguments.

◆───────────────────────────────◆

⭐ Key Points

✔ Parameters can have
  default values.

✔ Missing arguments use
  default values.

✔ Reduces unnecessary
  Constructor Overloading.

✔ Makes code simpler.

✔ Compiler fills missing
  arguments automatically.

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

    // Constructor with Default Arguments
    Student(string studentName = "Unknown",
            int studentAge = 0)
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

The Constructor initializes
the Object in constant time.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student s1;

No arguments.

Default values are used.

Step 2:

Student s2("Alex");

Only the name is passed.

Age automatically becomes 0.

Step 3:

Student s3("Emma",22);

Both values are provided.

No default values are used.

Step 4:

The Compiler automatically
fills any missing arguments
using the default values.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What are Default Arguments
in a Constructor?

Answer:

Default Arguments are values
assigned to Constructor
parameters.

If arguments are not passed,
the default values are used
automatically.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Giving default values to
middle parameters only.

✘ Thinking every argument
must always be passed.

✘ Mixing Constructor
Overloading and Default
Arguments without planning.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can a Constructor with
Default Arguments replace
some overloaded Constructors?

Answer:

✅ Yes.

In many cases, one Constructor
with Default Arguments can
replace multiple overloaded
Constructors.

◆───────────────────────────────◆

📝 Summary

Constructor
      │
Default Arguments
      │
Missing Values Filled
Automatically
      │
Simpler Code

◆───────────────────────────────◆

📌 Quick Revision

Default Arguments
        │
Optional Parameters
        │
Automatic Values
        │
Flexible Object Creation

◆───────────────────────────────◆

*/