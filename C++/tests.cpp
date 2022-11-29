#include <stdexcept>
#include <D:/Miguel/Programas/KataNavidad2022/C++/main.cpp>

void IS_TRUE(bool condition, std::string exception){
    if (condition) return;
    throw new std::invalid_argument(exception);
}
void IS_FALSE(bool condition, std::string exception){
    IS_TRUE(!condition, exception);
}
int main() {
    bool grid[1000][1000];
    ChangeState(0, 0, 999, 999, grid, true);
    IS_TRUE(*grid[5, 5] == true, "didn't set the state correctly.");
    IS_TRUE(countLights(grid, true) == 1000000, "Didn't count lights properly. Lights: ");
    return 0;
}