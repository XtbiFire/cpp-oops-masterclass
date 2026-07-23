/*
◆───────────────────────────────◆
37. Delegating Constructor
◆───────────────────────────────◆

💡 Remember

A Constructor can call
another Constructor of
the same Class.

This is called
Delegating Constructor.

◆───────────────────────────────◆

🎯 Goal

Understand how one
Constructor can reuse
another Constructor.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine filling a College Form.

Basic Form

↓

Name

───────────────

Advanced Form

↓

Name
Age
Course

Instead of writing the
same code again,

the Advanced Form first
uses the Basic Form,
then fills the remaining
information.

Similarly,

one Constructor can call
another Constructor.

◆───────────────────────────────◆

🌍 Real Life Example

Student()

      │
      ▼

Student("Unknown",0)

      │
      ▼

Object Ready

Code is reused instead
of being written twice.

◆───────────────────────────────◆

⭐ Key Points

✔ One Constructor calls
another Constructor.

✔ Reduces duplicate code.

✔ Improves readability.

✔ Constructor name
remains the same.

✔ Available since C++11.

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

    // Main Constructor
    Student(string studentName,
            int studentAge)
    {
        name = studentName;
        age = studentAge;

        cout << "Main Constructor"
             << endl;
    }

    // Delegating Constructor
    Student()
        : Student("Unknown",0)
    {
        cout << "Delegating Constructor"
             << endl;
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
    Student s1;

    cout << endl;

    s1.Display();

    return 0;
}

/*

▶ Execution Output

Main Constructor
Delegating Constructor

Name : Unknown
Age  : 0

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

Student s1;

calls the Default
Constructor.

Step 2:

The Default Constructor
does not initialize the
data itself.

Step 3:

It delegates the work to

Student("Unknown",0)

Step 4:

The Main Constructor
initializes the Object.

Step 5:

Control returns to the
Delegating Constructor.

Object becomes ready.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is a Delegating
Constructor?

Answer:

A Delegating Constructor
calls another Constructor
of the same Class to
reuse initialization code.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Calling another
Constructor like a
normal function.

✘ Creating circular
delegation between
Constructors.

✘ Repeating the same
initialization code in
multiple Constructors.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Why use a Delegating
Constructor?

Answer:

To avoid duplicate code
and centralize Object
initialization.

◆───────────────────────────────◆

📝 Summary

Constructor
      │
Calls Another
Constructor
      │
Code Reused
      │
Cleaner Program

◆───────────────────────────────◆

📌 Quick Revision

One Constructor
        │
Calls Another
        │
No Duplicate Code
        │
Better Design

◆───────────────────────────────◆

*/