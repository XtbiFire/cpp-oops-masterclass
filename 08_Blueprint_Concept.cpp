/*
◆───────────────────────────────◆
08. Blueprint Concept
◆───────────────────────────────◆

💡 Remember

A Class is called a Blueprint
because it describes how an
Object should be created.

A Blueprint is only a Design.

An Object is the Real Entity.

◆───────────────────────────────◆

🎯 Goal

Understand why a Class is called
a Blueprint and how Objects are
created from it.

◆───────────────────────────────◆

📌 Simple Meaning

A Blueprint is a plan or design.

It describes the structure of
something before it is actually
built.

Similarly,

A Class describes an Object
before the Object is created.

◆───────────────────────────────◆

📌 Real Life Example

House Blueprint
       │
       ▼
    House Class

       │
       ▼

House h1
House h2
House h3

One Blueprint can create
many Houses.

◆───────────────────────────────◆

📌 Key Points

✔ Blueprint is only a Design.

✔ Class is a Blueprint.

✔ Object is created from
  the Class.

✔ One Class can create
  many Objects.

✔ Memory is allocated only
  when an Object is created.

*/

#include <iostream>
using namespace std;

// House Blueprint
class House
{
public:

    int rooms = 3;

    void ShowRooms()
    {
        cout << "Rooms : " << rooms << endl;
    }
};

// Main Function
int main()
{
    // Objects created from one Blueprint

    House h1;
    House h2;
    House h3;

    h1.ShowRooms();
    h2.ShowRooms();
    h3.ShowRooms();

    return 0;
}

/*

Output

Rooms : 3
Rooms : 3
Rooms : 3

◆───────────────────────────────◆

💼 Interview Note

Question:

Why is a Class called a Blueprint?

Answer:

A Class is called a Blueprint
because it defines the Data
and Functions of an Object,
but it is not the Object itself.

Objects are created from it.

◆───────────────────────────────◆

⚠️ Avoid These Mistakes

✘ Blueprint and Object
  are not the same.

✘ A Class is not a real
  Object.

✘ Memory is not allocated
  when a Class is created.

✔ Memory is allocated only
  when an Object is created.

◆───────────────────────────────◆

🧠 Brain Booster

Question:

If one House Class exists,
how many House Objects can
be created?

✅ Answer:

Unlimited Objects can be
created from one Class.

Example:

House h1;
House h2;
House h3;
House h4;

◆───────────────────────────────◆

📌 Quick Revision

Blueprint
    │
    ▼
  Class
    │
Creates
    │
    ▼
 Objects
    │
Memory Allocated

*/