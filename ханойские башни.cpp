#include<iostream>
using namespace std;
void hanoi_towers(int q, int from, int to, int bp); 
int main() 
{
	int q, f, t, bp;
	cin >> q >> f >> t >> bp;
	hanoi_towers(q, f, t, bp);
	return 0;
}
void hanoi_towers(int q, int from, int to, int bp) {
	if (q != 0)
	{
		hanoi_towers(q - 1, from, bp, to);
		cout << "{0}->{1}" << from << " " << to;
		hanoi_towers(q - 1, bp, to, from);
	}
}
