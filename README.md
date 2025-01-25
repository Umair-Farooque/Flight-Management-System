# Flight Management System
The Flight Management System is a C++ console-based application that allows users to book flights, view flight details, cancel tickets, and provide feedback. It supports both domestic and international flights with options for economy and business class.

## Features
### View Flights and Book Tickets

+Choose between international and domestic flights.
+View available flights, schedules, and prices.
+Book tickets by entering personal and contact details.
### Flight Details
+Retrieve specific flight details using a unique flight code.
### Cancel Tickets
+Cancel a booked flight by entering the flight code.
### Feedback
+Provide feedback to the airline.
## Installation
+Ensure you have a C++ compiler installed on your system.
+Clone or download this repository.
+Compile the Flight_Management_System.cpp file using your preferred compiler.
'''
g++ Flight_Management_System.cpp -o FlightManagementSystem

'''
+Run the program:
'''
./FlightManagementSystem
'''

Usage
+Launch the program and follow the menu prompts.
+Select options by entering the corresponding number.
### For flight bookings:
+Enter personal details (first name, last name, ID card number, and mobile number).
+Select flight, class type, and number of tickets.
+For flight details or cancellation, input the flight code provided during booking.
## Supported Flights
### International
+Lahore to Sydney, Melbourne, South Wales
+Islamabad to Toronto, Chicago
+Karachi to Los Angeles, New York
+Multan to London, Hawaii, Florida
### Domestic
+Lahore to Karachi, Multan, Bahawalpur
+Islamabad to Karachi, Lahore
+Karachi to Islamabad, Lahore
+Multan to Karachi, Lahore, Islamabad
+Limitations
### Basic error handling.
+Flight codes are hardcoded (12345).
+Console-based interface with no graphical support.
### Future Enhancements
+Dynamic flight data management.
+Improved error handling and input validation.
+Integration with databases for storing booking information.
+Adding graphical user interface (GUI).
## Author
Created by Muhammad Umair Farooq.
