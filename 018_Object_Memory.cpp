/*
◆───────────────────────────────◆
18. Object Memory
◆───────────────────────────────◆

💡 Remember

A Class does not allocate memory.

Memory is allocated only when
an Object is created.

Every Object gets its own
separate memory.

◆───────────────────────────────◆

🎯 Goal

Understand where Object memory
comes from and why every Object
has its own copy of Data Members.

◆───────────────────────────────◆

📖 Simple Meaning

Think of a Class as a Blueprint.

A Blueprint does not occupy
space like a real House.

Similarly,

A Class only describes an
Object.

It does not store actual data.

When an Object is created,

C++ allocates memory for
that Object.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Car Factory.

          Blueprint
              │
              ▼
         Class (Car)

              │
      ┌───────┼───────┐
      ▼       ▼       ▼
    Car1    Car2    Car3
   Memory   Memory   Memory

Every Car has its own
Engine, Wheels and Seats.

Similarly,

Every Object has its own
Data Members.

◆───────────────────────────────◆

⭐ Key Points

✔ Class does not store data.

✔ Object stores data.

✔ Memory is allocated only
  when an Object is created.

✔ Every Object has its own
  separate memory.

✔ Changing one Object does
  not affect another Object.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Student
{
public:

    string name;
    int age;
};

// Main Function
int main()
{
    Student s1;
    Student s2;

    s1.name = "Alex";
    s1.age = 20;

    s2.name = "John";
    s2.age = 22;

    cout << "Student 1" << endl;
    cout << "Name : " << s1.name << endl;
    cout << "Age  : " << s1.age << endl;

    cout << endl;

    cout << "Student 2" << endl;
    cout << "Name : " << s2.name << endl;
    cout << "Age  : " << s2.age << endl;

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

Only two Objects are created
and a fixed number of
operations are performed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

A Class named Student
is created.

No memory is allocated yet.

Step 2:

Student s1;

Memory is allocated for s1.

Step 3:

Student s2;

Another separate memory
is allocated for s2.

Step 4:

Values are stored in
each Object separately.

Step 5:

Changing s1 does not
change s2 because both
have different memory.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Does a Class allocate memory?

Answer:

No.

A Class is only a Blueprint.

Memory is allocated only
when an Object is created.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking a Class stores data.

✘ Thinking all Objects
share one memory.

✘ Assuming changing one
Object changes another.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

If one Class creates
100 Objects,

how many memories
will be allocated?

Answer:

✅ 100 separate memories.

Each Object gets its own
copy of Data Members.

◆───────────────────────────────◆

📝 Summary

Class

↓

Blueprint

↓

No Memory

↓

Object Created

↓

Memory Allocated

↓

Every Object has its own
separate Data Members.

◆───────────────────────────────◆

📌 Quick Revision

Class
   │
Blueprint
   │
No Memory
   │
Object Created
   │
Memory Allocated
   │
Object 1 → Own Memory
Object 2 → Own Memory
Object 3 → Own Memory

◆───────────────────────────────◆

*/