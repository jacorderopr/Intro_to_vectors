#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person
{
private:
    std::string name;
    int age;
    std::vector<std::string> hobbies; // {"basketball", "soccer"}
    bool isLeftHanded;
    int luckyNumber; // New member variable

public:
    // Constructor with body, using 'this->' to assign member variables
    Person(std::string name, int age, std::vector<std::string> hobbies, bool isLeftHanded, int luckyNumber)
    {
        this->name = name;
        this->age = age;
        this->hobbies = hobbies;
        this->isLeftHanded = isLeftHanded;
        this->luckyNumber = luckyNumber; // Assigning luckyNumber
    }

    // Getters
    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::vector<std::string> getHobbies() const { return hobbies; }
    bool getIsLeftHanded() const { return isLeftHanded; }
    int getLuckyNumber() const { return luckyNumber; } // Getter for luckyNumber

    // Setters
    void setName(const std::string &newName) { name = newName; }
    void setAge(int newAge) { age = newAge; }
    void setHobbies(const std::vector<std::string> &newHobbies) { hobbies = newHobbies; }
    void setIsLeftHanded(bool newIsLeftHanded) { isLeftHanded = newIsLeftHanded; }
    void setLuckyNumber(int newLuckyNumber) { luckyNumber = newLuckyNumber; } // Setter for luckyNumber

    // Method to print Person details
    void printDetails() const
    {
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Hobbies: ";
        for (const auto &hobby : hobbies)
        {
            std::cout << hobby << " ";
        }
        std::cout << "\nLeft-handed: " << (isLeftHanded ? "Yes" : "No") << "\n";
        std::cout << "Lucky Number: " << luckyNumber << "\n"; // Printing luckyNumber
    }
};

vector<Person> findLeftHandedWithNegativeLuckyNumbers(vector<Person> vec)
{

    // your solution goes here!

    return {}; // this is an empty vector! Change this!
}

int main()
{
    // Example of creating a Person object

    // Test Case 1: Mixed people
    vector<Person> people = {
        Person("Alice", 30, {"Reading"}, true, -7),   // Should be included
        Person("Bob", 40, {"Cycling"}, false, -10),   // Not included (not left-handed)
        Person("Charlie", 25, {"Swimming"}, true, 5), // Not included (lucky number is positive)
        Person("Diana", 35, {"Cooking"}, true, -12),  // Should be included
        Person("Eve", 28, {"Running"}, false, -9)     // Not included (not left-handed)
    };

    vector<Person> result = findLeftHandedWithNegativeLuckyNumbers(people);

    cout << "Test Case 1 Results: \n";
    for (Person p : result)
    {
        cout << p.getName() << "\n"; // Should output Alice and Diana
    }

    // -------------------------------------------------------------------------------------------

    // Test Case 2: All left-handed with positive lucky numbers
    vector<Person> allPositiveLuckyNumbers = {
        Person("Frank", 33, {"Gaming"}, true, 10),
        Person("Grace", 22, {"Music"}, true, 15),
        Person("Helen", 40, {"Yoga"}, true, 3)};

    result = findLeftHandedWithNegativeLuckyNumbers(allPositiveLuckyNumbers);

    cout << "Test Case 2 Results: \n";
    if (result.empty())
    {
        cout << "No left-handed people with negative lucky numbers\n"; // Expected output
    }

    // -------------------------------------------------------------------------------------------

    // Test Case 3: Empty vector
    vector<Person> emptyVector;

    result = findLeftHandedWithNegativeLuckyNumbers(emptyVector);

    cout << "Test Case 3 Results: \n";
    if (result.empty())
    {
        cout << "No left-handed people with negative lucky numbers\n"; // Expected output
    }

    // -------------------------------------------------------------------------------------------

    // Test Case 4: Mixed with multiple valid results
    vector<Person> multipleValidPeople = {
        Person("Laura", 50, {"Hiking"}, true, -6),   // Should be included
        Person("Megan", 32, {"Drawing"}, true, -9),  // Should be included
        Person("Noah", 27, {"Skiing"}, false, 11),   // Not included
        Person("Olivia", 21, {"Painting"}, true, -2) // Should be included
    };

    result = findLeftHandedWithNegativeLuckyNumbers(multipleValidPeople);

    cout << "Test Case 4 Results: \n";
    for (Person p : result)
    {
        cout << p.getName() << "\n"; // Should output Laura, Megan, Olivia
    }

    // -------------------------------------------------------------------------------------------

    return 0;
}
