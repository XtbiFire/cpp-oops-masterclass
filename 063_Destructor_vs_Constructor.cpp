/*
◆───────────────────────────────◆
63. Destructor vs Constructor
◆───────────────────────────────◆

💡 Remember

Constructor and Destructor
are special Member Functions.

Constructor creates an Object.

Destructor destroys an Object.

They always work together.

◆───────────────────────────────◆

🎯 Goal

Understand the difference
between Constructor and
Destructor.

◆───────────────────────────────◆

📖 Simple Meaning

Constructor says,

"Welcome!"

Destructor says,

"Goodbye!"

One prepares the Object.

The other cleans the Object.

◆───────────────────────────────◆

🌍 Real Life Example

Hotel Check-In

        │

Constructor

(Room Prepared)

───────────────

Stay

───────────────

Hotel Check-Out

        │

Destructor

(Room Cleaned)

◆───────────────────────────────◆

⭐ Key Points

✔ Constructor creates
  Objects.

✔ Destructor destroys
  Objects.

✔ Constructor can have
  Parameters.

✔ Destructor cannot have
  Parameters.

✔ Constructor can be
  Overloaded.

✔ Destructor cannot be
  Overloaded.

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

    cout << "Object Is Working"
         << endl;

    return 0;
}

/*

▶ Execution Output

Constructor Called

Object Is Working

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

Program executes.

Step 4:

Object lifetime ends.

Step 5:

Destructor runs.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the difference
between Constructor and
Destructor?

Answer:

Constructor initializes
an Object when it is
created.

Destructor releases
resources when the Object
is destroyed.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking Constructor
and Destructor are the
same.

✘ Giving parameters to
Destructor.

✘ Creating multiple
Destructors.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which runs first?

Constructor

OR

Destructor

Answer:

✅ Constructor

Destructor runs when the
Object's lifetime ends.

◆───────────────────────────────◆

📝 Summary

Constructor
      │
Creates Object
      │
Program Executes
      │
Destructor
      │
Destroys Object

◆───────────────────────────────◆

📌 Quick Revision

Constructor

✔ Creates Object

✔ Can Have Parameters

✔ Can Be Overloaded

✔ Called First

───────────────

Destructor

✔ Destroys Object

✔ No Parameters

✔ Cannot Be Overloaded

✔ Called Last

◆───────────────────────────────◆

*/