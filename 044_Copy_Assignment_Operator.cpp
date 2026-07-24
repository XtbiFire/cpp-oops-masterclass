/*
◆───────────────────────────────◆
44. Copy Assignment Operator
◆───────────────────────────────◆

💡 Remember

A Copy Assignment Operator
copies data from one
existing Object to another
existing Object.

It is different from a
Copy Constructor.

◆───────────────────────────────◆

🎯 Goal

Understand when the Copy
Assignment Operator is
called and how it differs
from the Copy Constructor.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine two notebooks.

Notebook A already exists.

Notebook B also already
exists.

Now,

you copy the contents of
Notebook A into Notebook B.

No new notebook is created.

Similarly,

Copy Assignment copies
data into an already
existing Object.

◆───────────────────────────────◆

🌍 Real Life Example

Existing Object A
        │
        ▼
Existing Object B
        │
        ▼
Data Copied

No new Object is created.

◆───────────────────────────────◆

⭐ Key Points

✔ Works on existing Objects.

✔ No new Object is created.

✔ Uses the = operator.

✔ Different from Copy
  Constructor.

✔ Can be overloaded.

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

    Student(string studentName,
            int studentAge)
    {
        name = studentName;
        age = studentAge;
    }

    // Copy Assignment Operator
    Student& operator=(const Student& other)
    {
        name = other.name;
        age = other.age;

        cout << "Copy Assignment Operator Called"
             << endl;

        return *this;
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
    Student s1("Alex",20);

    Student s2("Emma",25);

    s2 = s1;

    s1.Display();

    s2.Display();

    return 0;
}

/*

▶ Execution Output

Copy Assignment Operator Called

Name : Alex
Age  : 20

Name : Alex
Age  : 20

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only two data members
are copied.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Two Objects are already
created.

s1

and

s2

Step 2:

s2 = s1;

does NOT create a new
Object.

Step 3:

The Copy Assignment
Operator copies

name

and

age

from

s1

to

s2.

Step 4:

Both Objects now contain
the same values.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the difference
between Copy Constructor
and Copy Assignment
Operator?

Answer:

Copy Constructor creates
a NEW Object.

Copy Assignment Operator
copies data into an
ALREADY EXISTING Object.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking

s2 = s1;

calls the Copy Constructor.

✘ Forgetting to return

*this

from the operator.

✘ Confusing Object creation
with Object assignment.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which statement calls the
Copy Assignment Operator?

Student s2 = s1;

OR

s2 = s1;

Answer:

✅

s2 = s1;

because both Objects
already exist.

◆───────────────────────────────◆

📝 Summary

Existing Object
        │
        ▼
Assignment (=)
        │
        ▼
Copy Assignment Operator
        │
        ▼
Data Copied

◆───────────────────────────────◆

📌 Quick Revision

New Object
     │
Copy Constructor

───────────────

Existing Object
     │
Copy Assignment
Operator

◆───────────────────────────────◆

*/