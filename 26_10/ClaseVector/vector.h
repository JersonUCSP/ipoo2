#include"point.h"

class Vec{
	private:
		Point start, end;
		double distancia();
		void print();
		public:
		Vec (double startx , double starty , double endx , double endy){
			start.x=startx, start.y=starty, end.x=endx, end.y=endy;
		}
};
