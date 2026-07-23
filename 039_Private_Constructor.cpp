/*
◆───────────────────────────────◆
39. Private Constructor
◆───────────────────────────────◆

💡 Remember

A Private Constructor
cannot be called from
outside the Class.

Only the Class itself
(or its Friends) can
use it.

◆───────────────────────────────◆

🎯 Goal

Understand why a
Constructor is made
private.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine a Secret Laboratory.

Only authorized scientists
can enter.

People outside cannot
enter directly.

Similarly,

a Private Constructor
prevents outside code
from creating Objects.

Only the Class controls
Object creation.

◆───────────────────────────────◆

🌍 Real Life Example

Outside Program

        │

        ✘

Cannot Create Object

───────────────

Inside Class

        │

        ✔

Object Created

The Class decides who
can create Objects.

◆───────────────────────────────◆

⭐ Key Points

✔ Constructor is private.

✔ Outside code cannot
  create Objects.

✔ Object creation is
  controlled.

✔ Used in Singleton
  Design Pattern.

✔ Improves security.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
private:

    Student()
    {
        cout << "Private Constructor Called"
             << endl;
    }

public:

    static Student CreateObject()
    {
        Student temp;

        return temp;
    }

    void Display()
    {
        cout << "Object Created Successfully"
             << endl;
    }
};

int main()
{
    Student s1 = Student::CreateObject();

    s1.Display();

    return 0;
}

/*

▶ Execution Output

Private Constructor Called

Object Created Successfully

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only one Object is created.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student()

is private.

Step 2:

Writing

Student s1;

outside the Class
would produce an error.

Step 3:

CreateObject()

is a public static
Member Function.

Step 4:

It creates the Object
inside the Class.

Step 5:

The created Object
is returned to main().

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why do we use a
Private Constructor?

Answer:

A Private Constructor
prevents Objects from
being created directly.

It allows the Class to
control Object creation.

It is commonly used in
the Singleton Pattern.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking a Private
Constructor can never
be called.

It can be called from
inside the Class.

✘ Forgetting to provide
a public function for
Object creation.

✘ Assuming Private
Constructors are only
used for security.

They are also used for
design control.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can main() directly write

Student s1;

?

Answer:

❌ No.

Because the Constructor
is private.

◆───────────────────────────────◆

📝 Summary

Private Constructor
        │
Outside Access Denied
        │
Class Controls
Object Creation
        │
Safer Design

◆───────────────────────────────◆

📌 Quick Revision

Private Constructor
        │
No Direct Object
Creation
        │
Public Static Function
Creates Object
        │
Controlled Access

◆───────────────────────────────◆

*/