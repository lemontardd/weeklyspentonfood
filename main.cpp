#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
   string day[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
   double temp, total = 0;

   cout << "Enter money spent on eating out per day. " << endl;
   cout << "----------------------------------------" << endl;

   for (int i = 0; i != 7; i++) {
         cout << day[i] << ":" << setw(15 - day[i].length()) << " $";
         cin >> temp;
         total += temp;
   }

   cout << "----------------------------------------" << endl;
   cout << "Weekly total:  $" << total << endl;

   return 0;
}
