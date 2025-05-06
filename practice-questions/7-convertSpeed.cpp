#include <iostream>
using namespace std;

int main() {
    // Declare the variable speed1 and initialize it with the value 36 (speed in km/h)
    float speed1 = 36.0;

    // Convert the speed from km/h to m/s using the formula: 1 km/h = 5/18 m/s
    float speedInMps = speed1 * (5.0 / 18.0);

    // Display the converted speed in meters per second
    cout << speedInMps << endl;

    return 0;
}