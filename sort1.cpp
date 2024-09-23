#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int z;
        cin >> z;
        a[i] = z;
    }

    for (int i = 1; i < n; i++) {
        if ((i + 1) % 2 == 0) {
            if (a[i] > a[i - 1]) {
                swap(a[i], a[i - 1]);
            }
        }
        else {
            if (a[i] < a[i - 1]) {
                swap(a[i], a[i - 1]);
            }
        }
    }
		for (int i = 0; i < n; i++) {
            cout << "index,number: " << "(" << i << "," << a[i] << ")" << " \n";
	}
}
 
