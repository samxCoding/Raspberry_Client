#include <iostream>
#include <cstring>
#include <thread> // Include the thread header for this_thread and sleep_for
#include <chrono> // Include the chrono header for duration

using namespace std;

int main() {
   char process[50];
   cout << "Please enter your process: ";
   cout << "If you have no processes then type none. ";
   cin >> process;

   if (strcmp(process, "None") == 0) {
       cout << "Okay!" << endl;
       cout << "Loading Client";
       // Sleep for 5 seconds
       this_thread::sleep_for(chrono::seconds(5));
       return 0;
   } else {
       cout << "Sorry, your process wasn't able to be found!" << endl;
   }
}