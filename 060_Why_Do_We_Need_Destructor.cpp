/*
◆───────────────────────────────◆
60. Why Do We Need Destructor?
◆───────────────────────────────◆

💡 Remember

A Destructor is used to
release resources before
an Object is destroyed.

Without a Destructor,

memory and other resources
may remain occupied.

This can cause Resource
Leaks.

◆───────────────────────────────◆

🎯 Goal

Understand why
Destructors are important
in C++.

◆───────────────────────────────◆

📖 Simple Meaning

When an Object finishes
its work,

it should return all
resources it was using.

The Destructor performs
this cleanup automatically.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine borrowing
a Library Book.

After reading,

you must return it.

Otherwise,

other students cannot
use that Book.

Similarly,

a Destructor returns
memory and resources
back to the system.

◆───────────────────────────────◆

⭐ Key Points

✔ Frees Dynamic Memory.

✔ Closes Files.

✔ Releases Resources.

✔ Prevents Memory Leaks.

✔ Runs Automatically.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
private:

    int* marks;

public:

    Student()
    {
        marks = new int(95);

        cout << "Memory Allocated"
             << endl;
    }

    ~Student()
    {
        delete marks;

        cout << "Memory Released"
             << endl;
    }
};

int main()
{
    Student s1;

    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Memory Allocated

Inside main()

Memory Released

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

One memory block is
allocated and released.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

The Constructor allocates
memory using new.

Step 2:

The Object uses that
memory.

Step 3:

When the Object is
destroyed,

the Destructor runs.

Step 4:

delete releases the
allocated memory.

Step 5:

Program finishes without
Memory Leak.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why do we need a
Destructor?

Answer:

A Destructor is used to
release allocated memory
and other resources before
an Object is destroyed.

It helps prevent Memory
Leaks and Resource Leaks.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting to delete
memory allocated using new.

✘ Assuming memory is
always released
automatically.

✘ Allocating memory but
never cleaning it.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

What happens if delete
is never called?

Answer:

Memory remains occupied.

This is called a
Memory Leak.

◆───────────────────────────────◆

📝 Summary

Object Created
      │
Memory Allocated
      │
Program Executes
      │
Destructor Runs
      │
Memory Released

◆───────────────────────────────◆

📌 Quick Revision

Destructor
      │
Cleanup
      │
delete
      │
Memory Released
      │
No Memory Leak

◆───────────────────────────────◆

*/