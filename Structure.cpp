#include<iostream>
 using namespace std;
 struct person
 {
     string Name;
      int Age;
 };
 int main()
 {
     person person1;
     person1.Name = " Asif ";
     person1.Age = 23;

     cout<<"Name :"<<person1.Name<<endl;
     cout<<"Age :"<<person1.Age<<endl;
 }
