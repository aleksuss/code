#ifndef RANGE_H
#define RANGE_H

class Range {
	private:
		int first;
		int last;
		int step;
		int current;

	public:
		Range(int min, int max, int step);

		Range(int max, int step=1);

		void next();

		void previous();

		void rewind();

		int value();

		int begin();

		int end();

		void operator++(int);

		bool operator<(int);

		int operator*();
};

#endif
