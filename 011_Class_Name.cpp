/*
◆───────────────────────────────◆
11. Class Name
◆───────────────────────────────◆

💡 Remember

A Class Name is the name given
to a Class by the programmer.

It is used to identify the
Class and create Objects.

◆───────────────────────────────◆

🎯 Goal

Understand what a Class Name is,
why it is needed, and the rules
for naming a Class.

◆───────────────────────────────◆

📖 Simple Meaning

Just like every person has a
name, every Class also has
a unique name.

Without a Class Name, C++
cannot identify the Class.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a School.

Student
Teacher
Principal

All have different names.

Similarly,

Player
Car
BankAccount
Employee

are different Class Names.

◆───────────────────────────────◆

⭐ Key Points

✔ Every Class must have
  a Name.

✔ The programmer chooses
  the Class Name.

✔ Class Names should be
  meaningful.

✔ Class Names usually begin
  with a Capital Letter.

✔ One Class cannot have
  two different names.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Player
{
public:

    void ShowMessage()
    {
        cout << "This is Player Class." << endl;
    }
};

// Main Function
int main()
{
    // Object Creation
    Player p1;

    // Calling Member Function
    p1.ShowMessage();

    return 0;
}

/*

▶ Execution Output

This is Player Class.

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

Only one Object is created
and one Function is called.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

'class'

Starts the Class Definition.

Step 2:

'Player'

This is the Class Name.

Step 3:

Player p1;

The compiler identifies
which Class to use by
reading the Class Name.

Step 4:

p1.ShowMessage();

Calls the Member Function
of the Player Class.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is a Class Name?

Answer:

A Class Name is the name
given to a Class. It is used
to identify the Class and
create Objects.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Giving meaningless names.

Wrong:

class A
{

};

✔ Better:

class Player
{

};

✘ Using spaces.

Wrong:

class Game Player
{

};

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can two different Classes
have the same Name?

Answer:

❌ No.

Every Class Name must be
unique within the same scope.

◆───────────────────────────────◆

📝 Summary

A Class Name identifies
a Class.

It should be meaningful,
unique, and easy to
understand.

◆───────────────────────────────◆

📌 Quick Revision

class
   │
Class Name
   │
Identifies Class
   │
Used to Create Objects
   │
Should be Meaningful

◆───────────────────────────────◆

*/