#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Barra {
private:
    std::string name;
    int capacity;
    int rating; // Rating should be between 1 and 10
    std::vector<std::string> bartenders;


public:
    // Constructor
    Barra(std::string name, int capacity, int rating, std::vector<std::string> bartenders) {
        this->name = name;
        this->capacity = capacity;
        this->rating = (rating >= 1 && rating <= 10) ? rating : 1; // Ensuring rating is between 1 and 10
        this->bartenders = bartenders;
    }


// if(rating >= 1 && rating <= 10){
        //     this->rating = rating;
        // }
        // else{
        //     this->rating = 1;
        // }

    // Getters
    std::string getName() const { return name; }
    int getCapacity() const { return capacity; }
    int getRating() const { return rating; }
    std::vector<std::string> getBartenders() const { return bartenders; }

    // Setters
    void setName(const std::string& newName) { name = newName; }
    void setCapacity(int newCapacity) { capacity = newCapacity; }
    void setRating(int newRating) { 
        if (newRating >= 1 && newRating <= 10) {
            rating = newRating;
        } else {
            std::cout << "Rating must be between 1 and 10\n";
        }
    }
    void setBartenders(const std::vector<std::string>& newBartenders) { bartenders = newBartenders; }

    // Method to print Barra details
    void printDetails() const {
        std::cout << "Barra Name: " << name << "\n";
        std::cout << "Capacity: " << capacity << "\n";
        std::cout << "Rating: " << rating << "\n";
        std::cout << "Bartenders: ";
        for (const auto& bartender : bartenders) {
            std::cout << bartender << " ";
        }
        std::cout << "\n";
    }
};

// x = 5
template<typename Iterator>
vector<Barra> findBarsWithBartender(Iterator start, Iterator end, string bartender_name){



  return {}; // 
}

int main() {
    // Example of creating a Barra object
    std::vector<std::string> bartenders = {"Johnny", "Lucy", "Paul"};
    vector<string>bartenders2 = {"Roberto", "Antonio", "Sabrina", "Mariela"};
    vector<string>bartenders3 = {"Fernando", "Lando", "Leandro", "Feid"};
    vector<string>bartenders4 = {"Yandel", "Jeremy", "Leandro", "Jhayco"};


    Barra off_the_wall = Barra("Off The Wall", 100, 8, bartenders);
    Barra bodeguita = Barra("Bodeguita", 20, 6, bartenders2);
    Barra candela = Barra("Candela", 50, 8, bartenders3);
    Barra tijolos = Barra("Tijolos", 3, 2, bartenders4);


    vector<Barra> barras = {off_the_wall, bodeguita, candela, tijolos};


    Barra last_bar_in_vector = *(barras.end() - 1);

    cout << "Last bar name in vector 'barras': " << last_bar_in_vector.getName();


    //  vector<Barra>::iterator it = barras.begin();

    // auto it2 = barras.begin();
    // test case 1:
    vector<Barra> result = findBarsWithBartender(barras.begin(), barras.end(), "Leandro"); // candela y tijolos

    for(Barra bar : result){
        cout << bar.getName() << " has a bartender named Leandro!"<< endl;
    }


    // Print details of the Barra
    // barra.printDetails();

    return 0;
}
