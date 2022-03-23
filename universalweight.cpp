#include <iostream>

int main() {
  
 double weight;
 int x;
 
// mercuryweight = 0.38
// venusweight = 0.91
// marsweight = 0.38
//jupiterweight = 2.34
// saturnweight = 1.06
// uranusweight = 0.92
// neptune weight = 1.19

 std::cout << "Please enter your weight:\n"; 
 std::cin >> weight;

 std::cout << "What planet?\n\n";
 std::cout << "1. Mercury   2. Mars     3. Jupiter\n";
 std::cout << "4. Saturn    5. Uranus   6. neptune    7. Venus\n";
 std::cin >> x; 

 if (x == 1) {
   weight = weight * 0.38;
   std::cout << "You select Mercury. You would weigh " << weight << " \n";
   system("pause");
 }
 else if (x == 7) {
   weight = weight * 0.91;
   std::cout << "You selected venus. You would weigh " << weight << " \n";
   system("pause");
 }
 else if (x == 2) {
   weight = weight * 0.38;
   std::cout << "You selected Mars. You would weigh " << weight << " \n";
   system("pause");
 }
 else if (x == 3) {
   weight = weight * 3.34;
   std::cout << "You have selected jupiter. You would weigh " << weight << " \n"; 
   system("pause");
 }
 else if (x == 4) {
   weight = weight * 2.34;
   std::cout << "You have selected Saturn. You would weigh " << weight << " \n";
   system("pause");
 }
 else if (x == 5) {
   weight = weight * 0.92;
   std::cout << "You have selected Uranus. You would weigh " << weight << " \n";
   system("pause");
 }
 else if (x == 6) {
   weight = weight * 1.19;
   std::cout << "You have selected Neptune. You would weigh " << weight << " \n";
   system("pause");
 } 
 else if (x == 8) {
    std::cout << "You have selected secret option 8, Earth! You told me you weigh " << weight << " \n";
    system("pause");
 }

}