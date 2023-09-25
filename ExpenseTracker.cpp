#include "ExpenseTracker.h"
#include <iostream>
#include <fstream>

void ExpenseTracker::addExpense(const std::string& category, double amount, const std::string& description, const std::string& dateTime) {
    Expense expense(category, amount, description, dateTime);
    expenses.push_back(expense);

    bool categoryFound = false;
    for (const std::string& cat : categories) {
        if (cat == category) {
            categoryFound = true;
            break;
        }
    }
    if (!categoryFound) {
        categories.push_back(category);
    }
}

void ExpenseTracker::printAllExpenses() const {
    // Implement printAllExpenses as before
}

void ExpenseTracker::generateCategorySummaries() const {
    // Implement generateCategorySummaries as before
}

void ExpenseTracker::generateWeeklyReport() const {
    // Implement generateWeeklyReport as before
}

void ExpenseTracker::generateMonthlyReport() const {
    // Implement generateMonthlyReport as before
}

void ExpenseTracker::saveReportsToFile() const {
    // Implement saveReportsToFile as before
}
