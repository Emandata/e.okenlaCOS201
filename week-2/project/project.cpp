#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>
#include <string>
using namespace std;

int main() {
    string name, courseName, locationName;
    bool isPau;
    int course, days, loc;
    double regFee, lodgingPerDay,lodgingCost, total, promo = 0;
    double regDiscount = 0, lodgeDiscount = 0;

    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Loccation";
    cout << "Are you a PAU student? (1=true and 0 =false): ";
    cin >> isPau;

    cout << "Enter your course (1-5): ";
    cin >> course;

    cout << "Enter your location (1-5): ";
    cin >> loc;

    if (course ==1) { courseName = "Photography"; days = 3; regFee = 10000; }
    else if (course==2) {courseName = "Painting"; days = 5; regFee= 8000;}
    else if (course == 3) {courseName = "Fish Farming"; days = 7; regFee = 15000;}
    else if (course == 4) {courseName = "Baking"; days = 5; regFee = 13,000;}
    else if (course ==5) {courseName = "Public speaking"; days = 2; regFee = 5,000;}

    else {cout << "Invalid input"; return 0;}

    if (loc == 1) { locationName = "Camp House A"; lodgingPerDay =1000;}
    else if (loc == 2) {locationName = "Camp House B"; lodgingPerDay =2500;}
    else if (loc == 3) {locationName = "Camp House C";lodgingPerDay =3000;}
    else if (loc == 4) {locationName = "Camp House C";lodgingPerDay =5000;}
    
    else {cout << "Invalid input"; return 0;}

    lodgingCost = lodgingPerDay * days;

    if (isPau && (loc == 1 || loc == 2)) {
        lodgeDiscount = 0.05 * lodgingCost;
        lodgingCost -= lodgeDiscount;
    }

    if (days > 5 || regFee > 12000) {
        regDiscount = 0.03 * regFee;
        regFee -= regDiscount;
    }    
        
    srand(time(0));
    int r = rand() % 100 + 1;
    if (r == 7 || r == 77) promo = 500;

    total = regFee + lodgingCost - promo;

    cout << "\n --- Registration Summary ---\n";
    cout << "Name :"<< name << "    (PAU student: " << (isPau ? "Yes" : "No") << ")\n";
    cout << "Registration: " << regFee << "   (Discount: " << regDiscount << ")\n";
    cout << "Lodging " << lodgingPerDay << " x " << days << " =" << lodgingCost
         << "Random draw: " << r << "Promo applied: " << promo << endl;
    cout << " TOTAL: " << total << endl;   
    
    return 0;
}