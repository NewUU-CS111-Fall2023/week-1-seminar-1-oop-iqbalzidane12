/*
 * Author:20221500484
 * Date:10/17/2023
 * Name:Muxtorov Abdulaziz SSE3
 */
#include <iostream>
#include <vector>
class Person {
private:
    // Data members
    std::string firstName;
    std::string lastName;
    int age;
    char sex;

public:
    Person(std::string fn, std::string ln, int a, char s) {
        firstName = fn;
        lastName = ln;
        age = a;
        sex = s;
    }

    std::string getFirstName() {
        return firstName;
    }

    std::string getLastName() {
        return lastName;
    }

    int getAge() {
        return age;
    }

    char getSex() {
        return sex;
    }
};

class Family {
private:
    Person *mother; // Pointer to mother object
    Person *father; // Pointer to father object
    std::vector<Person *> children; // Vector of pointers to children objects

public:
    Family(Person *m, Person *f) {
        mother = m;
        father = f;
    }

    void addChild(Person *c) {
        children.push_back(c); // Add a child pointer to the vector
    }

    void printFamily() {
        std::cout << "Mother: " << mother->getFirstName() << " " << mother->getLastName() << "\n";
        std::cout << "Father: " << father->getFirstName() << " " << father->getLastName() << "\n";
        std::cout << "Children: \n";
        for (Person *c : children) { // Loop through the vector of child pointers
            std::cout << c->getFirstName() << " " << c->getLastName() << "\n";
        }
    }
};

int main() {
    Person *shahnoza = new Person("Shahnoza", "Xudaykulova", 41, 'F');
    Person *ganisher = new Person("Ganisher", "Ruziev", 45, 'M');
    Person *soliha = new Person("Soliha", "Muxtorova", 5, 'F');
    Person *umriniso = new Person("Umriniso", "Muxtorova", 18, 'F');
    Person *abdulaziz = new Person("Abdulaziz", "Muxtorov", 19, 'M');

    Family *ruzievs = new Family(shahnoza, ganisher);

    ruzievs->addChild(soliha);
    ruzievs->addChild(umriniso);
    ruzievs->addChild(abdulaziz);

    ruzievs->printFamily();

    return 0;
}
