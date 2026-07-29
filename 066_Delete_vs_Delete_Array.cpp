/*
◆───────────────────────────────◆
66. delete vs delete[]
◆───────────────────────────────◆

💡 Remember

delete is used for a
single Dynamic Object.

delete[] is used for
an Array of Dynamic
Objects.

Using the wrong one
causes Undefined
Behavior.

◆───────────────────────────────◆

🎯 Goal

Understand the difference
between delete and
delete[] in C++.

◆───────────────────────────────◆

📖 Simple Meaning

If you create ONE Object,

use delete.

If you create MANY Objects
using new[],

use delete[].

The allocation and
deallocation methods
must always match.

◆───────────────────────────────◆

🌍 Real Life Example

One Chair

↓

Bring One Chair

↓

Return One Chair

(delete)

────────────────

Five Chairs

↓

Bring Five Chairs

↓

Return All Five Chairs

(delete[])

◆───────────────────────────────◆

⭐ Key Points

✔ delete → Single Object.

✔ delete[] → Object Array.

✔ new matches delete.

✔ new[] matches delete[].

✔ Wrong combination
causes Undefined
Behavior.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    Student()
    {
        cout << "Constructor Called"
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
    Student* arr = new Student[3];

    cout << "Array Created"
         << endl;

    delete[] arr;

    return 0;
}

/*

▶ Execution Output

Constructor Called
Constructor Called
Constructor Called

Array Created

Destructor Called
Destructor Called
Destructor Called

◆───────────────────────────────◆

⚙ Complexity

Time : O(n)

Space : O(n)

Reason:

Constructors and
Destructors execute
once for every Object
in the Array.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

new Student[3]

creates three Objects.

Step 2:

Constructor runs
three times.

Step 3:

Program uses the
Objects.

Step 4:

delete[] arr;

destroys every Object.

Step 5:

Destructor runs
three times.

Heap Memory is released.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

When should delete[]
be used?

Answer:

delete[] is used when
memory was allocated
using new[].

For a single Object,
use delete.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Using delete after
new[].

✘ Using delete[] after
new.

✘ Forgetting to release
Dynamic Arrays.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which statement is
correct?

Student* p = new Student;

A) delete p;

B) delete[] p;

Answer:

✅ A) delete p;

Question:

Student* p = new Student[5];

A) delete p;

B) delete[] p;

Answer:

✅ B) delete[] p;

◆───────────────────────────────◆

📝 Summary

new
      │
delete

───────────────

new[]
      │
delete[]

Always use the
matching pair.

◆───────────────────────────────◆

📌 Quick Revision

Single Object
      │
new
      │
delete

───────────────

Object Array
      │
new[]
      │
delete[]

◆───────────────────────────────◆

*/