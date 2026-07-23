/*
◆───────────────────────────────◆
33. Multiple Objects With Constructors
◆───────────────────────────────◆

💡 Remember

Every Object has its own
Constructor call.

Each Object stores its own
separate data.

◆───────────────────────────────◆

🎯 Goal

Understand how Constructors
work when multiple Objects
are created.

◆───────────────────────────────◆

📖 Simple Meaning

One Class can create many
Objects.

Whenever a new Object is
created,

its Constructor runs
automatically.

Every Object gets its own
memory and its own data.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Classroom.

Student 1

Name : Alex
Age  : 20

───────────────

Student 2

Name : Emma
Age  : 22

───────────────

Student 3

Name : John
Age  : 19

Although all students belong
to the same Class,

each student has different
information.

Similarly,

one Class can create many
Objects with different data.

◆───────────────────────────────◆

⭐ Key Points

✔ One Class can create
  many Objects.

✔ Every Object has its
  own memory.

✔ Every Object calls its
  own Constructor.

✔ Objects do not share
  Data Members.

✔ Different Objects can
  store different values.

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

        cout << "Constructor Called for "
             << name << endl;
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

    Student s3("John", 19);

    cout << endl;

    s1.Display();

    s2.Display();

    s3.Display();

    return 0;
}

/*

▶ Execution Output

Constructor Called for Alex
Constructor Called for Emma
Constructor Called for John

Name : Alex
Age  : 20

Name : Emma
Age  : 22

Name : John
Age  : 19

◆───────────────────────────────◆

⚙ Complexity

Time  : O(n)

Space : O(n)

Reason:

If n Objects are created,

the Constructor executes
once for each Object.

Each Object stores its own
copy of the Data Members.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Three Objects are created.

s1

s2

s3

Step 2:

Each Object calls the
Parameterized Constructor.

Step 3:

Each Constructor receives
different values.

Step 4:

Each Object stores its own
copy of

name

age

Step 5:

Display()

prints the data stored
inside each Object.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Does one Constructor call
initialize all Objects?

Answer:

No.

Every Object calls the
Constructor separately.

Each Object stores its
own data.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking Objects share
the same Data Members.

✘ Thinking Constructor
runs only once.

✘ Assuming changing one
Object changes another.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

If five Objects are created,

how many times will the
Constructor execute?

Answer:

✅ Five times.

One Constructor call
for each Object.

◆───────────────────────────────◆

📝 Summary

One Class
      │
      ▼
Many Objects
      │
      ▼
Constructor Runs
For Every Object
      │
      ▼
Separate Data

◆───────────────────────────────◆

📌 Quick Revision

Class
   │
Many Objects
   │
Constructor Called
For Each Object
   │
Separate Memory
   │
Separate Data

◆───────────────────────────────◆

*/