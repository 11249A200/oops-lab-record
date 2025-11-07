#include <iostream> 
#include <string>
 using namespace std; 
  class Laptop 
 { private: 
   string brand; 
   string processor;
    int ram;
     public:
       Laptop(string b, string p, int r)
        { 
         brand = b; 
         processor = p;
          ram = r;
          } 
          // Display function 
          void display()
           { 
             cout << "Brand: "
             << brand << endl;
              cout << "Processor: " 
              << processor << endl;
               cout << "RAM: "
                << ram << " GB" 
                << endl << endl;
                } 
               };
                int main()
                 {
                   // Creating two objects with different details
                    Laptop  laptop1("Dell", "Intel i7", 16);
                     Laptop  laptop2("HP", "AMD Ryzen 5", 8);
                      // Display the details
                       cout << "Laptop 1 Details:" << endl; 
                       laptop1.display(); 
                       cout << "Laptop 2 Details:" << endl;
                        laptop2.display();
                         return 0; 
                        }
