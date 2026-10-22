# Polymorphism

This occurs when the same function call behaves differently depending on the object it is called on. For example, consider a shop that accepts different payment methods: Payment is the parent class and stores the general idea of paying.

 Payment has a virtual member function, pay(). MobileMoney and Card both inherit publicly from Payment and each overrides pay() with its own behaviour.
 In the main() function, objects named m and c are created from the mobileMoney and Card classes. A base-class pointer, p, of type Payment* is first made to point to m and then to c. The program calls p->pay() each time.
 The output displays "Paying with Mobile Money." for the first call and "Paying with a Card." for the second. This demonstrates that the function that runs is decided at runtime by the actual object, not by the type of the pointer.
 Conclusion: The program demonstrates runtime polymorphism because the same call, p->pay(), produces different behaviour for different objects through a virtual function.

