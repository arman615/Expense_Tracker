#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

class Expense {
private:
    std::string category;
    double amount;
    std::string description;
    std::string dateTime;

public:
    Expense(const std::string& category, double amount, const std::string& description, const std::string& dateTime);

    const std::string& getCategory() const;
    double getAmount() const;
    const std::string& getDescription() const;
    const std::string& getDateTime() const;
};

#endif // EXPENSE_H
