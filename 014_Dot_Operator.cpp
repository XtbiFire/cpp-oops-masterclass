/*
◆───────────────────────────────◆
14. Dot (.) Operator
◆───────────────────────────────◆

💡 Remember

The Dot (.) Operator is used
to access the public Members
of an Object.

Without an Object,
the Dot Operator cannot be used.

◆───────────────────────────────◆

🎯 Goal

Understand what the Dot (.)
Operator is, why it is used,
and how it accesses Members
of a Class.

◆───────────────────────────────◆

📖 Simple Meaning

Imagine an Object is a House.

Inside the House there are

• Rooms
• Kitchen
• Bathroom

To enter the House,
you must first know
which House you want.

Similarly,

The Dot (.) Operator tells
C++ which Object's Members
you want to access.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine three Students.

Student 1
Student 2
Student 3

If you say,

"Name"

No one knows whose name.

But if you say,

Student1.Name

Everyone understands you
mean Student 1's Name.

Similarly,

s1.name

means

Access the 'name'
of Object s1.

◆───────────────────────────────◆

⭐ Key Points

✔ Dot (.) is an Operator.

✔ It connects an Object
  with its Members.

✔ It accesses public
  Data Members.

✔ It calls public
  Member Functions.

✔ Dot Operator always
  requires an Object.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Student
{
public:

    string name = "Alex";
    int age = 20;

    void ShowData()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Main Function
int main()
{
    Student s1;

    cout << s1.name << endl;
    cout << s1.age << endl;

    s1.ShowData();

    return 0;
}

/*

▶ Execution Output

Alex
20

Name : Alex
Age  : 20

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

The Dot Operator directly
accesses Members of an Object.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Student s1;

Creates an Object.

Step 2:

s1.name

'.' tells C++,

"Access the name
inside Object s1."

Step 3:

s1.age

Accesses the age
inside Object s1.

Step 4:

s1.ShowData();

'.' accesses the Member
Function of Object s1.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the Dot (.) Operator?

Answer:

The Dot (.) Operator is used
to access public Data Members
and Member Functions of an
Object.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Using Dot (.) without
an Object.

Wrong

.name

Wrong

ShowData();

✔ Correct

s1.name;

s1.ShowData();

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can we use the Dot Operator
without creating an Object?

Answer:

❌ No.

The Dot Operator always
needs an Object.

Example:

Student s1;

s1.name;

◆───────────────────────────────◆

📝 Summary

The Dot (.) Operator connects
an Object with its Members.

It is used to access public
Variables and Functions.

Without an Object,
Dot (.) cannot be used.

◆───────────────────────────────◆

📌 Quick Revision

Object
  │
Dot (.)
  │
Access
  │
Data Members
  │
Member Functions

◆───────────────────────────────◆

*/