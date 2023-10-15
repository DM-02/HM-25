//
//  main.cpp
//  HM-25
//
//  Created by Дмитрий Сергеевич on 12.10.2023.
//

#include <iostream>
#include <string>
#include <algorithm>

//task2

bool isPalindrome(const std::string& word) {
    std::string lowerWord = word;
    std::transform(lowerWord.begin(), lowerWord.end(), lowerWord.begin(), ::tolower);
    
    std::string reversedWord = lowerWord;
    std::reverse(reversedWord.begin(), reversedWord.end());
    
    return lowerWord == reversedWord;
}

//task 3


int countSpecialChars(std::string str1) {
    int count = 0;
    for (int i = 0; i < str1.length(); i++) {
        char c = str1[i];
        if (c == ' ' || c == '.' || c == ',' || c == '!' || c == '?') {
            count++;
        }
    }
    return count;
}

//task 4


std::string findSubstring(const std::string& new_str, char ch) {
    int pos = new_str.find_last_of(ch);
    if (pos != std::string::npos) {
        return new_str.substr(pos);
    }
    return "";
}






int main(int argc, const char * argv[]) {
   //task1
    std::string str;
        char sym;
        std::cout << "Введите строку: ";
        std::getline(std::cin, str);
        std::cout << "Введите символ: ";
        std::cin >> sym;

        int count = 0;
        for (char c : str) {
            if (c == sym) {
                count++;
            }
        }

        std::string newStr(count, sym);
        std::cout << "Новая строка: " << newStr << std::endl;
    
    //task2
    std::string word = "level";
        bool palindrome = isPalindrome(word);
        std::cout << std::boolalpha << palindrome << std::endl; // true
        
        word = "hello";
        palindrome = isPalindrome(word);
        std::cout << std::boolalpha << palindrome << std::endl; // false
        
//task 3
    std::string str1 = "Пример строки, которая содержит пробелы, точки, запятые, восклицательные и вопросительные знаки!";
       int specialCharCount = countSpecialChars(str);

       std::cout << "Количество специальных символов: " << specialCharCount << std::endl;

// task 4
    
    std::string new_str = "Hello, world!";
       char ch = 'o';
       
       std::string result = findSubstring(str, ch);
       
       std::cout << "Result: " << result << std::endl;
       


    
    return 0;
}
