#ifndef PXL_PXL9_H
#define PXL_PXL9_H

#include <curses.h>

// Dev only - sleep
#include <unistd.h>

namespace pxl
{
	class pxl8
	{
		public:

			// Constructor
			pxl8()
			{
				// Initialise
				(void) initscr();
				erase();

				// Hide the cursor
				curs_set(0);

				// Print splashscreen
				// move(30, 30);
				// addstr("PXL8");

				render();
			}

			// Destructor
			~pxl8()
			{
				sleep(2);
				endwin();
			}

			void set(const int x, const int y) const
			{
				move(y, x);
				addstr("*");
			}

			void render() const
			{
				refresh();
			}

			void clear() const
			{
				erase();
			}

			/*
			int width() const
			{
				return cols;
			}

			int height() const
			{
				return lines;
			}

		private:

			const int lines = 64;
			const int cols = 166;

			// vector<pair<int, int>> coords;
			*/

			/*
			// Move to the top of the screen
			void top()
			{
				system("tput cup 0 0");

				// system("tput ed");
				// tput cols
				// tput lines
				// clear points without resetting range
			}

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
