/*
#include<iostream>
#include<vector>



int main()
{
    vector<int> vec{ 1,2,3,4,5 };
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }

    vector<int>::iterator ptr;

    for (ptr = vec.begin();ptr!=vec.end(); ptr++)
    {
        cout << *ptr;
    }
}
*/

#include <iostream>
#include <map>
#include <string>
#include <locale> // Для setlocale

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    map<string, string> dictionary;
    string word;
    string translation;
    string wordToEdit;
    string newTranslation;
    string wordToDelete;
    string wordToSearch;
    int vibor;
    bool proverka = true;

  

    do
    {
        cout << "Меню:" << endl;
        cout << "1 Добавить" << endl;
        cout << "2 Удалить" << endl;
        cout << "3 Редактировать" << endl;
        cout << "4 Поиск" << endl;
        cout << "5 Выйти" << endl;
        cout << "Выберите: ";
        cin >> vibor;

        switch (vibor)
        {
        case 1:
            cout << "Введите слово: ";
            cin >> word;
            cout << "Введите перевод: ";
            cin >> translation;
            dictionary[word] = translation;
            cout << "Слово добавлено." << endl;
            break;
        case 2:
            cout << "Введите слово, которое хотите удалить: ";
            cin >> wordToDelete;
            if (dictionary.find(wordToDelete) != dictionary.end()) {
                dictionary.erase(wordToDelete);
                cout << "Слово удалено." << endl;
            }
            else {
                cout << "Слово не найдено в словаре." << endl;
            }
            break;
        case 3:
            cout << "Введите слово, которое хотите отредактировать: ";
            cin >> wordToEdit;
            if (dictionary.find(wordToEdit) != dictionary.end()) {
                cout << "Введите новый перевод: ";
                cin >> newTranslation;
                dictionary[wordToEdit] = newTranslation;
                cout << "Слово отредактировано." << endl;
            }
            else {
                cout << "Слово не найдено в словаре." << endl;
            }
            break;
        case 4:
            cout << "Введите слово для поиска: ";
            cin >> wordToSearch;
            if (dictionary.find(wordToSearch) != dictionary.end()) {
                cout << "Перевод: " << dictionary[wordToSearch] << endl;
            }
            else {
                cout << "Слово не найдено в словаре." << endl;
            }
            break;
        case 5:
            proverka = false;
            break;
        default:
            cout << "Ошибка: Неправильный выбор." << endl;
            break;
        }
    } while (proverka != false);

}
