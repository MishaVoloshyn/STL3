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
#include <locale> // ��� setlocale

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
        cout << "����:" << endl;
        cout << "1 ��������" << endl;
        cout << "2 �������" << endl;
        cout << "3 �������������" << endl;
        cout << "4 �����" << endl;
        cout << "5 �����" << endl;
        cout << "��������: ";
        cin >> vibor;

        switch (vibor)
        {
        case 1:
            cout << "������� �����: ";
            cin >> word;
            cout << "������� �������: ";
            cin >> translation;
            dictionary[word] = translation;
            cout << "����� ���������." << endl;
            break;
        case 2:
            cout << "������� �����, ������� ������ �������: ";
            cin >> wordToDelete;
            if (dictionary.find(wordToDelete) != dictionary.end()) {
                dictionary.erase(wordToDelete);
                cout << "����� �������." << endl;
            }
            else {
                cout << "����� �� ������� � �������." << endl;
            }
            break;
        case 3:
            cout << "������� �����, ������� ������ ���������������: ";
            cin >> wordToEdit;
            if (dictionary.find(wordToEdit) != dictionary.end()) {
                cout << "������� ����� �������: ";
                cin >> newTranslation;
                dictionary[wordToEdit] = newTranslation;
                cout << "����� ���������������." << endl;
            }
            else {
                cout << "����� �� ������� � �������." << endl;
            }
            break;
        case 4:
            cout << "������� ����� ��� ������: ";
            cin >> wordToSearch;
            if (dictionary.find(wordToSearch) != dictionary.end()) {
                cout << "�������: " << dictionary[wordToSearch] << endl;
            }
            else {
                cout << "����� �� ������� � �������." << endl;
            }
            break;
        case 5:
            proverka = false;
            break;
        default:
            cout << "������: ������������ �����." << endl;
            break;
        }
    } while (proverka != false);

}
