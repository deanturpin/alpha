#ifndef PXL_PXL8_H
#define PXL_PXL8_H

#include <curses.h>
#include <signal.h>
#include <unistd.h>

namespace
{
	void sig_handler(int signo)
	{
		// Tidy up ncurses on a ctrl-c
		if (signo == SIGINT)
		{
			endwin();
			_exit(0);
		}
	}
}

namespace pxl
{

	class pxl8
	{
		public:

			// Constructor
			pxl8()
			{
				// Catch ctrl-c
				signal(SIGINT, sig_handler);

				// Initialise
				(void) initscr();
				erase();

				// Hide the cursor
				curs_set(0);
			}

			// Destructor
			~pxl8() { endwin(); }

			void set(const int x, const int y) const { mvaddstr(y, x, ">"); }
			void render() const { refresh(); }
			void clear() const { erase(); }
			int width() const { return COLS; }
			int height() const { return LINES; }
	};
}

#endif
