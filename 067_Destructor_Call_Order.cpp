/*
◆───────────────────────────────◆
67. Destructor Call Order
◆───────────────────────────────◆

💡 Remember

Objects are destroyed in the
reverse order of their creation.

This follows the

LIFO (Last In First Out)

rule.

◆───────────────────────────────◆

🎯 Goal

Understand the order in
which Destructors are
called when multiple
Objects exist.

◆───────────────────────────────◆

📖 Simple Meaning

Objects created first
are destroyed last.

Objects created last
are destroyed first.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine stacking Plates.

Plate A

↓

Plate B

↓

Plate C

When removing,

Plate C goes first,

then Plate B,

then Plate A.

Objects behave the
same way.

◆───────────────────────────────◆

⭐ Key Points

✔ Constructor follows
First In First Out.

✔ Destructor follows
Last In First Out.

✔ Reverse destruction
is automatic.

✔ Very common interview
question.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>     // Input Output Library
using namespace std;

// Student Class
class Student
{
public:

    // Constructor
    Student()
    {
        cout << "Constructor Called"
             << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor Called"
             << endl;
    }
};

// Main Function
int main()
{
    // First Object
    Student s1;

    // Second Object
    Student s2;

    // Third Object
    Student s3;

    cout << "Inside main()"
         << endl;

    return 0;
}

/*

▶ Execution Output

Constructor Called
Constructor Called
Constructor Called

Inside main()

Destructor Called
Destructor Called
Destructor Called

(Destructor Order)

s3

↓

s2

↓

s1

◆───────────────────────────────◆

⚙ Complexity

Time : O(n)

Space : O(n)

Reason:

Every Object has one
Constructor and one
Destructor.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

s1 is created.

Constructor runs.

Step 2:

s2 is created.

Constructor runs.

Step 3:

s3 is created.

Constructor runs.

Step 4:

Program finishes.

Step 5:

Objects are destroyed in
reverse order.

s3

↓

s2

↓

s1

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the Destructor
Call Order?

Answer:

Destructors are called in
the reverse order of
Object creation.

This follows the

LIFO

(Last In First Out)
principle.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking Destructors
run in creation order.

✘ Confusing Constructor
order with Destructor
order.

✘ Forgetting LIFO.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Objects are created as

A

↓

B

↓

C

Which Destructor runs
first?

Answer:

✅ C

Then

B

Then

A

◆───────────────────────────────◆

📝 Summary

Constructor

A

↓

B

↓

C

───────────────

Destructor

C

↓

B

↓

A

◆───────────────────────────────◆

📌 Quick Revision

Objects Created

A → B → C

Objects Destroyed

C → B → A

LIFO Rule

◆───────────────────────────────◆

*/