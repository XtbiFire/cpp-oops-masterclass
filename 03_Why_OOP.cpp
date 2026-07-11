/*
◆───────────────────────────────◆
03. Why OOP?
◆───────────────────────────────◆

💡 Remember

Why OOP?

• Organizes Large Software
• Improves Code Reusability
• Provides Better Security
• Makes Maintenance Easy
• Makes Software Scalable

🎯 Key Words

• Organization
• Reusability
• Security
• Maintenance
• Scalability

Imagine:

Without OOP
◆───────────────────────────────◆
Data and Functions are scattered.

With OOP
◆───────────────────────────────◆
Data and Functions stay together
inside a Class.

*/

#include <iostream>
using namespace std;

/*
◆───────────────────────────────◆
        Without OOP (Procedural)
◆───────────────────────────────◆
*/

// Global Data
string playerName = "Imran";
int health = 100;
int score = 0;

// Global Functions
void Run()
{
    cout << "Player is Running" << endl;
}

void Attack()
{
    cout << "Player is Attacking" << endl;
}

/*
◆───────────────────────────────◆
        With OOP
◆───────────────────────────────◆
*/

class Player
{
public:

    // Data Members
    string name = "Imran";
    int health = 100;
    int score = 0;

    // Member Functions
    void Run()
    {
        cout << "Player is Running" << endl;
    }

    void Attack()
    {
        cout << "Player is Attacking" << endl;
    }
};

// Main Function
int main()
{
    cout << " Without OOP " << endl;

    cout << "Name   : " << playerName << endl;
    cout << "Health : " << health << endl;
    cout << "Score  : " << score << endl;

    Run();
    Attack();

    cout << endl;

    cout << " With OOP " << endl;

    Player p1;

    cout << "Name   : " << p1.name << endl;
    cout << "Health : " << p1.health << endl;
    cout << "Score  : " << p1.score << endl;

    p1.Run();
    p1.Attack();

    return 0;
}

/*
Output

Without OOP:

Name   : Imran
Health : 100
Score  : 0
Player is Running
Player is Attacking

With OOP:

Name   : Imran
Health : 100
Score  : 0
Player is Running
Player is Attacking

◆───────────────────────────────◆
Observation
◆───────────────────────────────◆

Without OOP
◆───────────────────────────────◆
• Data is Global
• Functions are Global
• Difficult to Manage Large Projects
• Low Security
• Code Reuse is Difficult

With OOP
◆───────────────────────────────◆
• Data and Functions stay together
• Better Organization
• Better Security
• Easy Code Reuse
• Easy Maintenance
• Best for Large Software

🎤 Interview Point

Q. Why do we use OOP?

Answer:
OOP is used to organize large software,
improve code reusability, provide better
security, simplify maintenance, and make
software easier to scale.

*/