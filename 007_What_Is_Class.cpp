/*
◆───────────────────────────────◆
07. What Is a Class?
◆───────────────────────────────◆

💡 Remember

Class is a User-Defined Data Type
that acts as a Blueprint for
creating Objects.

A Class contains:

• Data Members
• Member Functions

🎯 Key Words

• Class
• Keyword
• User-Defined Data Type
• Blueprint
• Object

Imagine:

House Blueprint
       │
       ▼
     Class

Real House
       │
       ▼
     Object

*/

#include <iostream>
using namespace std;

/*
◆───────────────────────────────◆
        Class Definition
◆───────────────────────────────◆
*/

class Player
{
public:

    // Data Members
    string name = "Alex";
    int health = 100;

    // Member Function
    void ShowData()
    {
        cout << "Name   : " << name << endl;
        cout << "Health : " << health << endl;
    }
};

// Main Function

int main()
{
    // Object Creation
    Player p1;

    // Calling Member Function
    p1.ShowData();

    return 0;
}

/*
Output

Name   : Alex
Health : 100

◆───────────────────────────────◆
Observation
◆───────────────────────────────◆

class
◆───────────────────────────────◆
A C++ Keyword.

Player
◆───────────────────────────────◆
Class Name.

{
}
◆───────────────────────────────◆
Class Body.

name
health
◆───────────────────────────────◆
Data Members.

ShowData()
◆───────────────────────────────◆
Member Function.

Player p1;
◆───────────────────────────────◆
Object Creation.

⚠ Common Mistake

✗ Thinking a Class creates memory.

Wrong.

A Class is only a Blueprint.

Memory is created only when
an Object is created.

Example:

Player p1;

🎤 Interview Point

Q. What is a Class?

Answer:

A Class is a User-Defined Data Type
that acts as a Blueprint for
creating Objects.

*/
