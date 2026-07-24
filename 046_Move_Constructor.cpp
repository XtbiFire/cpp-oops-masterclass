/*
◆───────────────────────────────◆
46. Move Constructor
◆───────────────────────────────◆

💡 Remember

A Move Constructor
transfers ownership of
resources instead of
copying them.

It avoids unnecessary
copies and improves
performance.

◆───────────────────────────────◆

🎯 Goal

Understand how a Move
Constructor transfers
resources from one Object
to another.

◆───────────────────────────────◆

📖 Simple Meaning

Suppose you are shifting
to a new house.

Instead of making copies
of all your furniture,

you simply move the
furniture to the new
house.

The old house becomes
empty.

Similarly,

a Move Constructor moves
resources instead of
copying them.

◆───────────────────────────────◆

🌍 Real Life Example

Object A
      │
      ▼
 Dynamic Memory

Move

      │
      ▼

Object B
      │
      ▼
 Dynamic Memory

Object A

↓

nullptr

Ownership is transferred.

◆───────────────────────────────◆

⭐ Key Points

✔ Transfers ownership.

✔ No Deep Copy.

✔ Faster than copying.

✔ Uses rvalue reference.

✔ Introduced in C++11.

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

    // Move Constructor
    Student(Student&& other)
    {
        age = other.age;

        other.age = nullptr;

        cout << "Move Constructor Called"
             << endl;
    }

    ~Student()
    {
        delete age;
    }

    void Display()
    {
        if(age != nullptr)
        {
            cout << "Age : "
                 << *age << endl;
        }
        else
        {
            cout << "No Resource"
                 << endl;
        }
    }
};

int main()
{
    Student s1(20);

    Student s2(std::move(s1));

    cout << "Object 1" << endl;
    s1.Display();

    cout << endl;

    cout << "Object 2" << endl;
    s2.Display();

    return 0;
}

/*

▶ Execution Output

Move Constructor Called

Object 1

No Resource

Object 2

Age : 20

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

Only the pointer is
transferred.

No new memory is
allocated.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

s1 allocates dynamic
memory.

Step 2:

std::move(s1)

marks s1 as movable.

Step 3:

The Move Constructor
copies the pointer.

Step 4:

Ownership is transferred
to s2.

Step 5:

s1.age becomes nullptr,
so only s2 owns the
memory.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is a Move Constructor?

Answer:

A Move Constructor
transfers ownership of
resources from one Object
to another instead of
copying them.

This improves performance
by avoiding unnecessary
memory allocation.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting to set the
source pointer to nullptr.

✘ Using the moved-from
Object as if it still
owns the resource.

✘ Confusing Move
Constructor with Copy
Constructor.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Why is a Move Constructor
faster than a Copy
Constructor?

Answer:

Because it transfers the
resource instead of
creating a new copy.

◆───────────────────────────────◆

📝 Summary

Object A
      │
      ▼
Resource
      │
Move
      ▼
Object B
      │
Ownership Transferred
      │
No Copy

◆───────────────────────────────◆

📌 Quick Revision

Move Constructor
      │
Transfer Ownership
      │
No Copy
      │
Better Performance
      │
Modern C++

◆───────────────────────────────◆

*/