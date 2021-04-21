
#include <stdio.h>

int main()
{
	class Classifier {
		int data;
	public:
		void train() {
			printf("train");
			printf(“The first feature is added”);
		}
		void predict() {
			printf("predict");
		}
	
	};

	return 0;
}