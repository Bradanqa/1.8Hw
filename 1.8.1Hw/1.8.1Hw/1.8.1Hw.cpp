#include <iostream>

int function(std::string str, int forbidden_length) {

   if (str.length() != forbidden_length)
      return str.length();
   else 
      throw std::runtime_error("Вы ввели слово запретной длины! До свидания");

}

int main()
{
   int lenght = 0;
   std::string userString;

   setlocale(LC_ALL, "Russian");

   std::cout << "Введите запретную длину: ";
   std::cin >> lenght;

   while (1) {
      try {
         std::cout << "Введите слово: ";
         std::cin >> userString;

         std::cout << "Длина слова " << "\"" << userString << "\"" << " равна " << function(userString, lenght) << std::endl;
      }
      catch (const std::runtime_error& e) {
         std::cout << e.what() << std::endl;
         return 0;
      }
   }
}
