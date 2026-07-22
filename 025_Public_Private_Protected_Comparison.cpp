/*
◆───────────────────────────────◆
25. public vs private vs protected
◆───────────────────────────────◆

💡 Remember

public, private and protected
are Access Specifiers.

They decide who can access
the Members of a Class.

◆───────────────────────────────◆

🎯 Goal

Understand the complete
difference between all
three Access Specifiers.

◆───────────────────────────────◆

📖 Simple Meaning

public

Everyone can access.

private

Only the same Class
can directly access.

protected

Same Class and Child
Classes can access.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a House.

                 House
                   │
     ┌─────────────┼─────────────┐
     ▼             ▼             ▼

 Drawing Room   Family Room   Locker

   public       protected     private

Anyone can      Family can    Only Owner
enter.          enter.        can access.

◆───────────────────────────────◆

⭐ Comparison Table

                public   private   protected
----------------------------------------------
Outside Class      ✔        ✘          ✘

Same Class         ✔        ✔          ✔

Child Class        ✔        ✘          ✔

Security         Medium    High      High

Main Use         Open      Hide      Inheritance

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name = "Alex";

protected:

    int rollNo = 101;

private:

    int marks = 95;

public:

    void ShowData()
    {
        cout << "Name    : "
             << name << endl;

        cout << "Roll No : "
             << rollNo << endl;

        cout << "Marks   : "
             << marks << endl;
    }
};

int main()
{
    Student s1;

    // public Member
    cout << s1.name << endl;

    // protected ❌
    // cout << s1.rollNo;

    // private ❌
    // cout << s1.marks;

    cout << endl;

    s1.ShowData();

    return 0;
}

/*

▶ Execution Output

Alex

Name    : Alex
Roll No : 101
Marks   : 95

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

Only one Object is created.

Constant-time operations
are performed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

'name' is public.

Accessible everywhere.

Step 2:

'rollNo' is protected.

Accessible inside the Class
and Child Classes.

Step 3:

'marks' is private.

Accessible only inside
the same Class.

Step 4:

ShowData() prints all
three Members because it
belongs to the same Class.

Step 5:

main() can directly access
only the public Member.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Differentiate between
public, private and protected.

Answer:

public

Accessible everywhere.

private

Accessible only inside
the same Class.

protected

Accessible inside the Class
and Child Classes.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Making every Data Member
public.

✘ Thinking protected and
private are exactly the same.

✘ Accessing private or
protected Members directly.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which Access Specifier is
used most for Data Members?

Answer:

✅ private

Because it provides
Data Hiding and better
Security.

◆───────────────────────────────◆

📝 Summary

public

↓

Open Access

private

↓

Highest Protection

protected

↓

Used for Inheritance

◆───────────────────────────────◆

📌 Quick Revision

                public
                   │
          Accessible Everywhere

                private
                   │
         Only Same Class

              protected
                   │
      Same Class + Child Class

◆───────────────────────────────◆

*/