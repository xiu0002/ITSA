#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
using namespace std;

int main() {
    const int num_inputs = 10;
    float min_value = numeric_limits<float>::max();
    float max_value = numeric_limits<float>::min();


    for (int i = 0; i < num_inputs; ++i) {
        float input;
        cin >> input;
        if (input < min_value) {
            min_value = input;
        }
        if (input > max_value) {
            max_value = input;
        }
    }

    ostringstream min_stream;
    min_stream << fixed << setprecision(2) << min_value;
    string formatted_min = min_stream.str();

    ostringstream max_stream;
    max_stream << fixed << setprecision(2) << max_value;
    string formatted_max = max_stream.str();

    cout << "maximum:" << formatted_max << endl;
    cout << "minimum:" << formatted_min << endl;

    return 0;
}