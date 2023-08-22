// Nick_Ostrovsky_HW_3_2_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
struct home_adress
{
    std::string _City;
    std::string _Street;
    int _HouseNum;
    int _FlatNum;
    int _ZipCode;

};
void struct_print(home_adress& home);
int main()
{
    setlocale(LC_ALL, "Russian");
    // Русский в консоли у меня все равно не появился ((((
    std::cout << "\n";
    home_adress home;
    home._City = "Екатиринодар";
    home._Street = "Мясницкий ряд";
    home._HouseNum = 21;
    home._FlatNum = 88;
    home._ZipCode = 105023;
    struct_print(home);

    home_adress home1;
    home1._City = "Томск";
    home1._Street = "Хлебный ряд";
    home1._HouseNum = 28;
    home1._FlatNum = 808;
    home1._ZipCode = 905723;
    struct_print(home1);

}
void struct_print(home_adress& home)
{
    std::cout << "\n\t" << home._City << "\n\t" << home._Street << "\n\t" << home._HouseNum << "\n\t" << home._FlatNum << "\n\t" << home._ZipCode << std::endl;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
