#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

// header
void testCases();
std::string ConcatERemove(std::string s, std::string t, int k);
bool isLowerCase(std::string &str);

int main(int argc, char *argv[]) {
    int k;
    std::string s, t;
    // testCases();
    std::cout << "Digite a String s: ";
    std::cin >> s;
    std::cout << "Digite a String t: ";
    std::cin >> t;

    // limitações 
    // a) 1 <= |s| <= 100 b) 1 <= |t| <= 100 c) 1 <= k <= 100
    // d) s e t deve ser letra miniscula 
    assert(s.length() <= 100 && t.length() <= 100);
    if (!isLowerCase(s) || !isLowerCase(t)) {
        std::cerr << "AS STRINGS DEVEM SER EM LETRA MINUSCULA!!\n";
        return 1;
    }

    std::cout << "Digite o numero de operacoes: ";
    std::cin >> k;
    assert(k >= 1 && k <= 100);
    if (k >= 1 && k <= 100) 
        std::cout << "Resultado: " << ConcatERemove(s, t, k) << std::endl;

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

bool isLowerCase(std::string &str) {
    std::string criteria("abcdefghijklmnopqrstuvwxyz0123456789");
    return (std::string::npos == str.find_first_not_of(criteria));
}  

void testCases() {
    std::cout << "Test Case #1:\n"
              << "s: blablablabla\nt: blablabcde\nk: 8\n"
              << "Esperado: SIM -> Resultado: " << ConcatERemove("blablablabla", "blablabcde", 8) << "\n\n";

    std::cout << "Teste Case #2:\n"
              << "s: aba\nt: aba\nk: 7\n"
              << "Esperado: SIM -> Resultado: " << ConcatERemove("aba", "aba", 7) << "\n\n";

    std::cout << "Teste Case #3:\n"
              << "s: ashley\nt: ash\nk: 2\n"
              << "Esperado: NÃO -> Resultado: " << ConcatERemove("ashley", "ash", 2) << "\n\n";
}
