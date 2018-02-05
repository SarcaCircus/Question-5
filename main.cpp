#include <string>
#include <iostream>
#include "grabThis.h"

using namespace std;

int main() {
	
	for (int i =1; i <= 12; i++) 
	{
		string day = "";
		int num = daysInMonth(i);
		string month = theMonth(i);
		int count = 1;
		int x = 0;
		while (count < num+1) {
			
			x++;

				if (x == 1) {
					day = "Monday";
					
				}
				else if (x == 2) {
					day = "Tuesday";
				}
				else if (x == 3) {
					day = "Wednesday";
				}
				else if (x == 4) {
					day = "Thursday";
				}
				else if (x == 5) {
					day = "Friday";
				}
				else if (x == 6) {
					day = "Saturday";
				}
				else if (x == 7) {
					day = "Sunday";
				}
				cout << month << count << ": " << day << endl;
				if (x == 7) {
					x = 0;
				}
				count++;
			
		}
	}
}