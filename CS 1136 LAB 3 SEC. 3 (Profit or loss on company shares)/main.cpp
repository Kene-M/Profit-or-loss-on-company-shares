// Program that calculates and displays
// profit or loss based on company shares.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare some variables to be used for the program.
    const double COMMISSION_PERCENTAGE = 0.035 ;
    double purchasePrice , salePrice ;
    string companyName ;
    int shares_of_stock ;


    // Get the information from the user.
    cout << "Enter the name of the company " ;
    getline( cin , companyName ) ;

    cout << "Enter shares of stock " ;
    cin >> shares_of_stock ;

    cout << "Enter purchase price " ;
    cin >> purchasePrice ;

    cout << "Enter sale price " ;
    cin >> salePrice ; cout << endl ;

    // Calculate the total cost.
    double cost_of_stock = shares_of_stock * purchasePrice ;
    double cost_of_p_commission = cost_of_stock * COMMISSION_PERCENTAGE ;
    double totalCost = cost_of_stock + cost_of_p_commission ;

    // Calculate the total income.
    double income_from_stock = shares_of_stock * salePrice ;
    double cost_of_s_commission = income_from_stock * COMMISSION_PERCENTAGE ;
    double totalIncome = income_from_stock - cost_of_s_commission ;

    // Calculate the profit or loss.
    double profit_or_loss = totalIncome - totalCost ;

    // Display the results to the user.
    cout << "Company: " << companyName << endl ;
    cout << "Shares: " << shares_of_stock << endl << endl ;

    cout << setprecision(2) << fixed << showpoint ;
    cout << "Purchase/share: $" << purchasePrice << endl ;
    cout << "Cost of stock: $" << cost_of_stock << endl ;
    cout << "Cost of commission: $" << cost_of_p_commission << endl ;
    cout << "Total cost: $" << totalCost << endl << endl ;

    cout << "Sale/share: $" << salePrice << endl ;
    cout << "Income from stock: $" << income_from_stock << endl ;
    cout << "Cost of commission: $" << cost_of_s_commission << endl ;
    cout << "Total income: $" << totalIncome << endl << endl ;

    cout << "Gain or loss: $" << profit_or_loss ;

    return 0;
}
