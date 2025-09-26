#include <iostream>
#include <iomanip>

using namespace std;

const double cm_in_m = 100.0;
const double g_in_kg = 1000.0;
const double sec_in_min = 60.0;
const double min_in_hr = 60.0;

double cm_to_m(double cm) {
    return cm / cm_in_m;
}

double m_to_cm(double m) {
    return m * cm_in_m;
}

double g_to_kg(double g) {
    return g / g_in_kg;
}

double kg_to_g(double kg) {
    return kg * g_in_kg;
}

double sec_to_min(double sec) {
    return sec / sec_in_min;
}

double min_to_sec(double min) {
    return min * sec_in_min;
}

double min_to_hr(double min) {
    return min / min_in_hr;
}

double hr_to_min(double hr) {
    return hr * min_in_hr;
}

int main() {
    int opt;
    double val;

    cout << "select the conversion operation:" << endl;
    cout << "1. centimeters to meters" << endl;
    cout << "2. meters to centimeters" << endl;
    cout << "3. grams to kilograms" << endl;
    cout << "4. kilograms to grams" << endl;
    cout << "5. seconds to minutes" << endl;
    cout << "6. minutes to seconds" << endl;
    cout << "7. minutes to hours" << endl;
    cout << "8. hours to minutes" << endl;
    cout << "9. exit" << endl;

    cout << "enter your choice (1 to 9): " << endl;

    if (!(cin >> opt)) {
        cerr << "invalid input. please enter a number." << endl;
        return 1;
    }

    cout << fixed << setprecision(2);

    if (opt == 1) {
        cout << "enter the value in centimeters: " <<endl;
        cin >> val;
        cout << "value in meters: " << cm_to_m(val) << " m" << endl;

    } else if (opt == 2) {
        cout << "enter the value in meters: " <<endl;
        cin >> val;
        cout << "value in centimeters: " << m_to_cm(val) << " cm" << endl;

    } else if (opt == 3) {
        cout << "enter the value in grams: " <<endl;
        cin >> val;
        cout << "value in kilograms: " << g_to_kg(val) << " kg" << endl;

    } else if (opt == 4) {
        cout << "enter the value in kilograms: " << endl;
        cin >> val;
        cout << "value in grams: " << kg_to_g(val) << " g" << endl;

    } else if (opt == 5) {
        cout << "enter the value in seconds: " << endl;
        cin >> val;
        cout << "value in minutes: " << sec_to_min(val) << " min" << endl;

    } else if (opt == 6) {
        cout << "enter the value in minutes: "<< endl;
        cin >> val;
        cout << "value in seconds: " << min_to_sec(val) << " sec" << endl;

    } else if (opt == 7) {
        cout << "enter the value in minutes: "<<endl;
        cin >> val;
        cout << "value in hours: " << min_to_hr(val) << " hr" << endl;

    } else if (opt == 8) {
        cout << "enter the value in hours: " << endl;
        cin >> val;
        cout << "value in minutes: " << hr_to_min(val) << " min" << endl;

    } else if (opt == 9) {
        cout << "thank you for using the converter. goodbye!" << endl;

    } else {
        cout << "invalid choice. please enter a number between 1 and 9." << endl;
    }

    return 0;

}
