# 🏦 Banking and Shopping System (C++ Mini Project)

## 📌 Overview
This project is a C++ console-based application that simulates a Banking System integrated with a Shopping Cart System.  
Users can perform banking operations such as deposit, withdrawal, and balance enquiry, and then purchase products using a shopping cart. The total purchase amount is securely deducted from the user’s bank account after password verification.

This project demonstrates Object-Oriented Programming (OOP) concepts in C++.

---

## 🎯 Problem Statement
Design and implement a system where a user:
- Creates a bank account
- Deposits and withdraws money
- Adds products to a shopping cart
- Performs billing where the total cart amount is deducted securely from the bank account

---

## ✨ Features

### 🏦 Bank Module
- Create bank account with customer details  
- Deposit money  
- Withdraw money with sufficient balance check  
- Balance enquiry  
- Password-based authentication  

### 🛒 Shopping Module
- Add items to cart (name, price, quantity)  
- View cart  
- Delete or reduce items from cart  
- Billing system linked with bank account  

### 🔐 Security
- Password verification before billing  
- Prevents deduction if balance is insufficient  

---

## 🏗️ Project Structure

### Bank Class
Data Members:
- Account Number  
- Customer Name  
- Balance  
- Password  
- Email  
- Address (house number, street, city, state, pincode)  

Member Functions:
- menu()  
- deposit()  
- withdraw()  
- balEnq()  
- verifyPassword()  

---

### Shopping Class
Data Members:
- Product array (maximum 20 items)  
- Total items  
- Total amount  

Member Functions:
- menu()  
- addToCart()  
- viewCart()  
- deleteItem()  

---
### Output
Welcome to the Bank & Shopping System

--- Bank Menu ---
1. Deposit
2. Withdraw
3. Balance Enquiry
4. Proceed to Shopping

Enter your choice: 4

--- Shopping Menu ---
1. Add to Cart
2. View Cart
3. Delete Item
4. Billing

Adding item:
Product Name: Shampoo
Price: 200
Quantity: 2
Item added successfully.

Adding item:
Product Name: Soap
Price: 50
Quantity: 5
Item added successfully.

Viewing Cart:
1. Shampoo | Price: 200 | Quantity: 2 | Total: 400
2. Soap    | Price: 50  | Quantity: 5 | Total: 250

Total Amount: 650

Billing...
Enter password: ****

Billing Successful!
Amount Deducted: 650
Remaining Bank Balance: 4350

Cart is now empty.


