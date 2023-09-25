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
    std::cout << "Expense List:\n";
    for (const Expense& expense : expenses) {
        std::cout << "Category: " << expense.getCategory() << std::endl;
        std::cout << "Amount: $" << expense.getAmount() << std::endl;
        std::cout << "Description: " << expense.getDescription() << std::endl;
        std::cout << "Date/Time: " << expense.getDateTime() << std::endl;
        std::cout << std::endl;
    }
}

void ExpenseTracker::generateCategorySummaries() const {
    std::cout << "Category Summaries:\n";
    for (const std::string& category : categories) {
        double totalAmount = 0.0;
        for (const Expense& expense : expenses) {
            if (expense.getCategory() == category) {
                totalAmount += expense.getAmount();
            }
        }
        std::cout << "Category: " << category << std::endl;
        std::cout << "Total Amount: $" << totalAmount << std::endl;
        std::cout << std::endl;
    }
}

void ExpenseTracker::generateWeeklyReport() const {
    std::cout << "Weekly Report:\n";
    std::cout << "=========================\n";
    for (const Expense& expense : expenses) {
        std::cout << "Category: " << expense.getCategory() << std::endl;
        std::cout << "Amount: $" << expense.getAmount() << std::endl;
        std::cout << "Description: " << expense.getDescription() << std::endl;
        std::cout << "Date/Time: " << expense.getDateTime() << std::endl;
        std::cout << std::endl;
    }
}

void ExpenseTracker::generateMonthlyReport() const {
    std::cout << "Monthly Report:\n";
    std::cout << "=========================\n";
    for (const Expense& expense : expenses) {
        std::cout << "Category: " << expense.getCategory() << std::endl;
        std::cout << "Amount: $" << expense.getAmount() << std::endl;
        std::cout << "Description: " << expense.getDescription() << std::endl;
        std::cout << "Date/Time: " << expense.getDateTime() << std::endl;
        std::cout << std::endl;
    }
}

void ExpenseTracker::saveReportsToFile() const {
    std::ofstream file("expense_reports.txt");
    if (file.is_open()) {
        file << "Weekly Report:\n";
        file << "=========================\n";
        for (const Expense& expense : expenses) {
            file << "Category: " << expense.getCategory() << std::endl;
            file << "Amount: $" << expense.getAmount() << std::endl;
            file << "Description: " << expense.getDescription() << std::endl;
            file << "Date/Time: " << expense.getDateTime() << std::endl;
            file << std::endl;
        }
        file.close();
    }
}
