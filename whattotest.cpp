#include <vector>
using namespace std;

int sumatoria(vector<int> v) {
    int suma = 0;
    for (int i = 0; i < v.size(); ++i) {
        suma += v[i];
    }
    return suma;
}
