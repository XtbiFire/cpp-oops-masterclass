/*
◆───────────────────────────────◆
04. Advantages of OOP
◆───────────────────────────────◆

💡 Remember

Advantages of OOP

• Organizes Large Software
• Code Reusability
• Better Security
• Easy Maintenance
• Easy Scalability

🎯 Key Words

• Organization
• Reusability
• Security
• Maintenance
• Scalability

Imagine:

Without OOP
◆───────────────────────────────◆
Managing thousands of variables and
functions becomes difficult.

With OOP
◆───────────────────────────────◆
Software is divided into small Classes,
making it clean and easy to manage.

*/

#include <iostream>
using namespace std;

/*
◆───────────────────────────────◆
        Player Class
◆───────────────────────────────◆
*/

class Player
{
public:

    string name;
    int health;

    void Run()
    {
        cout << name << " is Running" << endl;
    }

    void Attack()
    {
        cout << name << " is Attacking" << endl;
    }
};

// Main Function
int main()
{
    Player p1;
    p1.name = "Imran";
    p1.health = 100;

    Player p2;
    p2.name = "Alex";
    p2.health = 100;

    p1.Run();
    p1.Attack();

    cout << endl;

    p2.Run();
    p2.Attack();

    return 0;
}

/*
Output

Imran is Running
Imran is Attacking

Alex is Running
Alex is Attacking

◆───────────────────────────────◆
Observation
◆───────────────────────────────◆

Organization
◆───────────────────────────────◆
Player data and functions are kept
inside one Class.

Reusability
◆───────────────────────────────◆
The same Player class is reused to
create p1 and p2 objects.

Security
◆───────────────────────────────◆
Data can be protected using Private
Members (Covered Later).

Maintenance
◆───────────────────────────────◆
If Player behavior changes, update
only the Player class.

Scalability
◆───────────────────────────────◆
Create unlimited Player objects
without rewriting the class.

🎤 Interview Point

Q. What are the advantages of OOP?

Answer:

• Better Organization
• Code Reusability
• Better Security
• Easy Maintenance
• Easy Scalability

*/