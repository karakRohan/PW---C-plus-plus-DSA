#include <bits/stdc++.h>
using namespace std;

class Gun {
public:
    int ammo;
    int damage;
    int scope;
};

class Player {
private:
    class Helmet {
        int hp;
        int level;

    public:
        void setHp(int hp) {
            this->hp = hp;
        }
        void setLevel(int level) {
            this->level = level;
        }
        int getHp() {
            return hp;
        }
        int getLevel() {
            return level;
        }
    };

    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

public:
    // Getters
    int getHealth() {
        return health;
    }
    int getAge() {
        return age;
    }
    int getScore() {
        return score;
    }
    bool isAlive() {
        return alive;
    }
    Gun getGun() {
        return gun;
    }

    // Setters
    void setHealth(int health) {
        this->health = health;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setScore(int score) {
        this->score = score;
    }
    void setIsAlive(bool alive) {
        this->alive = alive;
    }
    void setGun(Gun gun) {
        this->gun = gun;
    }
    void setHelmet(int level) {
        Helmet helmet;
        helmet.setLevel(level);
        int health = 0;

        if (level == 1)
            health = 25;
        else if (level == 2)
            health = 50;
        else if (level == 3)
            health = 100;
        else
            cout << "error, invalid level!!";

        helmet.setHp(health);
        this->helmet = helmet;
    }

    // New function to display helmet info
    void showHelmet() {
        cout << "Helmet HP: " << helmet.getHp() << endl;
        cout << "Helmet Level: " << helmet.getLevel() << endl;
    }
};

// Add function
int addScore(Player a, Player b) {
    return a.getScore() + b.getScore();
}

Player getMaxScorePlayer(Player a, Player b) {
    if (a.getScore() > b.getScore())
        return a;
    else
        return b;
}

int main() {
    Player Rohan;
    Player Ayan;

    Player *Sayan = new Player; // run time, dynamic allocation

    Gun akm;
    akm.ammo = 100;
    akm.damage = 50;
    akm.scope = 2;

    // Using setters correctly
    Rohan.setAge(21);
    Rohan.setScore(100);
    Rohan.setIsAlive(true);
    Rohan.setHealth(100);
    Rohan.setGun(akm);
    Rohan.setHelmet(2);

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;

    Ayan.setAge(22);
    Ayan.setScore(90);
    Ayan.setIsAlive(true);
    Ayan.setHealth(100);
    Ayan.setGun(awm);
    Ayan.setHelmet(3);

    Gun gun123 = Rohan.getGun();
    cout << "Rohan's Gun Info:" << endl;
    cout << "Damage: " << gun123.damage << endl;
    cout << "Ammo: " << gun123.ammo << endl;
    cout << "Scope: " << gun123.scope << endl;

    // Show helmet info
    Rohan.showHelmet();
    Ayan.showHelmet();

    // ✅ Corrected player array
    Player players[3] = {Rohan, Ayan, *Sayan};
    cout << "First player's age: " << players[0].getAge() << endl;

    Sayan->setHealth(20);
    cout << "Sayan's Health: " << Sayan->getHealth() << endl;

    // Add function
    cout << "Total Score: " << addScore(Rohan, Ayan) << endl;

    Player Srijan = getMaxScorePlayer(Rohan, Ayan);
    cout << "Max Score Player: " << Srijan.getScore() << endl;

    delete Sayan; // ✅ free memory
    return 0;
}
