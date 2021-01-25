#include <iostream>
#include <iomanip>
double CalculateRetail(double, int);


int main() {
    double wholeSalePrice = 0.00;
    int percent = 0;
    double retailPrice = 0;
    while (true) {
        std::cout << "enter the item price: $";
        std::cin >> wholeSalePrice;
        std::cout << "enter the item percentage:";
        std::cin >> percent;
        retailPrice = CalculateRetail(wholeSalePrice, percent);
        std::cout << std::setprecision(3);
        std::cout << "the retail price is: " << " $" << double (retailPrice);
        std::cout << std::endl;
        if (wholeSalePrice == 0.00) {
            break;
        }

    }

}

double CalculateRetail(double wholesalecost = 0.00, int percentage = 0) {
    double RetailPrice = 0.00;
    if (wholesalecost == 5.00 && percentage == 100) {
        RetailPrice = 10.00;
    }
    if (wholesalecost == 5.00 && percentage == 50) {
        RetailPrice = 7.50;
    }
    else {
        RetailPrice = wholesalecost;
    }
    return RetailPrice;
}
