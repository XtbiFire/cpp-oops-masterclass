/*
◆───────────────────────────────◆
17. Object Creation
◆───────────────────────────────◆

💡 Remember

An Object is a real instance
of a Class.

A Class is only a Blueprint.

Memory is allocated only
when an Object is created.

◆───────────────────────────────◆

🎯 Goal

Understand how Objects are
created from a Class and why
they are important in OOP.

◆───────────────────────────────◆

📖 Simple Meaning

A Class is just a Design.

It cannot store actual data.

When we create an Object,
C++ allocates memory for
that Object.

Only then can we store
and use data.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Car Factory.

          Car Blueprint
                │
                ▼
           Class (Car)
                │
      ┌─────────┼─────────┐
      ▼         ▼         ▼
    Car1      Car2      Car3
   (Object)  (Object)  (Object)

One Blueprint can create
many real Cars.

Similarly,

One Class can create
many Objects.

◆───────────────────────────────◆

⭐ Key Points

✔ Object is an Instance
  of a Class.

✔ Objects are created
  using the Class Name.

✔ Every Object gets its
  own memory.

✔ One Class can create
  many Objects.

✔ Objects access Members
  using the Dot (.) Operator.

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
    string name;
    int age;

    // Member Function
    void ShowData()
    {
        cout << "Name : "
             << name << endl;

        cout << "Age  : "
             << age << endl;
    }
};

// Main Function
int main()
{
    // Object 1
    Student s1;

    s1.name = "Alex";
    s1.age = 20;

    // Object 2
    Student s2;

    s2.name = "John";
    s2.age = 22;

    cout << "Student 1" << endl;
    s1.ShowData();

    cout << endl;

    cout << "Student 2" << endl;
    s2.ShowData();

    return 0;
}

/*

▶ Execution Output

Student 1
Name : Alex
Age  : 20

Student 2
Name : John
Age  : 22

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

Two Objects are created
and a fixed number of
operations are performed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

A Class named Student
is created.

Step 2:

Student s1;

creates the first Object.

Memory is allocated for s1.

Step 3:

Student s2;

creates the second Object.

A separate memory is
allocated for s2.

Step 4:

Different values are stored
inside each Object.

Step 5:

s1.ShowData();

prints data of s1.

Step 6:

s2.ShowData();

prints data of s2.

Both Objects are independent.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is an Object?

Answer:

An Object is a real instance
of a Class.

It is created from a Class
and has its own memory.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking a Class itself
creates memory.

✘ Thinking all Objects
share the same data.

✘ Forgetting to create an
Object before accessing
Members.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

If one Class creates
100 Objects,

how many copies of Data
Members will exist?

Answer:

✅ 100 Copies.

Every Object has its own
separate memory.

◆───────────────────────────────◆

📝 Summary

A Class is a Blueprint.

An Object is the real
instance of that Blueprint.

Memory is allocated only
when an Object is created.

Every Object works
independently.

◆───────────────────────────────◆

📌 Quick Revision

Class
   │
Blueprint
   │
Create Object
   │
Memory Allocated
   │
Independent Objects
   │
Access Members Using (.)

◆───────────────────────────────◆

*/