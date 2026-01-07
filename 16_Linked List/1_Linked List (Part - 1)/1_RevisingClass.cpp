// #include<bits/stdc++.h>
// using namespace std;

// class Student{ // User Defined Data type
// public: 
//     string name;
//     int rno;
//     float marks;
//     Student(string name, int rno, float marks){
//         this->name = name;
//         this->rno = rno;
//         this->marks = marks;
//     }
// };

// void change(Student s){
//     s->name = "Ayan";
// }

// int main(){
//     // int x = 3;
//     // Student s("Rohan",117,82.6);
//     // // s.name= "Rohan Karak";
//     // // s.rno = 117;
//     // // s.marks= 82.6;
//     // cout<<s.name<<endl<<s.rno<<endl<<s.marks<<endl;
//     // change(s);
//     // cout<<s.name<<endl;

//     Student* s = new Student("Rohan",117,82.6); 
//     s->marks = 92.6;
//     cout<<s->name<<endl;
//     change(s);
//     cout<<s->name<<endl;   
// }

#include <bits/stdc++.h>
using namespace std;

class Student { // User Defined Data type
public:
    string name;
    int rno;
    float marks;

    Student(string name, int rno, float marks) {
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};

void change(Student &s) { // pass by reference
    s.name = "Ayan";
}

int main() {
    Student s("Rohan", 117, 82.6);
    s.marks = 92.6;

    cout << s.name << endl;
    change(s);
    cout << s.name << endl;

    return 0;
}
