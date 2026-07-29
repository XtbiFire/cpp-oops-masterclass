/*
◆───────────────────────────────◆
55. Constructor Exceptions
◆───────────────────────────────◆

💡 Remember

A Constructor can throw
an Exception.

If an Exception is thrown,

the Object is NOT created.

Its Destructor is also
NOT called because the
Object was never fully
constructed.

◆───────────────────────────────◆

🎯 Goal

Understand what happens
when a Constructor throws
an Exception.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine building a House.

The construction stops
halfway because of an
earthquake.

The House was never
completed.

So,

nobody can live in it.

Similarly,

if a Constructor throws
an Exception,

the Object is never
created.

◆───────────────────────────────◆

🌍 Real Life Example

Constructor Starts
        │
        ▼
Exception Thrown
        │
        ▼
Object Creation Failed

No Object Exists.

◆───────────────────────────────◆

⭐ Key Points

✔ Constructor can throw
  Exceptions.

✔ Object creation stops.

✔ Object is not created.

✔ Constructor should
  validate important data.

✔ Exception can be caught
  using try-catch.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
#include <stdexcept>
using namespace std;

class Student
{
public:

    Student(int age)
    {
        if(age < 0)
        {
            throw invalid_argument("Age cannot be negative.");
        }

        cout << "Constructor Successful"
             << endl;
    }

    ~Student()
    {
        cout << "Destructor Called"
             << endl;
    }
};

int main()
{
    try
    {
        Student s1(-5);
    }
    catch(const exception& e)
    {
        cout << "Exception : "
             << e.what()
             << endl;
    }

    return 0;
}

/*

▶ Execution Output

Exception : Age cannot be negative.

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only one Object creation
attempt is performed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student s1(-5);

calls the Constructor.

Step 2:

The Constructor checks
the value.

Step 3:

Since age is negative,

throw invalid_argument(...);

is executed.

Step 4:

Object creation stops
immediately.

Step 5:

The catch block handles
the Exception.

The Destructor is NOT
called because the Object
was never fully created.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What happens if a
Constructor throws an
Exception?

Answer:

Object construction stops
immediately.

The Object is not created.

Its Destructor is not
called because the Object
was never completely
constructed.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking the Destructor
will always run.

✘ Ignoring Constructor
validation.

✘ Forgetting to handle
Exceptions with try-catch.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Will the Destructor run
if the Constructor throws
an Exception?

Answer:

❌ No.

The Object was never
fully constructed.

◆───────────────────────────────◆

📝 Summary

Constructor
      │
Exception
      │
Object Not Created
      │
No Destructor

◆───────────────────────────────◆

📌 Quick Revision

Constructor
      │
throw
      │
Object Creation Failed
      │
catch
      │
Program Continues

◆───────────────────────────────◆

*/