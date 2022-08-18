#include <iostream>

void Re(int x)
{
	if (x > 7) return;
	else {
		
		//중위순회
		Re(x * 2);
		printf("%d", x);
		Re(x * 2 + 1);
		//전위순회
		/*printf("%d", x);
		Re(x * 2);
		Re(x * 2 + 1);*/
		//후위순회
		/*Re(x * 2);
		Re(x * 2 + 1);
		printf("%d", x);*/
	}
}


int main()
{
	Re(1);
}