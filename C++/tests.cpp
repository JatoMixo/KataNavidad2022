#include <stdexcept>
#include </home/jatomixo/Code/Crafters/KataNavidad/C++/main.cpp>

void IS_TRUE(bool condition, std::string exception){
    if (condition) return;
    throw new std::invalid_argument(exception);
}
void IS_FALSE(bool condition, std::string exception){
    IS_TRUE(!condition, exception);;
}
int main() {
    bool grid[1000][1000];
    SetState(0, 0, 999, 999, true, grid);
    return 0;
}