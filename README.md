# 🏠 Real Estate C Project

This C program processes a CSV dataset containing real estate listings and offers core utility functions such as **Display**, **Search**, **Sort**, and **Export**.

---

## 📁 Project Overview

The dataset used includes columns like:

- Location
- City
- Price
- Rooms
- Bathroom
- Carpark
- Type
- Furnish

---

## 🚀 Features

### 1. Display Data
- Show a specified number of rows from the dataset.
- Handles input validation for row limits.

### 2. Search Data
- Search by **Location**, **City**, **Type**, **Furnish**, **Price**, **Rooms**, **Bathrooms**, or **Carpark**.
- Supports multiple matching results.
- Displays formatted results in tabular style.

### 3. Sort Data
- Sort by any column.
- Supports **ascending (asc)** and **descending (dsc)** order.
- Displays top 10 sorted results for preview.

### 4. Export Data
- Save filtered or sorted results to a `.csv` file.
- User-defined output file name.

---

## 🧱 Technical Details

- Language: **C**
- Input: CSV data 
- File Operations: Reads and writes `.csv` files
- UI: CLI-based menu interaction using `scanf`, `printf`, and `system("cls")`

---

## 📸 Example Output

```txt
What do you want to do?
1. Display data
2. Search Data
3. Sort Data
4. Export Data
5. Exit
Your choice: 2
Choose column: Location
What data do you want to find? Jinjang

Data found. Detail of data:
Location            City            Price     Rooms  Bathroom  Carpark  Type       Furnish
Jinjang             Kuala-Lumpur    56000     3      2         0        Built-up   Partly
Jinjang             Kuala-Lumpur    72000     5      2         0        Land-area  Unfurnished
