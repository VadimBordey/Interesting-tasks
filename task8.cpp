#include <iostream>
#include <string>

void edit_text(std::string& text, int n) {
    std::string result = "";
    std::string currentLine = "";
    
    for (char ch : text) {
        if (ch == '\n') {
            if (!currentLine.empty()) {
                result += currentLine + "\n";
                currentLine = "";
            }
            result += "\n";
        } else if (ch == ' ') {
            if (currentLine.length() + 1 > n) {
                result += currentLine + "\n"; 
                currentLine = " ";  
            } else {
                currentLine += " ";
            }
        } else {
            currentLine += ch;
        }
    }

    if (!currentLine.empty()) {
        result += currentLine;
    }
    
    text = result;
}

int main() {
    int n;
    std::cout << "Введіть ширину рядк: ";
    std::cin >> n;
    std::cin.ignore(); 

    std::cout << "Введіть текст (закінчіть введення тексту двома новими рядками):\n";
    std::string text, line;
    while (std::getline(std::cin, line)) {
        if (line.empty()) {
            break;
        }
        text += line + "\n";
    }

    edit_text(text, n);

    std::cout << "\nВідредагований текст:\n";
    std::cout << text;

    return 0;
}
