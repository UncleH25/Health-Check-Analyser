# 🌡️ Fever & Age Health Checker
A simple C++ console program that checks if a user is a minor or an adult, and whether they have a fever based on their temperature. 

It outputs an appropriate message based on both conditions and handles invalid input safely.

## 📄 Description
This program prompts the user to input their age and body temperature (in Celsius). It then determines:
* Wether the is a minor (under 18)
* Wether the user has a fever (temperature is is greater than or equal to 38.00°C)

Based on the combination of these conditions, the program provides simple health advice. It also includes input validation to ensure age is a positive number and that the user enters valid numeric input.

## 🧾 Example Output
```
Enter your age:
17
Enter your temperature (in Celsius):
38.5
You are a minor and have a fever. Please consult a doctor.
```

Or with invalid input:
```
Enter your age:
abc
Invalid input. Please try again.
```

## 🛠️ Technologies Used
* Language: C++
* IDE Used: Visual Studio (But any IDE will work)

## 📦 How to Run
1. Clone The Repo Using CMD:
```
git clone https://github.com/UncleH25/Health-Check-Analyser.git
cd health_check_analyser
```

3. From a terminal (in the extracted folder), run:
```
g++ -o health_check_analyser main.cpp
./health_check_analyser
```

4. Or, if you're using an IDE like Code::Blocks or Visual Studio, open the file and press **Run** or **Build and Run**.

## 📌 License
This project is open source and free to use under the **MIT License**.
