#include <iostream>
using namespace std;
class Doctor{
    int id,age,salary;
    string name, specialization;
    public:
    void get_data()
    {
        cout<<"\nEnter name of Doctor "<<endl;
        cin>>name;
        cout<<"Enter age of Doctor"<<endl;
        cin>>age;
        cout<<"Enter id of Doctor "<<endl;
        cin>>id;
        cout<<"Enter salary of Doctor "<<endl;
        cin>>salary;
        cout<<"Enter specialization of Doctor "<<endl;
        cin>>specialization;
    }
    void show_data()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Specialization: "<<specialization<<endl;
        
    }
};
int main(){
    Doctor doctors[3];
    string name, specialization;
    int id,age, salary;
    for(int i = 0; i < 3; i++)
    {
        cout<<"\nDoctor "<<i + 1<<endl;
        doctors[i].get_data();
    }
    for(int i = 0; i < 3; i++)
    {
        cout<<"\nDoctor "<<i + 1<<endl;
        doctors[i].show_data();
    }
    return 0;
};
