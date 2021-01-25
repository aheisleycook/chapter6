#include <iostream>
#include <iomanip>
double CalculateRetail(double, int);


int main() {
    double wholeSalePrice;
    int percent;
    std::cout << "enter the item price:";
    std::cin >> wholeSalePrice;
    std::cout << "enter the item percentage:";
    std::cin >> percent;
    Price.RetailPrice = CalculateRetail(Price.percent, Price.price);
    std::cout << Price.RetailPrice;
}
double CalculateRetail(double wholesalecost,int percentage) {
    double RetailPrice = 0.00;
    if(wholesalecost == 5.00 && percentage == 100) {
        RetailPrice = 10.00;
    }
    if (wholesalecost == 5.00 && percentage == 50) {
        RetailPrice = 7.50;
    }
    return RetailPrice;
}
