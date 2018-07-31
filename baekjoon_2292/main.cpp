#include <iostream>
using namespace std;

int main()
{
	int i1, s = 1, e = 1, i=1;
	int sp = 1, ep = 6;
	cin >> i1;

	while (e < i1) {
		s += sp;		// s, sp 필요 없음
		e += ep;
		sp = 6 * i++;
		ep = 6 * i;
	}
	cout << i;
}