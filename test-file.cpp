#include <iostream>

class Complex 
{
  public:
    Complex(double r, double i): r(r), i(i) {}
    double get_r(){return r;}
    double get_i(){return i;}
  private:
    double r{}, i{};
};

int main(int argc, char* argv[])
{
  Complex c(2, 3.5);
  Complex* c_ptr = & c;
  std::cout << "c = (" << c_ptr->get_r()
            << ", " << c_ptr->get_i()
            << ")" << std::endl;
}
