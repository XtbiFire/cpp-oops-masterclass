/*
◆───────────────────────────────◆
43. Deep Copy
◆───────────────────────────────◆

💡 Remember

A Deep Copy creates a new
memory location and copies
the actual data.

Each Object owns its own
memory.

◆───────────────────────────────◆

🎯 Goal

Understand how Deep Copy
solves the problems of
Shallow Copy.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine two students.

Each student has his own
Notebook.

If one student writes
something,

the other student's
Notebook remains unchanged.

Similarly,

Deep Copy creates a new
memory for every Object.

◆───────────────────────────────◆

🌍 Real Life Example

Object A
      │
      ▼
 Memory A

───────────────

Object B
      │
      ▼
 Memory B

Each Object owns
different memory.

Changing one Object
does not affect the other.

◆───────────────────────────────◆

⭐ Key Points

✔ Creates new memory.

✔ Copies actual data.

✔ Objects are independent.

✔ Safe for dynamic memory.

✔ Prevents Double Delete.

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

    // Deep Copy Constructor
    Student(const Student& other)
    {
        age = new int(*other.age);
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
Age : 20

Object 2
Age : 50

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

A new memory location is
allocated and one value
is copied.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

s1 allocates dynamic
memory.

Step 2:

Copy Constructor creates
another memory using

new int(*other.age);

Step 3:

Now

s1

and

s2

have different memory.

Step 4:

Changing

*s2.age

does not affect

*s1.age.

Step 5:

Destructor safely deletes
each Object's own memory.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is Deep Copy?

Answer:

Deep Copy creates a new
memory location and copies
the actual data.

Each Object owns its own
memory, so changing one
Object does not affect
another.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Copying only the pointer.

✘ Forgetting to allocate
new memory.

✘ Forgetting to free
allocated memory using
a Destructor.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Why doesn't changing s2
change s1?

Answer:

Because each Object owns
its own separate memory.

◆───────────────────────────────◆

📝 Summary

Object A
      │
      ▼
 Memory A

Object B
      │
      ▼
 Memory B

↓

Independent Objects

↓

Safe Copy

◆───────────────────────────────◆

📌 Quick Revision

Deep Copy
      │
New Memory
      │
Copy Data
      │
Independent Objects
      │
Safe

◆───────────────────────────────◆

*/