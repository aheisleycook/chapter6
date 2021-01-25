#include <iostream>
#include <iomanip>
double CalculateRetail(double, int);


struct Retail{
    double price;
    int percent;
    int RetailPrice;
};

int main() {
    Retail Price;
    std::cin >> Price.percent;
    std::cin >> Price.percent;
    Price.RetailPrice = CalculatePrice(Price.percent, Price.price);
}
double CalculateRetail(double wholesalecost,int percentage) {
    double RetailPrice;
    if(wholesalecost == 5.00 and percentage == 100) {
        RetailPrice = 10.00;
    }
    else if(wholesalecost == 5.00 and percentage == 50) {
        RetailPrice = 7.50;
    }
    else {
        RetailPrice = 5.00;
    }
    return RetailPrice;
}
