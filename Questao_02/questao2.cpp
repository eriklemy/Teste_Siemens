#include <iostream>
#include <string>
#include <algorithm>

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

int main(int argc, char *argv[]) {
    int k;
    std::string s, t;
    
    std::cout << "Digite a String s: ";
    std::cin >> s;

    std::cout << "Digite a String t: ";
    std::cin >> t;

    std::cout << "Digite o numero de movimentos: ";
    std::cin >> k;
    std::cout << "Resultado: " << ConcatERemove(s, t, k) << "\n";

    return 0;
}
