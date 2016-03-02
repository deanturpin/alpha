// Simple ASCII bitmap for rapid prototyping on the command line
// Just include this header - all methods are inline

#ifndef ASC_BITMAP_H
#define ASC_BITMAP_H

#include <iostream>
#include <vector>
#include <limits>
#include <map>

namespace beta
{
	using namespace std;

	class pixl
	{
		public:

			// Constructor
			pixl()
			{
				// Set ranges to min and max
				x_range.first = numeric_limits<int>::max();
				x_range.second = numeric_limits<int>::min();

				y_range.first = numeric_limits<int>::max();
				y_range.second = numeric_limits<int>::min();
			}

			// Destructor
			~pixl() { ; }

			// Set a point
			void set(const int x, const int y)
			{
				// Check ranges
				x_range.first = min(x_range.first, x);
				x_range.second = max(x_range.second, x);

				y_range.first = min(y_range.first, y);
				y_range.second = max(y_range.second, y);

				// Add coordinates
				points[y].push_back(x);
			}

			// Print some properties
			void properties()
			{
				cout << "X " << x_range.first << ", " << x_range.second << endl;
				cout << "Y " << y_range.first << ", " << y_range.second << endl;
			}

			// Print all points
			void dump()
			{
				for (const auto &line:points)
					for (const auto &p:line.second)
						cout << line.first << ", " << p << endl;
			}

			// Render the points
			void render()
			{
				// Extract Y range
				y_range.first = points.cbegin()->first;
				y_range.second = points.crbegin()->first;

				// Create a bar
				string bar(x_range.second - x_range.first + 1, ' ');

				for (auto i = y_range.second; i >= y_range.first; --i)
				{
					// Initialise empty bar
					bar.assign(bar.size(), ' ');

					// Search for elements on current line
					const auto element = points.find(i);

					// Populate and print bar
					if (element != points.cend())
						for (auto &e:element->second)
							bar.at(e - x_range.first) = '*';

					cout << bar << endl;
				}
			}

			// Clear the terminal
			void clear()
			{
				system("clear");
			}

		private:

			// Internal representation of the point space
			// Y followed by a series of Xs
			map<int, vector<int>> points;

			// Ranges
			pair<int, int> x_range;
			pair<int, int> y_range;
	};
}

#endif
