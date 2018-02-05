#include "grabThis.h"
#include <string>
using namespace std;

   int daysInMonth(int a) {
	if (a % 2 != 0 && a <= 7) {
		return 31;
	}
	else if (a % 2 == 0 && a>7) {
		return 31;
	}
	else if(a == 2) {
		return 28;
	}
	else return 30;
}

   string theMonth(int n) {
	  
	   if (n == 1) {
		 return "January ";
	}
	   else if (n == 2) {
		   return "February ";
	   }
	   else if (n == 3) {
		   return "March ";
	   }
	   else if (n == 4) {
		   return "April ";
	   }
	   else if (n == 5) {
		   return "May ";
	   }
	   else if (n == 6) {
		   return "June ";
	   }
	   else if (n == 7) {
		   return"July ";
	   }
	   else if (n == 8) {
		   return "August ";
	   }
	   else if (n == 9) {
		   return "September ";
	   }
	   else if (n == 10) {
		   return "October ";
	   }
	   else if (n == 11) {
		   return "November ";
	   }
	   else return "December ";
	   
   }

 