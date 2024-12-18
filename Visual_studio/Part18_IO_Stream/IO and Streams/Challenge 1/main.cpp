// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()
{
    Tours tours
    { "Tour Ticket Prices from Miami",
        {
            {
                "Colombia", {
                    { "Bogota", 8778000, 400.98 },
                    { "Cali", 2401000, 424.12 },
                    { "Medellin", 2464000, 350.98 },
                    { "Cartagena", 972000, 345.34 }
                },
            },
            {
                "Brazil", {
                    { "Rio De Janiero", 13500000, 567.45 },
                    { "Sao Paulo", 11310000, 975.45 },
                    { "Salvador", 18234000, 855.99 }
                },
            },
            {
                "Chile", {
                    { "Valdivia", 260000, 569.12 },
                    { "Santiago", 7040000, 520.00 }
            },
        },
            { "Argentina", {
                { "Buenos Aires", 3010000, 723.77 }
            }
        },
    }
    };

    const int total_width{ 70 };
    const int field1_width{ 20 };    // Country name
    const int field2_width{ 20 };    // City name
    const int field3_width{ 20 };    // Population
    const int field4_width{ 10 };    // Cost

    // Unformatted display so you can see how to access the vector elements
    std::cout << std::setw((total_width +tours.title.size())/2) << tours.title << std::endl;
    std::cout << std::endl;
    std::cout << std::setw(field1_width) << std::left << "Country" << std::setw(field2_width) << std::left << "City" << std::setw(field3_width) << std::left << "Population" << std::setw(field4_width) << std::right << "Cost" << std::endl;
    std::cout << std::setw(total_width) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' '); // reset setfill to blank spaces
    std::cout << std::setprecision(2) << std::fixed;

    for (size_t i = 0; i < tours.countries.size();i++) {   // loop through the countries
        //std::cout << std::setw(20) << std::left << tours.countries.at(i).name;
        
        for (size_t j = 0; j < tours.countries[i].cities.size(); j++) {       // loop through the cities for each country
            if (j==0)
            {
                std::cout << std::setw(20) << std::left << tours.countries.at(i).name 
                    << std::setw(20) << tours.countries[i].cities[j].name
                    << std::setw(20) << tours.countries[i].cities[j].population
                    << std::setw(10) << std::right << tours.countries[i].cities[j].cost
                    << std::endl;
            }
            else
            {
                std::cout << std::setw(20) << std::left << " "
                    << std::setw(20) << tours.countries[i].cities[j].name
                    << std::setw(20) << tours.countries[i].cities[j].population
                    << std::setw(10) << std::right << tours.countries[i].cities[j].cost
                    << std::endl;
            }
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}