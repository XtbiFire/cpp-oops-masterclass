/*
◆───────────────────────────────◆
28. Default Constructor
◆───────────────────────────────◆

💡 Remember

A Default Constructor is a
Constructor that takes
no arguments.

It is automatically called
when an Object is created
without passing any values.

◆───────────────────────────────◆

🎯 Goal

Understand what a Default
Constructor is and when
it is used.

◆───────────────────────────────◆

📖 Simple Meaning

Suppose you buy a new Phone.

You don't change any settings.

The company automatically
provides default settings.

Similarly,

when no values are provided,

the Default Constructor
initializes the Object.

◆───────────────────────────────◆

🌍 Real Life Example

New Mobile

        Mobile
           │
           ▼
 Default Settings Applied

✔ Brightness

✔ Language

✔ Volume

No manual setup needed.

Similarly,

Object Created

        │
        ▼

Default Constructor Runs

        │
        ▼

Object Gets Default Values

◆───────────────────────────────◆

⭐ Key Points

✔ Takes no arguments.

✔ Called automatically.

✔ Initializes Objects.

✔ Runs once per Object.

✔ Makes Objects ready to use.

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
        name = "Alex";
        age = 20;
    }

    void ShowData()
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

    s1.ShowData();

    return 0;
}

/*

▶ Execution Output

Name : Alex
Age  : 20

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

Student()

has no parameters.

Therefore,

it is called a
Default Constructor.

Step 2:

Student s1;

creates an Object.

Step 3:

Since no values are passed,

the Default Constructor
runs automatically.

Step 4:

The Constructor assigns

name = "Alex"

age = 20

Step 5:

ShowData()

prints the initialized values.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is a Default Constructor?

Answer:

A Default Constructor is
a Constructor that takes
no arguments.

It is automatically called
when an Object is created
without passing any values.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking every Constructor
is a Default Constructor.

Only Constructors with
no parameters are Default
Constructors.

✘ Calling the Constructor
manually.

Constructors are called
automatically.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Will the Default Constructor
run if we write

Student s1;

?

Answer:

✅ Yes.

Because no arguments
are passed.

◆───────────────────────────────◆

📝 Summary

Object Created

      │

No Arguments

      │

Default Constructor

      │

Object Initialized

◆───────────────────────────────◆

📌 Quick Revision

Default Constructor

      │

No Parameters

      │

Automatic Call

      │

Initialize Object

◆───────────────────────────────◆

*/