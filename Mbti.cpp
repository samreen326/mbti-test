#include <iostream> 
#include <string>

int main() { int E=0, I=0, S=0, N=0, F=0, T=0, J=0, P=0; int choice;

std::cout << "Welcome to Personality Test\n";

// E vs I
std::cout << "1. Being alone 2. Surrounded by people \n";
std::cin >> choice;
(choice == 1) ? I++ : E++;

// S vs N
std::cout << "1. Facts 2. Ideas \n";
std::cin >> choice;
(choice == 1) ? S++ : N++;

// T vs F
std::cout << "1. Logic 2. Emotions \n";
std::cin >> choice;
(choice == 1) ? T++ : F++;

// J vs P
std::cout << "1. Plan 2. Spontaneous \n";
std::cin >> choice;
(choice == 1) ? J++ : P++;

std::string ans = "";
ans += (E > I) ? "E" : "I";
ans += (S > N) ? "S" : "N";
ans += (T > F) ? "T" : "F";
ans += (J > P) ? "J" : "P";

std::cout << "Your type: " << ans << std::endl;

return 0;
