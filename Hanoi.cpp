//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int hanoi(int n, int from, int by, int to)
//{
//	if (n == 1)
//		cout << from << " " << to << endl;
//	else
//	{
//		hanoi(n - 1, from, to, by);
//		cout << from << " " << to << endl;
//		hanoi(n - 1, by, from, to);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	int k = pow(2, n) - 1;
//	cout << k << endl;
//	hanoi(n, 1, 2, 3);
//}