/*
◆───────────────────────────────◆
32. Parameterized Constructor
◆───────────────────────────────◆

💡 Remember

A Parameterized Constructor
accepts one or more arguments.

It allows different Objects
to be initialized with
different values.

◆───────────────────────────────◆

🎯 Goal

Understand how a Parameterized
Constructor initializes
Objects with custom values.

◆───────────────────────────────◆

📖 Simple Meaning

Sometimes,

every Object should not
have the same data.

For example,

Every Student has a
different name and age.

A Parameterized Constructor
allows us to provide those
values during Object creation.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Game.

Player 1

Name : Alex

Health : 100

───────────────

Player 2

Name : John

Health : 80

───────────────

Player 3

Name : Emma

Health : 150

Every player is different.

Similarly,

a Parameterized Constructor
creates different Objects
using different values.

◆───────────────────────────────◆

⭐ Key Points

✔ Accepts parameters.

✔ Initializes Objects
  with custom values.

✔ Different Objects can
  store different data.

✔ Called automatically
  during Object creation.

✔ More useful than always
  assigning the same values.

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

    // Parameterized Constructor
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
    Student s1("Alex", 20);

    Student s2("Emma", 22);

    s1.Display();

    s2.Display();

    return 0;
}

/*

▶ Execution Output

Name : Alex
Age  : 20

Name : Emma
Age  : 22

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

The Constructor performs
constant-time initialization.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student(string studentName,
        int studentAge)

This Constructor accepts
two parameters.

Step 2:

Student s1("Alex", 20);

creates an Object.

Constructor receives

studentName = "Alex"

studentAge = 20

Step 3:

The values are copied
into the Object.

Step 4:

Student s2("Emma", 22);

creates another Object
with different values.

Step 5:

Both Objects store
different information.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is a Parameterized
Constructor?

Answer:

A Parameterized Constructor
accepts arguments and
initializes Objects with
custom values during
Object creation.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking a Parameterized
Constructor must be called
manually.

✘ Passing arguments of
the wrong type.

✘ Forgetting that different
Objects can receive
different values.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can two Objects created
using the same Parameterized
Constructor have different
values?

Answer:

✅ Yes.

Each Object receives the
arguments passed during
its creation.

◆───────────────────────────────◆

📝 Summary

Object Created
      │
      ▼
Arguments Passed
      │
      ▼
Parameterized Constructor
      │
      ▼
Object Initialized

◆───────────────────────────────◆

📌 Quick Revision

Parameterized Constructor
        │
Accepts Parameters
        │
Custom Initialization
        │
Different Objects
Different Values

◆───────────────────────────────◆

*/