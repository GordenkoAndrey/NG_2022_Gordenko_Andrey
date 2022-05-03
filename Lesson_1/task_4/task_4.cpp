#include <iostream>

using namespace std;

int main()
{
    int Motherboard = 0;
    int Videocard = 0;
    int CPU = 0;
    double Discount = 0;
    
    cout << "Motherboard_price: ";
    cin >> Motherboard;
    cout << "Videocard_price: ";
    cin >> Videocard;
    cout << "CPU_price: ";
    cin >> CPU;
    cout << "Discount: ";
    cin >> Discount;

    cout << "Your PC will cost: " << (Motherboard + Videocard + CPU) - ((Discount / 100) * (Motherboard + Videocard + CPU)) << endl;
}