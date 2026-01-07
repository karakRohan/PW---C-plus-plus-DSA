// Method - 1

// #include <bits/stdc++.h>
// using namespace std;

// class Cricketer {
// public: 
//     string name;   
//     int age;
//     int no_Of_Test_Matches;
//     int average_Score;
// };

// int main() {

//     vector<Cricketer> cricketer;
//     Cricketer Virat;
//     Virat.name = "Virat";
//     Virat.age = 37;
//     Virat.no_Of_Test_Matches = 100;
//     Virat.average_Score = 80;

//     Cricketer Dhoni;
//     Dhoni.name = "Dhoni";
//     Dhoni.age = 42;
//     Dhoni.no_Of_Test_Matches = 200;
//     Dhoni.average_Score = 100;

//     Cricketer cricketer[2] = {Virat, Dhoni};

//     for (int i = 0; i < 2; i++) {
//         cout << "Name: " << cricketer[i].name << endl;
//         cout << "Age: " << cricketer[i].age << endl;
//         cout << "Test Matches: " << cricketer[i].no_Of_Test_Matches << endl;
//         cout << "Average Score: " << cricketer[i].average_Score << endl;
//         cout << "-------------------" << endl;
//     }

//     return 0;
// }

// <---> //

// Method - 2

// #include <bits/stdc++.h>
// using namespace std;

// class Cricketer {
// public: 
//     string name;   
//     int age;
//     int no_Of_Test_Matches;
//     int average_Score;
// };

// int main() {
//     vector<Cricketer> cricketers;

//     // Predefined players
//     Cricketer Virat;
//     Virat.name = "Virat";
//     Virat.age = 37;
//     Virat.no_Of_Test_Matches = 100;
//     Virat.average_Score = 80;

//     Cricketer Dhoni;
//     Dhoni.name = "Dhoni";
//     Dhoni.age = 42;
//     Dhoni.no_Of_Test_Matches = 200;
//     Dhoni.average_Score = 100;

//     // Add them to vector
//     cricketers.push_back(Virat);
//     cricketers.push_back(Dhoni);

//     // Take 2 more players input from user
//     for (int i = 0; i < 2; i++) {
//         Cricketer temp;
//         cout << "Enter Cricketer Name: ";
//         cin >> temp.name;
//         cout << "Enter Age: ";
//         cin >> temp.age;
//         cout << "Enter No. of Test Matches: ";
//         cin >> temp.no_Of_Test_Matches;
//         cout << "Enter Average Score: ";
//         cin >> temp.average_Score;

//         cricketers.push_back(temp);
//     }

//     // Print all players
//     cout << "\n--- Cricketers Info ---\n";
//     for (int i = 0; i < cricketers.size(); i++) {
//         cout << "Name: " << cricketers[i].name << endl;
//         cout << "Age: " << cricketers[i].age << endl;
//         cout << "Test Matches: " << cricketers[i].no_Of_Test_Matches << endl;
//         cout << "Average Score: " << cricketers[i].average_Score << endl;
//         cout << "-------------------" << endl;
//     }

//     return 0;
// }


// <----> //

// Method - 3 //

#include <bits/stdc++.h>
using namespace std;

class Cricketer {
public: 
    string name;   
    int age;
    int no_Of_Test_Matches;
    int average_Score;
};

int main() {
    int n;
    cout << "Enter number of cricketers: ";
    cin >> n;

    vector<Cricketer> cricketers(n);

    // Input details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Cricketer " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> cricketers[i].name;
        cout << "Age: ";
        cin >> cricketers[i].age;
        cout << "No. of Test Matches: ";
        cin >> cricketers[i].no_Of_Test_Matches;
        cout << "Average Score: ";
        cin >> cricketers[i].average_Score;
    }

    // Output details
    cout << "\n--- Cricketers Info ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << cricketers[i].name << endl;
        cout << "Age: " << cricketers[i].age << endl;
        cout << "Test Matches: " << cricketers[i].no_Of_Test_Matches << endl;
        cout << "Average Score: " << cricketers[i].average_Score << endl;
        cout << "-------------------" << endl;
    }

    return 0;
}
