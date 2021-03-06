// Using iomanip
// By Emily Dayanghirang

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int ACRE_OF_LAND_IN_SQFT = 43560;
    int user_sqft;
    float user_acres;

    // Prompt user to enter land in sqft
    cout << "Please enter the total square feet in a piece of land: \n";
    cin >> user_sqft;

    // Calculate sqft to acres
    // Explicit type casting to avoid integer division
    user_acres = static_cast<float>(user_sqft) / ACRE_OF_LAND_IN_SQFT;

    // Display land in acres
    cout << "The number of acres in the piece of land is "
         << setprecision(2) << fixed
         << user_acres << " acres." << endl;


    return 0;
}
