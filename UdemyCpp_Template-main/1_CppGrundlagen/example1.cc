#include <iostream>

int main()
{
    int x;
    int y;
    std::cout << "Länge eingeben: ";
    std::cin >> x;
    std::cout << "Breite eingeben: ";
    std::cin >> y;

    int ergebnis = y * x;

    std::cout << "Länge ist: " << x << "\nBreite ist: " << y << "\nFläche ist: " << ergebnis << std::endl;

    return 0;
}
