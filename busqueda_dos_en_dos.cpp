#include <iostream>
#include <vector>
#include <algorithm>

int busqueda_dos_en_dos( const std::vector<int>& lista , int n,
int objetivo ) {
    int i=0;
    while (i < n && lista[i] < objetivo) {
        i += 2;
    }
    i = i - 1;
    for (int j = std::max(0,i);j <= std::min(i + 1, n - 1); j++) {
        if (lista[j] == objetivo) {
            return j;
        }
    }

    return -1;
}

int main() {
    int n, objetivo;

    if (!(std::cin >> n)) return 0;

    std::vector<int> lista(n);
    for (int i = 0; i < n; i++) {
        std::cin >> lista[i];
    }

    std::cin >> objetivo;

    int resultado = busqueda_dos_en_dos(lista, n, objetivo);

    std::cout << resultado << std::endl;

    return 0;
}