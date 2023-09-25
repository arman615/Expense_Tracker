#include "Expense.h"

Expense::Expense(const std::string& category, double amount, const std::string& description, const std::string& dateTime)
    : category(category), amount(amount), description(description), dateTime(dateTime) {}

const std::string& Expense::getCategory() const {
    return category;
}

double Expense::getAmount() const {
    return amount;
}

const std::string& Expense::getDescription() const {
    return description;
}

const std::string& Expense::getDateTime() const {
    return dateTime;
}
