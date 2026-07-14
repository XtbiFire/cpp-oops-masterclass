/*
◆───────────────────────────────◆
15. Data Members
◆───────────────────────────────◆

💡 Remember

Variables declared inside a
Class are called Data Members.

They store information about
an Object.

◆───────────────────────────────◆

🎯 Goal

Understand what Data Members
are, why they are used, and
how every Object gets its own
copy of Data Members.

◆───────────────────────────────◆

📖 Simple Meaning

A Data Member is simply a
Variable inside a Class.

It stores the properties
(Information) of an Object.

Examples:

• Name
• Age
• Health
• Speed
• Salary

All these are Data Members.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Student Form.

Student 1

Name : Alex
Age  : 20
Marks: 95

Student 2

Name : John
Age  : 22
Marks: 88

Both Students have the same
fields,

but different values.

Similarly,

Every Object has its own
copy of Data Members.

◆───────────────────────────────◆

⭐ Key Points

✔ Variables inside a Class
  are called Data Members.

✔ Data Members describe an
  Object.

✔ Every Object gets its own
  copy of Data Members.

✔ Data Members store values.

✔ Data Members can have
  different values for
  different Objects.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

// Class Definition
class Student
{
public:

    // Data Members
    string name;
    int age;
};

// Main Function
int main()
{
    // Object 1
    Student s1;

    s1.name = "Alex";
    s1.age = 20;

    // Object 2
    Student s2;

    s2.name = "John";
    s2.age = 22;

    cout << "Student 1" << endl;
    cout << "Name : " << s1.name << endl;
    cout << "Age  : " << s1.age << endl;

    cout << endl;

    cout << "Student 2" << endl;
    cout << "Name : " << s2.name << endl;
    cout << "Age  : " << s2.age << endl;

    return 0;
}

/*

▶ Execution Output

Student 1
Name : Alex
Age  : 20

Student 2
Name : John
Age  : 22

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

Only two Objects are created
and their Data Members are
accessed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

A Class named Student
is created.

Step 2:

'name' and 'age'
are Data Members.

Step 3:

Two Objects,

s1 and s2,

are created.

Step 4:

Different values are stored
inside each Object.

Step 5:

Although both Objects come
from the same Class,

their Data Members store
different values.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What are Data Members?

Answer:

Variables declared inside a
Class are called Data Members.

They store information about
an Object.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking all Objects share
the same Data Members.

✘ Forgetting to create an
Object before accessing
Data Members.

✘ Confusing Local Variables
with Data Members.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

If a Class has

int age;

and five Objects are created,

how many copies of age exist?

Answer:

✅ Five.

Every Object has its own
separate copy of Data Members.

◆───────────────────────────────◆

📝 Summary

Data Members are Variables
inside a Class.

They describe an Object and
store its information.

Every Object gets its own
separate copy of Data Members.

◆───────────────────────────────◆

📌 Quick Revision

Class
   │
Data Members
   │
Store Information
   │
Object 1 → Own Copy
Object 2 → Own Copy
Object 3 → Own Copy

◆───────────────────────────────◆

*/