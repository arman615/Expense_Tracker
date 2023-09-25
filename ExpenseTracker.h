#ifndef EXPENSETRACKER_H
#define EXPENSETRACKER_H

#include <vector>
#include <string>
#include "Expense.h"

class ExpenseTracker {
private:
    std::vector<Expense> expenses;
    std::vector<std::string> categories;

public:
    void addExpense(const std::string& category, double amount, const std::string& description, const std::string& dateTime);
    void printAllExpenses() const;
    void generateCategorySummaries() const;
    void generateWeeklyReport() const;
    void generateMonthlyReport() const;
    void saveReportsToFile() const;
};

#endif // EXPENSETRACKER_H
