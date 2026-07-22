/*
◆───────────────────────────────◆
22. public vs private
◆───────────────────────────────◆

💡 Remember

Both public and private are
Access Specifiers.

The difference is who can
access the Members.

◆───────────────────────────────◆

🎯 Goal

Understand the difference
between public and private
Access Specifiers.

◆───────────────────────────────◆

📖 Simple Meaning

public

Everyone can access.

private

Only the Class itself can
directly access.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a House.

          House
             │
   ┌─────────┴─────────┐
   ▼                   ▼

Drawing Room      Locker Room

(public)          (private)

Guests can enter  Only Owner
freely.           has access.

Similarly,

public Members

✔ Open Access

private Members

🔒 Restricted Access

◆───────────────────────────────◆

⭐ Comparison Table

public

✔ Accessible from outside
✔ Less Secure
✔ Used for Member Functions
✔ Open Access

private

✔ Not accessible outside
✔ More Secure
✔ Used for important Data
✔ Restricted Access

◆───────────────────────────────◆

🌐 Code

*/

#include <iostream>
using namespace std;

class Student
{
public:

    string name = "Alex";

private:

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

    // public Member
    cout << "Name : "
         << s1.name << endl;

    // private Member
    // cout << s1.marks; ❌

    s1.ShowMarks();

    return 0;
}

/*

▶ Execution Output

Name : Alex
Marks : 95

◆───────────────────────────────◆

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

Only one Object is created
and constant-time operations
are performed.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

'name'

is public.

It can be accessed
directly.

Step 2:

'marks'

is private.

It cannot be accessed
directly.

Step 3:

ShowMarks()

is public.

It accesses the private
Member from inside the Class.

Step 4:

main()

can access

✔ name

but cannot access

❌ marks

directly.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Difference between public
and private?

Answer:

public allows Members to be
accessed from outside the Class.

private hides Members from
outside the Class and provides
better security.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking private Members
cannot be used.

They can be used inside
the same Class.

✘ Making every Data Member
public.

Important data should usually
be private.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which Access Specifier is
generally used for important
Data Members?

Answer:

✅ private

because it protects data
from direct access.

◆───────────────────────────────◆

📝 Summary

public

↓

Open Access

↓

Less Restriction

private

↓

Restricted Access

↓

Better Protection

◆───────────────────────────────◆

📌 Quick Revision

public
   │
Open
   │
Anyone Can Access

private
   │
Locked
   │
Only Class Can Access

◆───────────────────────────────◆

*/