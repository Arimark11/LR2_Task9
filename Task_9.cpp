#include <iostream>
#include <cmath>

int main(){
    double x = 0,z = 0;
    int N = 0;
    std::cout << " Input f(x) : 1 - 2*x, 2 - x^3, 3 - x/3";
    std::cin >> N;
    std::cout << " Input Z:";
    std::cin >> z;
    std::cout << " Input a";
    double a = 0;
    std::cin >> a;
    std::cout << " Input c ";
    double c = 0;
    std::cin >> a;

    if (z>=0)
        x = 2*z + 1;
    else
        x = log(pow(z,2) - z );
    
    double y = 0;
    switch (N){
        case 1:
        y = pow(sin(2*x), 2) + a * pow(cos( pow(x,3)),5) + c * log(pow(x,2/5));
        std::cout << " Y = " << y;
        break;

        case 2:
        y = pow(sin(pow(x,3)), 2) + a * pow(cos( pow(x,3)),5) + c * log(pow(x,2/5));
        std::cout << " Y = " << y;
        break;

        case 3:
        y = pow(sin((x/3)), 2) + a * pow(cos( pow(x,3)),5) + c * log(pow(x,2/5));
        std::cout << " Y = " << y;
        break;
    }
    return 0;
}