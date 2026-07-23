/*
◆───────────────────────────────◆
36. Copy Constructor
◆───────────────────────────────◆

💡 Remember

A Copy Constructor creates
a new Object by copying an
existing Object.

It copies the data from one
Object into another Object.

◆───────────────────────────────◆

🎯 Goal

Understand what a Copy
Constructor is and when
it is automatically called.

◆───────────────────────────────◆

📖 Simple Meaning

Suppose you have one Book.

Now you make an exact copy
of that Book.

Original Book
        │
        ▼
Copied Book

Both books contain the same
information.

Similarly,

a Copy Constructor creates
a new Object using an
existing Object.

◆───────────────────────────────◆

🌍 Real Life Example

Original Student

Name : Alex
Age  : 20

        │
        ▼

Copied Student

Name : Alex
Age  : 20

Both Objects contain
the same values.

◆───────────────────────────────◆

⭐ Key Points

✔ Creates a copy of an
  existing Object.

✔ Called automatically.

✔ Initializes a new Object.

✔ Source Object remains
  unchanged.

✔ Used during Object Copying.

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

    // Copy Constructor
    Student(const Student& other)
    {
        name = other.name;
        age = other.age;

        cout << "Copy Constructor Called"
             << endl;
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

    Student s2 = s1;

    s1.Display();

    s2.Display();

    return 0;
}

/*

▶ Execution Output

Copy Constructor Called

Name : Alex
Age  : 20

Name : Alex
Age  : 20

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

Only two data members are
copied.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student s1("Alex",20);

creates the original Object.

Step 2:

Student s2 = s1;

creates a NEW Object.

Step 3:

Instead of the normal
Constructor,

the Copy Constructor
is called.

Step 4:

The values of

name

and

age

are copied from

s1

to

s2.

Step 5:

Both Objects now contain
the same data.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is a Copy Constructor?

Answer:

A Copy Constructor creates
a new Object by copying the
data of an existing Object.

It is automatically called
when a new Object is
initialized using another
Object.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking

s2 = s1;

always calls the Copy
Constructor.

It only calls the Copy
Constructor while creating
a NEW Object.

✘ Confusing Copy Constructor
with Copy Assignment.

They are different concepts.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which statement calls the
Copy Constructor?

A)

Student s2 = s1;

B)

s2 = s1;

Answer:

✅ A)

Because a NEW Object
is being created.

◆───────────────────────────────◆

📝 Summary

Existing Object
        │
        ▼
Copy Constructor
        │
        ▼
New Object Created
        │
        ▼
Same Data Copied

◆───────────────────────────────◆

📌 Quick Revision

Existing Object
      │
Create New Object
      │
Copy Constructor
      │
Data Copied
      │
New Object Ready

◆───────────────────────────────◆

*/