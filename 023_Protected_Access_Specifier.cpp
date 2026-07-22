/*
◆───────────────────────────────◆
23. Access Specifier : protected
◆───────────────────────────────◆

💡 Remember

protected is an Access
Specifier.

It is similar to private,
but it is mainly used with
Inheritance.

◆───────────────────────────────◆

🎯 Goal

Understand the basic idea of
protected before learning
Inheritance.

◆───────────────────────────────◆

📖 Simple Meaning

Think of protected as a
"Family Room".

Everyone outside the house
cannot enter.

Only family members can
enter.

Similarly,

protected Members are not
accessible from outside the
Class.

Later, Derived Classes
(Child Classes) can also
access them.

We will study this in detail
during the Inheritance
chapter.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a House.

          House
             │
      ┌──────┴──────┐
      ▼             ▼

 Guest Room    Family Room

  public        protected

Everyone        Only Family
can enter.      can enter.

Locker Room

private

Only Owner
can enter.

◆───────────────────────────────◆

⭐ Key Points

✔ protected is an Access
  Specifier.

✔ It is mainly used with
  Inheritance.

✔ Outside code cannot
  access protected Members.

✔ Child Classes can access
  protected Members.

✔ We will learn this fully
  in the Inheritance chapter.

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
protected:

    int marks = 95;

public:

    void ShowMarks()
    {
        cout << "Marks : "
             << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.ShowMarks();

    // Wrong ❌
    // cout << s1.marks;

    return 0;
}

/*

▶ Execution Output

Marks : 95

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

Only one Object is created
and one Member Function
is called.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

'marks'

is declared protected.

Step 2:

Outside code cannot
access marks directly.

Step 3:

ShowMarks()

is public.

It accesses the protected
Member from inside the Class.

Step 4:

Later,

Child Classes will also
be able to access
protected Members.

This will be covered
in the Inheritance chapter.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is protected in C++?

Answer:

protected is an Access
Specifier.

It is mainly used in
Inheritance.

It cannot be accessed
directly from outside
the Class.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking protected and
private are completely
the same.

✘ Trying to access
protected Members
directly using an Object.

Wrong

s1.marks;

Correct

s1.ShowMarks();

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Why is protected rarely used
without Inheritance?

Answer:

Because its main purpose is
to allow Child Classes to
access Members while keeping
them hidden from outside code.

◆───────────────────────────────◆

📝 Summary

protected is an Access
Specifier mainly used
with Inheritance.

It hides Members from
outside code while allowing
future Child Classes to
access them.

◆───────────────────────────────◆

📌 Quick Revision

protected
      │
Access Specifier
      │
Hidden From Outside
      │
Used In Inheritance
      │
Accessible By Child Class

◆───────────────────────────────◆

*/