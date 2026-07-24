/*
◆───────────────────────────────◆
47. Rule Of Five
◆───────────────────────────────◆

💡 Remember

If a Class manages dynamic
memory and you manually
define one of these,

✔ Destructor
✔ Copy Constructor
✔ Copy Assignment Operator
✔ Move Constructor
✔ Move Assignment Operator

then you should usually
define all five.

This is called the
Rule Of Five.

◆───────────────────────────────◆

🎯 Goal

Understand why modern C++
uses five special Member
Functions together.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine you own a House.

You need

✔ Build House

✔ Copy House

✔ Copy Ownership

✔ Move House

✔ Move Ownership

Missing any one may
cause resource problems.

Similarly,

Classes managing dynamic
memory should properly
handle all five functions.

◆───────────────────────────────◆

🌍 Real Life Example

Allocate Memory
      │
      ▼
Copy Resource
      │
      ▼
Move Resource
      │
      ▼
Release Resource

Safe Memory Management

◆───────────────────────────────◆

⭐ Key Points

✔ Extension of Rule Of Three.

✔ Introduced with C++11.

✔ Supports Move Semantics.

✔ Prevents memory errors.

✔ Improves performance.

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
        if(this != &other)
        {
            delete age;
            age = new int(*other.age);
        }

        return *this;
    }

    // Move Constructor
    Student(Student&& other)
    {
        age = other.age;
        other.age = nullptr;
    }

    // Move Assignment Operator
    Student& operator=(Student&& other)
    {
        if(this != &other)
        {
            delete age;

            age = other.age;

            other.age = nullptr;
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
        if(age)
            cout << "Age : " << *age << endl;
        else
            cout << "No Resource" << endl;
    }
};

int main()
{
    Student s1(20);

    Student s2 = std::move(s1);

    s2.Display();

    return 0;
}

/*

▶ Execution Output

Age : 20

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

Copying or moving only
one integer resource.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Constructor allocates
memory.

Step 2:

Copy functions perform
Deep Copy.

Step 3:

Move functions transfer
ownership.

Step 4:

Destructor releases
memory safely.

All five functions
work together.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the Rule Of Five?

Answer:

If a Class manually
defines any one resource-
managing special Member
Function, it should
usually define all five:

Constructor,
Destructor,
Copy Constructor,
Copy Assignment,
Move Constructor,
Move Assignment.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting Move
Assignment Operator.

✘ Forgetting nullptr
after moving.

✘ Mixing Shallow Copy
with Move Semantics.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Why was Rule Of Three
extended to Rule Of Five?

Answer:

Because C++11 introduced
Move Constructor and
Move Assignment Operator.

◆───────────────────────────────◆

📝 Summary

Constructor
      │
Copy Constructor
      │
Copy Assignment
      │
Move Constructor
      │
Move Assignment
      │
Destructor
      │
Safe & Fast Program

◆───────────────────────────────◆

📌 Quick Revision

Rule Of Five
      │
5 Special Functions
      │
Safe Resource Management
      │
Better Performance

◆───────────────────────────────◆

*/