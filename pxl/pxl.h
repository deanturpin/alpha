#ifndef PXL_PXL8_H
#define PXL_PXL8_H

#include <curses.h>

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
			}

			// Destructor
			~pxl8() { endwin(); }

			void set(const int x, const int y) const
			{
				move(y, x);
				addstr(".");
			}

			void render() const { refresh(); }
			void clear() const { erase(); }
			int width() const { return COLS; }
			int height() const { return LINES; }
	};
}

#endif
