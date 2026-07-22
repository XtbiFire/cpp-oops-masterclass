/*
◆───────────────────────────────◆
24. Protected Real Life Examples
◆───────────────────────────────◆

💡 Remember

protected Members are not
accessible from outside
the Class.

They are mainly meant for
Child Classes in Inheritance.

◆───────────────────────────────◆

🎯 Goal

Understand protected using
simple real-life examples.

◆───────────────────────────────◆

📖 Simple Meaning

Think of protected as
"Family Access".

Outsiders cannot enter,

but family members can.

Similarly,

Outside code cannot access
protected Members.

Child Classes can access them.

◆───────────────────────────────◆

🌍 Real Life Examples

Example 1 : Family Locker

House
 │
 ├── Guests ❌
 └── Family Members ✔

The locker is not public.

Only family members
can use it.

◆───────────────────────────────◆

Example 2 : Company

Company Database
        │
        ▼
 Protected Employee Data

✔ Senior Employees

✔ Managers

❌ Customers

◆───────────────────────────────◆

Example 3 : School

Teacher Records

✔ Principal

✔ Teachers

❌ Students

Only authorized people
inside the system can
access them.

◆───────────────────────────────◆

Example 4 : Game Development

Imagine a Game Engine.

GameObject
      │
      ▼
Health
Position
Speed

These values should not
be changed directly by
outside code.

Child game objects like

Player
Enemy
Boss

can use them safely.

◆───────────────────────────────◆

⭐ Key Points

✔ protected is safer than
  public.

✔ Outside code cannot
  access protected Members.

✔ Child Classes can
  access them.

✔ Mostly used in
  Inheritance.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class GameObject
{
protected:

    int health = 100;

public:

    void ShowHealth()
    {
        cout << "Health : "
             << health << endl;
    }
};

int main()
{
    GameObject obj;

    obj.ShowHealth();

    // Wrong ❌
    // cout << obj.health;

    return 0;
}

/*

▶ Execution Output

Health : 100

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

Only one Object is created
and one Member Function
is executed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

health is declared
protected.

Step 2:

ShowHealth() is public.

Step 3:

main() calls
ShowHealth().

Step 4:

Direct access to
health is not allowed.

Step 5:

Later,

Child Classes will be
able to access health.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Give a real-life example
of protected.

Answer:

Examples include

• Family Locker
• Company Employee Data
• School Teacher Records
• Game Engine Base Objects

These are accessible only
to authorized internal
members, not outsiders.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking protected
is the same as public.

✘ Using protected without
understanding Inheritance.

✘ Trying to directly
access protected Members
using an Object.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Why is protected mainly
used in Inheritance?

Answer:

Because Child Classes need
access to some Members,
while outside code should
not have direct access.

◆───────────────────────────────◆

📝 Summary

protected provides controlled
access.

Outside code cannot access
protected Members.

Child Classes can access
them in Inheritance.

◆───────────────────────────────◆

📌 Quick Revision

protected
      │
Hidden From Outside
      │
Family Access
      │
Child Classes
      │
Inheritance

◆───────────────────────────────◆

*/