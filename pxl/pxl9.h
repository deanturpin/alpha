// Extended version of pxl8 using tput/ncurses
// Just include this header - all methods are inline

#ifndef PXL_PXL9_H
#define PXL_PXL9_H

#include "pxl.h"

namespace pxl
{
	// using namespace std;

	class pxl9 : public pxl8
	{
		public:

			// Constructor
			pxl9()
			{
				cout << "pxl9 ctor" << endl;
				// clear_screen();
			}

			// Destructor
			~pxl9()
			{
				cout << "pxl9 dtor" << endl;
			}

			// Move to the top of the screen
			void top()
			{
				system("tput cup 0 0");

				// system("tput ed");
				// tput cols
				// tput lines
				// clear points without resetting range
			}


			/*
		private:

			// Print all points
			void dump()
			{
				for (const auto &line:points)
					for (const auto &p:line.second)
						cout << line.first << ", " << p << endl;
			}

			// Clear the terminal
			void clear_screen()
			{
				system("clear");
			}
			*/
	};
}

#endif
