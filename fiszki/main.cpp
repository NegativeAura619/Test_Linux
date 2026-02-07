#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
    std::string english[5] = {"jeden", "dwa", "trzy", "cztery", "piec"};
    std::string dutch[5] = {"one", "two", "three", "four", "five"};
    std::string f;
    bool flag;
    int przegrane = 0;  // licznik przegranych
    int max_przegranych = 3;

    srand(time(NULL));

    std::cout << "Gra trwa do trzech niepoprawnych odpowiedzi." << std::endl;

    while (przegrane < max_przegranych)
    {
        int b = rand() % 5;
        std::cout << "Podaj tlumaczenie slowa " << english[b] << ": ";
        std::cin >> f;

        flag = false;

        for (int i = 0; i < 5; i++)
        {
            if (dutch[i] == f && i == b)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            std::cout << "Zgadles brawo!!!" << std::endl;
        }
        else
        {
            przegrane++;
            std::cout << "Niestety nie zgadles. Liczba niepoprawnych odpowiedzi: " << przegrane << "/" << max_przegranych << std::endl;
        }
    }

    std::cout << "Przegrales 3 razy. Koniec gry." << std::endl;

    return 0;
}
