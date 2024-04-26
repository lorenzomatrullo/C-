#include <iostream>
using namespace std;


class Student {
    public:
        string name;

        Student(string name){
            this -> name = name;
        }

        virtual void print(){               // "virtual" displays the 2nd parameter ("speciality") for MedicalStudents otherwise it'd only display one parameter ("name")
            cout << name << '\n';
        }
};


class MedicalStudent : public Student {
    public:
        string speciality;

        MedicalStudent(string name, string speciality) : Student(name) {
            this -> speciality = speciality;
        }

        void print(){
            cout << name << ": " << speciality << '\n';
        }
};


int main(){

    Student *students[] = {
        new Student("Kevin"),
        new Student("Mary"),
        new Student("Kulvinder"),
        new MedicalStudent("Ali", "Family Medicine"),
        new MedicalStudent("Harry", "Pediatrics"),
        new MedicalStudent("Lisa", "Radiology")
    };

    for(int i = 0; i < 6; i++){
        students[i] -> print();
    }

    for(int i = 0; i < 6; i++){
        delete students[i];
    }


    return 0;
}