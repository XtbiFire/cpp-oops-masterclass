/*
◆───────────────────────────────◆
13. Access Specifier : public
◆───────────────────────────────◆

💡 Remember

public is an Access Specifier.

Members declared as public
can be accessed from anywhere
inside the program.

◆───────────────────────────────◆

🎯 Goal

Understand what public is,
why it is used, and how it
allows access to Class Members.

◆───────────────────────────────◆

📖 Simple Meaning

Think of public as an
"Open Door".

Anyone who has the Object
can access the public
members.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Public Park.

          Public Park
               │
               ▼
 Everyone Can Enter Freely

Similarly,

public Members can be
accessed by everyone
using the Object.

◆───────────────────────────────◆

⭐ Key Points

✔ public is an Access Specifier.

✔ public Members are
  accessible from outside
  the Class.

✔ Data Members and Member
  Functions can both be public.

✔ Access is done using
  the dot (.) operator.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Student
{
public:

    // Data Members
    string name = "Alex";
    int age = 20;

    // Member Function
    void ShowData()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Main Function
int main()
{
    // Object Creation
    Student s1;

    // Accessing Data Members
    cout << s1.name << endl;
    cout << s1.age << endl;

    cout << endl;

    // Calling Member Function
    s1.ShowData();

    return 0;
}

/*

▶ Execution Output

Alex
20

Name : Alex
Age  : 20

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

Only one Object is created
and public Members are
accessed directly.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

'class Student'

Creates a new Class.

Step 2:

'public:'

Makes the following members
accessible from outside
the Class.

Step 3:

'name' and 'age'
are public Data Members.

Step 4:

'ShowData()' is a public
Member Function.

Step 5:

Student s1;

Creates an Object.

Step 6:

s1.name

Accesses the public
Data Member.

Step 7:

s1.ShowData();

Calls the public
Member Function.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is public in C++?

Answer:

public is an Access Specifier.

It allows Class Members to
be accessed from anywhere
using an Object.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking public creates
memory.

✘ Forgetting to use the
dot (.) operator.

Wrong:

name;

Correct:

s1.name;

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can both Variables and
Functions be public?

Answer:

✅ Yes.

Both Data Members and
Member Functions can
be declared public.

◆───────────────────────────────◆

📝 Summary

public is an Access Specifier.

It allows Data Members
and Member Functions
to be accessed from
outside the Class.

◆───────────────────────────────◆

📌 Quick Revision

public
   │
Access Specifier
   │
Open Access
   │
Variables
   │
Functions
   │
Access Using (.)

◆───────────────────────────────◆

*/