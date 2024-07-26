import calendar
import datetime
from expenses import Expense


def main():
    # Take input from user
    expense = get_input()
    expense_file_path = "expenses.csv"
    budget=8000
    print(expense)
    # Save the input into a file
    print()
    save_data_to_file(expense, expense_file_path)
    # Read file and summarize expenses
    print()
    summarize_expenses(expense_file_path, budget)
    print()

def get_input():
    expense_name = input("Enter the name of the expense ")
    expense_amount = float(input("Enter the amount of the expense "))
    expense_categories = [
        "Food",
        "Home",
        "Work",
        "Fun",
        "Misc"
    ]
    while True:
        print("Select the category of the expense: ")
        for i, selec_category in enumerate(expense_categories):
            print(f"{i+1}. {selec_category}")

        selected_index = int(
            input(f"Enter a category number [1-{len(expense_categories)}] : "))-1

        if selected_index in range(len(expense_categories)):
            new_expense = Expense(name=expense_name, amount=expense_amount,
                                  category=expense_categories[selected_index])
            return new_expense
        else:
            print("Invalid category. Try Again")

def save_data_to_file(expense: Expense, expense_file_path):
    print(f"Saving User Expense: {expense} to {expense_file_path}")
    with open(expense_file_path, "a") as f:
        f.write(f"{expense.name},{expense.amount},{expense.category}\n")

def summarize_expenses(expense_file_path, budget):
    print(f"Summarizing User Expense")
    expenses : list[Expense] = []
    with open(expense_file_path, "r") as f:
        lines=f.readlines()
        for line in lines:
            expense_name, expense_amount, expense_category = line.strip().split(",")
            line_expense = Expense(name= expense_name, amount=float(expense_amount), category=expense_category)
            expenses.append(line_expense)
            
    amount_by_category={}
    for expense in expenses:
        key=expense.category
        if key in amount_by_category:
            amount_by_category[key] += expense.amount
        else:
            amount_by_category[key] = expense.amount
    
    print("Expenses By Category 📈:")
    for key,amount in amount_by_category.items():
        print(f"{key} : ${amount:.2f}")
    
    total_spent=sum([x.amount for x in expenses])
    print(f"💵 Total Spent: ${total_spent:.2f}")
    
    remaining_budget = budget - total_spent
    print(f"✅ Budget Remaining: ${remaining_budget:.2f}")
    
    now =datetime.datetime.now() 
    days_in_month = calendar.monthrange(now.year, now.month)[1]
    remaining_days = days_in_month - now.day
    
    daily_budget = remaining_budget / remaining_days
    print(green(f"👉 Budget Per Day: ${daily_budget:.2f}"))
    
def green(text):
    return f"\033[92m{text}\033[0m"

if __name__ == '__main__':
    main()
