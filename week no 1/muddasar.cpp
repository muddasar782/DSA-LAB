/*#include<iostream>
using namespace std;

template <class T>
T GetMax(T a, T b) {
	T result;
	result = (a > b) ? a : b;
	return (result);
}
int main() {
	int i = 5, j = 6, k;
	long l = 10, m = 5, n;
	k = GetMax<int>(i, j);
	n = GetMax<long>(l, m);
	cout << k << endl;
	cout << n << endl;
	return 0;
} */
/*#include<iostream>
using namespace std;

template <class T>
class mypair {
	T a, b;
public:
	mypair(T first, T second) {
		a = first;
		b = second;
	}
	T getmin();
};

template <class T>
T mypair<T>::getmin()
{
	T retval;
	retval = a < b ? a : b;
	return retval;
}
int main()
{
	mypair <int> myobject(100, 75);
	cout << myobject.getmin();
	return 0;
} */
/*#include<iostream>
using namespace std;
template <class T, int N>
class mysequence {
	T memblock[N];
public:
	void setmember(int x, T value);
	T getmember(int x);
};
template <class T, int N>
void mysequence<T, N>::setmember(int x, T value)
{
	memblock[x] = value;
}
template <class T, int N>
T mysequence<T, N>::getmember(int x)
{
	return memblock[x];

}
int main() {
	mysequence <int, 5> myints;
	mysequence <double, 5> myfloats;

	myints.setmember(0, 100);
	myfloats.setmember(3, 3, 1416);

	cout << myints.getmember(0) << '\n';
	cout << myfloats.getmember(3) << '\n';
	return 0;
} */