#include <iostream>
#include <string>

class Person {
    private:
        std::string name;
        int age;
    public:
        Person(std::string n, int a) : name(n), age(a){}
        std::string GetName() {
            return name;
        }
        int Getage() {
            return age;
        }
};
int main(){
    Person p("saba", 33);
    std::string n = p.GetName();
    int a = p.Getage();
    std::cout << "Name: " << n << std::endl;
    std::cout << "Age: " << a << std::endl;
    return 0;
}
