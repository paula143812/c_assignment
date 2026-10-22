# Chained Inheritance

This occurs when a class inherits from another derived class, forming an inheritance chain. For example, consider a vehicle company: Vehicle stores general information about a vehicle.

 Car inherits from Vehicle and adds car information. ElectricCar inherits from Car and adds electric information. The ElectricCar class inherits publicly from Car. It can access the inherited public members from both Car and Vehicle, and it introduces its own data member, battery, and member function, charge().
In the main() function, an object named e is created from the ElectricCar class. The program assigns values to its inherited and locally defined data members (brand, doors and battery), then calls the three member functions startEngine(), showDoors() and charge() to display the information.
 The output displays the vehicle's brand, its number of doors, and its battery size. This demonstrates that the derived class can use accessible members inherited through the entire inheritance chain.
 Conclusion: The program demonstrates multilevel inheritance and code reusability because ElectricCar can use members defined in its parent and grandparent classes without redefining them.

