/*
◆───────────────────────────────◆
45. Rule Of Three
◆───────────────────────────────◆

💡 Remember

If a Class manages dynamic
memory and you write any
one of these manually,

✔ Destructor

✔ Copy Constructor

✔ Copy Assignment Operator

then you should usually
write all three.

This is called the
Rule Of Three.

◆───────────────────────────────◆

🎯 Goal

Understand why these three
functions work together.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine you own a House.

You need

✔ A Builder
(Create House)

✔ A Copier
(Copy House)

✔ A Cleaner
(Destroy House)

If one is missing,

problems will happen.

Similarly,

when a Class manages
dynamic memory,

these three functions
must work together.

◆───────────────────────────────◆

🌍 Real Life Example

Object
   │
   ▼
Allocate Memory
   │
   ▼
Copy Memory
   │
   ▼
Free Memory

Missing any step
can cause bugs.

◆───────────────────────────────◆

⭐ Key Points

✔ Used for Classes with
  dynamic memory.

✔ Prevents memory leaks.

✔ Prevents shallow copy
  problems.

✔ Prevents double delete.

✔ Foundation of modern C++.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
private:

    int* age;

public:

    // Constructor
    Student(int value)
    {
        age = new int(value);
    }

    // Copy Constructor
    Student(const Student& other)
    {
        age = new int(*other.age);
    }

    // Copy Assignment Operator
    Student& operator=(const Student& other)
    {
        if (this != &other)
        {
            delete age;

            age = new int(*other.age);
        }

        return *this;
    }

    // Destructor
    ~Student()
    {
        delete age;
    }

    void Display()
    {
        cout << "Age : "
             << *age << endl;
    }
};

int main()
{
    Student s1(20);

    Student s2 = s1;

    Student s3(0);

    s3 = s1;

    s1.Display();

    s2.Display();

    s3.Display();

    return 0;
}

/*

▶ Execution Output

Age : 20

Age : 20

Age : 20

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only one integer is
allocated and copied.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Constructor allocates
dynamic memory.

Step 2:

Copy Constructor creates
a separate copy.

Step 3:

Copy Assignment Operator
copies data safely into
an existing Object.

Step 4:

Destructor releases the
allocated memory.

Step 5:

All three functions
work together to manage
memory safely.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the Rule Of Three?

Answer:

If a Class manually
defines either the

Destructor,

Copy Constructor,

or Copy Assignment
Operator,

it should usually define
all three because they
manage the same resource.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Writing only a
Destructor.

✘ Forgetting Deep Copy.

✘ Ignoring self-assignment.

✘ Causing Double Delete.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Why is it called the
Rule Of Three?

Answer:

Because three special
Member Functions work
together to safely manage
dynamic memory.

◆───────────────────────────────◆

📝 Summary

Constructor
      │
      ▼
Copy Constructor
      │
      ▼
Copy Assignment
Operator
      │
      ▼
Destructor
      │
      ▼
Safe Memory Management

◆───────────────────────────────◆

📌 Quick Revision

Dynamic Memory
      │
Rule Of Three
      │
Constructor
Copy Constructor
Copy Assignment
Destructor
      │
Safe Program

◆───────────────────────────────◆