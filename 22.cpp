#include <iostream>
using namespace std;

// تابع برای محاسبه ارزش افزوده بر اساس منو غذا
void calculateAddedValue(string food) {
    double addedValue = 0;

    // بر اساس نوع غذا، ارزش افزوده محاسبه می‌شود
    if (food == "pizza")
        addedValue = 0.1;
    else if (food == "burger")
        addedValue = 0.15;
    else if (food == "salad")
        addedValue = 0.05;
    else if (food == "pasta")
        addedValue = 0.12;
    else
        cout << "Invalid food item!" << endl;

    // چاپ ارزش افزوده
    cout << "Added value for " << food << " is: " << addedValue * 100 << "%" << endl;
}

int main() {
    string food;

    // دریافت منوی غذا از کاربر
    cout << "Enter the food item: ";
    cin >> food;

    // فراخوانی تابع برای محاسبه ارزش افزوده
    calculateAddedValue(food);

    return 0;
}
