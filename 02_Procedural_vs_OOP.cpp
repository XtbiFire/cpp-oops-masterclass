/*
◆════════════════════════════════════════════◆

02. Procedural Programming vs Object-Oriented Programming

◆════════════════════════════════════════════◆

💡 Remember

Procedural Programming
• Focuses on Functions
• Data and Functions are Separate
• Best for Small Programs

Object-Oriented Programming (OOP)
• Focuses on Objects
• Data and Functions are Together
• Best for Large Software

🎯 Key Words

• Procedure
• Function
• Class
• Object
• Data
• Member Function

*/

#include <iostream>
using namespace std;

/*=========================================
    Procedural Programming
=========================================*/

// Global Data
string playerName = "Imran";
int playerHealth = 100;

// Global Functions
void run()
{
    cout << "Player is Running" << endl;
}

void attack()
{
    cout << "Player is Attacking" << endl;
}

/*=========================================
    Object-Oriented Programming
=========================================*/

class Player
{
public:

    // Data Members
    string name = "Imran";
    int health = 100;

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
    cout << "========== Procedural Programming ==========\n";

    cout << "Player Name : " << playerName << endl;
    cout << "Health      : " << playerHealth << endl;

    run();
    attack();

    cout << "\n========== Object-Oriented Programming ==========\n";

    Player p1;

    cout << "Player Name : " << p1.name << endl;
    cout << "Health      : " << p1.health << endl;

    p1.Run();
    p1.Attack();

    return 0;
}

/*
Output:

========== Procedural Programming ==========

Player Name : Imran
Health      : 100
Player is Running
Player is Attacking

========== Object-Oriented Programming ==========

Player Name : Imran
Health      : 100
Player is Running
Player is Attacking

=================================================
Observation:

Procedural Programming
----------------------
Data:
• playerName
• playerHealth

Functions:
• run()
• attack()

Data and Functions are Separate.

Object-Oriented Programming
---------------------------
Class:
Player

Data Members:
• name
• health

Member Functions:
• Run()
• Attack()

Data and Functions are Together
inside the Player class.
*/