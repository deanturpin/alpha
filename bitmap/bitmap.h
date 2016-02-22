#include <iostream>
#include <vector>

namespace asc
{
	using namespace std;

	class bitmap
	{
		public:

			// Methods
			bitmap(const unsigned int w, const unsigned int h);
			~bitmap() { ; }

			void set(const unsigned int x, const unsigned int y);
			void render();

			// Properties
			const unsigned int width;
			const unsigned int height;

		private:

			vector<vector<bool>> bm;
			bitmap();
	};
}
