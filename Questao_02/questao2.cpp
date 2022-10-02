#include <iostream>
#include <string>
#include <algorithm>

// header
std::string ConcatERemove(std::string s, std::string t, int k);
void teste();

int main(int argc, char *argv[]) {
    int k;
    std::string s, t;
    // teste();

    std::cout << "Digite a String s: ";
    std::cin >> s;

    std::cout << "Digite a String t: ";
    std::cin >> t;

    std::cout << "Digite o numero de operacoes: ";
    std::cin >> k;
    std::cout << "Resultado: " << ConcatERemove(s, t, k) << "\n";

    return 0;
}

std::string ConcatERemove(std::string s, std::string t, int k) {
    int totalLength = s.length() + t.length();
    if (totalLength <= k) 
        return "Sim";

    int commonLength = 0;
    for (int i = 0; i <  std::min(s.length(), t.length()); i++) {
        if (s.at(i) != t.at(i)) 
            break;
        commonLength++;
    }  
    int minOperationCount = totalLength - 2*commonLength;

    if(minOperationCount <= k && ((k - minOperationCount) % 2 == 0)) 
        return "Sim";
     
    return "Nao";
}  

void teste() {
    std::cout << "Test Case #1:\n"
              << "Resultado: " << ConcatERemove("blablablabla", "blablabcde", 8) << "\n\n";

    std::cout << "Teste Case #2:\n"
              << "Resultado: " << ConcatERemove("aba", "aba", 7) << "\n\n";

    std::cout << "Teste Case #3:\n"
              << "Resultado: " << ConcatERemove("ashley", "ash", 2) << "\n\n";
}
