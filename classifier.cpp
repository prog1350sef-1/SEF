
#include <stdio.h>

int main()
{
	class Classifier {
		int data;
	public:
		void train() {
			printf("train");
		}
		void predict() {
			printf("predict");
		}
	
	};

	return 0;
}