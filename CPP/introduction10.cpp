#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sc = 0;
int pc = 0;

class Person{
    public:
        string name;
        int age;
        virtual void getdata() = 0;
        virtual void putdata() = 0;
};

class Professor : public Person{
    private:
        int cur_id;
        int publications;
    public:
        Professor(){
            cur_id = ++pc;
        }
        virtual void getdata(){
            cin>>name>>age>>publications;
        }

        virtual void putdata(){
            cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
        }
};

class Student : public Person{
    private:
        int cur_id;
        int subjects[6];
    public:
        Student(){
            cur_id = ++sc;
        }

        virtual void getdata(){
            cin>>name>>age>>subjects[0]>>subjects[1]>>subjects[2]>>subjects[3]>>subjects[4]>>subjects[5];
        }

        virtual void putdata(){
            cout<<name<<" "<<age<<" "<<subjects[0]+subjects[1]+subjects[2]+subjects[3]+subjects[4]+subjects[5]<<" "<<cur_id<<endl;
        }
};

//int Professor::cur_id=0;
//int Student::cur_id=0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
