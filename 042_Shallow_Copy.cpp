/*
◆───────────────────────────────◆
42. Shallow Copy
◆───────────────────────────────◆

💡 Remember

A Shallow Copy copies the
memory addresses instead
of creating new memory.

As a result,

multiple Objects may
share the same resource.

◆───────────────────────────────◆

🎯 Goal

Understand what Shallow
Copy is and why it can
cause serious problems.

◆───────────────────────────────◆

📖 Simple Meaning

Suppose two people have
the same house key.

Both keys open the same
house.

If one person removes all
the furniture,

the other person also
finds the house empty.

Similarly,

Shallow Copy makes two
Objects point to the same
memory.

◆───────────────────────────────◆

🌍 Real Life Example

Object A
      │
      ▼
  Memory Address
      ▲
      │
Object B

Both Objects use the
same memory.

Changing one Object
affects the other.

◆───────────────────────────────◆

⭐ Key Points

✔ Copies memory addresses.

✔ Does not create new memory.

✔ Objects share resources.

✔ Can cause unexpected bugs.

✔ Unsafe for dynamic memory.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    int* age;

    Student(int value)
    {
        age = new int(value);
    }

    // Shallow Copy
    Student(const Student& other)
    {
        age = other.age;
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

    *s2.age = 50;

    cout << "Object 1" << endl;
    s1.Display();

    cout << endl;

    cout << "Object 2" << endl;
    s2.Display();

    return 0;
}

/*

▶ Execution Output

Object 1
Age : 50

Object 2
Age : 50

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only the pointer value
(address) is copied.

No new memory is created.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

s1 creates dynamic memory.

Step 2:

s2 copies only the
pointer address.

Step 3:

Both Objects point to
the same memory.

Step 4:

Changing

*s2.age

also changes

*s1.age

because both share
the same memory.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is Shallow Copy?

Answer:

Shallow Copy copies only
the memory address.

It does not create a new
copy of dynamically
allocated memory.

Both Objects share the
same resource.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking all copies are
independent.

✘ Forgetting that pointers
copy addresses.

✘ Using Shallow Copy with
dynamic memory.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Why did changing s2 also
change s1?

Answer:

Because both Objects point
to the same memory address.

◆───────────────────────────────◆

📝 Summary

Object A
      │
      ▼
Shared Memory
      ▲
      │
Object B

↓

Changing One

↓

Changes Both

◆───────────────────────────────◆

📌 Quick Revision

Copy Object
      │
Pointer Copied
      │
Shared Memory
      │
Unsafe

◆───────────────────────────────◆

*/