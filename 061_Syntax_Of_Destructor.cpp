/*
◆───────────────────────────────◆
61. Syntax Of Destructor
◆───────────────────────────────◆

💡 Remember

A Destructor is a special
Member Function.

Its name is the same as
the Class name,

but it starts with (~).

A Destructor

• Has NO return type.
• Takes NO parameters.
• Cannot be overloaded.
• Runs automatically.

◆───────────────────────────────◆

🎯 Goal

Learn the correct syntax
and rules of a Destructor.

◆───────────────────────────────◆

📖 Simple Meaning

A Destructor is written
just like a Constructor,

but with a (~) symbol
before the Class name.

Example

Class Name

Student

Destructor

~Student()

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Light Switch.

Turn ON

↓

Work

↓

Turn OFF

Constructor turns the
Object ON.

Destructor turns the
Object OFF safely.

◆───────────────────────────────◆

⭐ Key Points

✔ Starts with (~).

✔ Same name as Class.

✔ No return type.

✔ No parameters.

✔ Only one Destructor
  per Class.

✔ Runs automatically.

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
    Student s1;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Destructor Called

◆───────────────────────────────◆

⚙ Complexity

Time : O(1)

Space : O(1)

Reason:

One Object is created
and destroyed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student s1;

creates an Object.

Step 2:

Constructor runs.

Step 3:

main() finishes.

Step 4:

Destructor runs
automatically.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the syntax of a
Destructor?

Answer:

A Destructor has the same
name as the Class,

starts with (~),

has no return type,

takes no parameters,

and is called
automatically.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Writing a return type.

✘ Giving parameters.

✘ Creating multiple
Destructors.

✘ Forgetting the (~).

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which declaration is
correct?

A)

void ~Student();

B)

~Student();

Answer:

✅ B)

~Student();

◆───────────────────────────────◆

📝 Summary

Destructor

↓

~ClassName()

↓

No Return Type

↓

No Parameters

↓

Runs Automatically

◆───────────────────────────────◆

📌 Quick Revision

~

↓

Same Class Name

↓

No Return Type

↓

No Parameters

↓

One Destructor

◆───────────────────────────────◆

*/