#include<iostream>
using namespace std;

void open_the_fridge() {
    // add code here
   // user A
   std::cout << "感谢大家-open-hhh" << std::endl;
}
void put_the_elephant_in() {
    // add code here
    // user B
    std::cout << "感谢大家-put" << std::endl;
}

void close_the_fridge() {
    // add code here
    // user B
    std::cout << "感谢大家-close" << std::endl;
}

void warning() {
    cout << "this function is not implemented yet!" << endl;
}

void put_the_elephant_in_the_fridge() {
    warning();
    // open_the_fridge();
    // put_the_elephant_in();
    // close_the_fridge();
}

int main() {
    put_the_elephant_in_the_fridge();
    return 0;
}
