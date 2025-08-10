#include<iostream>
using namespace std;
class person
{
public :
    string Name;
    int Age;
};
int main()
{
    person person1;
    person1.Name = "Asif";
    person1.Age = 23;

    cout<< "Name :"<< person1.Name<< endl;
    cout<< "Age: "<< person1.Age<< endl;
}
