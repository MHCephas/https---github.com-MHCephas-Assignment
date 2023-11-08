#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    int timer = 0;  // Initialize the timer to 0 seconds
    while (true) {
    cout << "Traffic Light Simulator \n";

        switch (timer) {
            case 0:  // Red light for 5 seconds
            cout<< "Red Light \n";
            this_thread::sleep_for(chrono::seconds(5));
                timer = 1;
                break;

            case 1:  // Yellow light for 2 seconds
            cout << "Yellow Light\n";
            this_thread::sleep_for(chrono::seconds(2));
                timer = 2;
                break;

            case 2:  // Green light for 5 seconds
            cout << "Green Light\n";
            this_thread::sleep_for(chrono::seconds(5));
                timer = 0;
                break;
        }
    }

    return 0;
}
