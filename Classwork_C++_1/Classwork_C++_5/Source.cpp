#include <iostream>
using namespace std;

/*
��������� ���������:
 A == B   - A ����� B
 A != B   - A �� ����� B
 A >  B   - A ������ B
 A >= B   - A ������ ��� ����� B; A �� ������ B
 A <  B   - A ������ B
 A <= B   - A ������ ��� ����� B; A �� ������ B
*/

/*
������ ����� "09-10. ���������� ��������� � ��������� ���������"

1. *������������ ������ �����.
����������, �������� �� ��� ������.

2. *������������ ������ ��� �����. ������� �� ����� ������� �� ���� �����.
***������ ������ ��� ������������� ���������.

3. *������������ ������ � ���������� 2 ����� �����. �������� �� ����� ���������� �� ���.
***������ ������ ��� ������������� ���������.

5. *������������ ������ �����.
 ����������, ������������� ��� �����,������������� ��� ����� ����.
*/

int main()
{
    setlocale(LC_ALL, "Rus");
    int Number;
    cout << "������� ����� �����: ";
    cin >> Number;
    // 1 �������
    int ostatok = Number % 2;
    if (ostatok == 0) {
        cout << "����� ������" << endl;
    }
    else {
        cout << "����� ��������" << endl;
    }
    // 2 �������
    if (Number % 2 == 0) {
        cout << "����� ������" << endl;
    }
    else {
        cout << "����� ��������" << endl;
    }
    // 3 ������� - � �������������� ����������� (���������)
    //  ���� ������, bool result;
    //bool result = Number % 2 == 0;
    bool result = (Number % 2 == 0); // result = true/false
    if (result == true) { // if (result)
        cout << "����� ������" << endl;
    }
    else {
        cout << "����� ��������" << endl;
    }

    cin.get(); cin.get();
}


#include <iostream>
using namespace std;

/*
��������� ���������:
 A == B   - A ����� B
 A != B   - A �� ����� B
 A >  B   - A ������ B
 A >= B   - A ������ ��� ����� B; A �� ������ B
 A <  B   - A ������ B
 A <= B   - A ������ ��� ����� B; A �� ������ B
*/

/*
������ ����� "09-10. ���������� ��������� � ��������� ���������"

1. *������������ ������ �����.
����������, �������� �� ��� ������.

2. *������������ ������ ��� �����. ������� �� ����� ������� �� ���� �����.
***������ ������ ��� ������������� ���������.

3. *������������ ������ � ���������� 2 ����� �����. �������� �� ����� ���������� �� ���.
***������ ������ ��� ������������� ���������.

5. *������������ ������ �����.
 ����������, ������������� ��� �����,������������� ��� ����� ����.
*/

/*
5. *������������ ������ �����.
 ����������, ������������� ��� �����,�������������
 ��� ����� ����.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int Number;
    cout << "������� ����� �����: ";
    cin >> Number;
    if (Number > 0)
    { // ���� ���� ��� �������: ���� Number ������ ����
        cout << "����� �������������\n";
    }
    else if (Number < 0)
    { // ���� ���� ��� �������: ���� Number �� ������ ����
      // ���� Number ������ ����
        cout << "����� �������������\n";
    }
    else if (Number == 0) // ���� Number ����� 0
    {
        cout << "����� ����� ����" << endl;
    }
    else {
        cout << "���� ��� ������� �� ����������!!!" << endl;
    }

    cin.get(); cin.get();
}


#include <iostream>
using namespace std;

/*
��������� ���������:
 A == B   - A ����� B
 A != B   - A �� ����� B
 A >  B   - A ������ B
 A >= B   - A ������ ��� ����� B; A �� ������ B
 A <  B   - A ������ B
 A <= B   - A ������ ��� ����� B; A �� ������ B
*/

/*
������ ����� "09-10. ���������� ��������� � ��������� ���������"

4. *������������ ������ � ���������� ���� ����� �����.
���� ��� ����� ����� � ��������� �� 1 �� 20 - �������
�� ����� 1, ����� ������� 0.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    cout << "Enter number: ";
    cin >> a;
    if (a >= 1 && a <= 20) {
        cout << "����� � ��������� [1;20]\n";
    }
    else {
        cout << "����� �� ��������� ��������� [1;20]\n";
    }
    // 2 ������� - �� ������ �������
    if (a >= 1) {
        if (a <= 20) {
            cout << "����� � ��������� [1;20]\n";
        }
        else {
            cout << "����� �� ��������� ��������� [1;20]\n";
        }
    }
    else {
        cout << "����� �� ��������� ��������� [1;20]\n";
    }

    cin.get(); cin.get();
}


#include <iostream>
using namespace std;

/*
��������� ���������:
 A == B   - A ����� B
 A != B   - A �� ����� B
 A >  B   - A ������ B
 A >= B   - A ������ ��� ����� B; A �� ������ B
 A <  B   - A ������ B
 A <= B   - A ������ ��� ����� B; A �� ������ B
*/

/*
������ ����� "09-10. ���������� ��������� � ��������� ���������"

4. *������������ ������ � ���������� ���� ����� �����.
���� ��� ����� ����� � ��������� �� 1 �� 20 - �������
�� ����� 1, ����� ������� 0.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    cout << "Enter number: ";
    cin >> a;
    if (a >= 1 && a <= 20) {
        cout << "����� � ��������� [1;20]\n";
    }
    else {
        cout << "����� �� ��������� ��������� [1;20]\n";
    }
    // 2 ������� - �� ������ �������
    if (a >= 1) {
        if (a <= 20) {
            cout << "����� � ��������� [1;20]\n";
        }
        else {
            cout << "����� �� ��������� ��������� [1;20]\n";
        }
    }
    else {
        cout << "����� �� ��������� ��������� [1;20]\n";
    }

    cin.get(); cin.get();
}


#include <iostream>
using namespace std;

/*
��������� ���������:
 A == B   - A ����� B
 A != B   - A �� ����� B
 A >  B   - A ������ B
 A >= B   - A ������ ��� ����� B; A �� ������ B
 A <  B   - A ������ B
 A <= B   - A ������ ��� ����� B; A �� ������ B
*/

/*
������ ����� "09-10. ���������� ��������� � ��������� ���������"

6.*������������ ������ � ���������� ��� ����� �� ������ ����.
���������� ����� �� ��� ����� ���������� �����.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "������� ��� �����: ";
    cin >> a >> b;
    if (a != 0 && b != 0) {
        // ����� a � b �� ����� ����
        if (a > 0 && b > 0) {
            cout << "����� ����������" << endl;
        }
        if (a < 0 && b < 0) {
            cout << "����� ����������" << endl;
        }
        if (a > 0 && b < 0) {
            cout << "����� ������" << endl;
        }
        if (a < 0 && b >0) {
            cout << "����� ������" << endl;
        }
    }
    else {
        cout << "������: ���� ��� ��� ����� �������\n";
    }


    cin.get(); cin.get();
}


#include <iostream>
using namespace std;

/*
��������� ���������:
 A == B   - A ����� B
 A != B   - A �� ����� B
 A >  B   - A ������ B
 A >= B   - A ������ ��� ����� B; A �� ������ B
 A <  B   - A ������ B
 A <= B   - A ������ ��� ����� B; A �� ������ B
*/

/*
������ ����� "09-10. ���������� ��������� � ��������� ���������"

6.*������������ ������ � ���������� ��� ����� �� ������ ����.
���������� ����� �� ��� ����� ���������� �����.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "������� ��� �����: ";
    cin >> a >> b;
    if (a != 0 && b != 0) { // �������� �� ���� � a � b
      // ����� a � b �� ����� ����
        if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
            cout << "����� ����������" << endl;
        }
        if ((a > 0 && b < 0) || (a < 0 && b > 0)) {
            cout << "����� ������" << endl;
        }
        // 2 �������
        if (a * b > 0) {
            cout << "����� ����������" << endl;
        }
        else {
            cout << "����� ������" << endl;
        }
    }
    else {
        cout << "������: ���� ��� ��� ����� �������\n";
    }


    cin.get(); cin.get();
}


#include <iostream>
using namespace std;

/*
��������� ���������:
 A == B   - A ����� B
 A != B   - A �� ����� B
 A >  B   - A ������ B
 A >= B   - A ������ ��� ����� B; A �� ������ B
 A <  B   - A ������ B
 A <= B   - A ������ ��� ����� B; A �� ������ B
*/

/*
������ ����� "09-10. ���������� ��������� � ��������� ���������"

13. **�������� ���������-�����������.
������������ ������ ��� ����� � �������� ��������������
��������. ������� �� ����� ���������.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    char oper; // ������ ��������������� ���������: +-*/%
    cout << "������� ������ �����: ";
    cin >> a;
    cout << "������� ������ �����: ";
    cin >> b;
    cout << "������� ��������(+-*/%): ";
    cin >> oper; // ������ ����. �������� � ���� �������
    if (oper == '+') {
        cout << "��������� = " << a + b << endl;
    }
    else if (oper == '-') {
        cout << "��������� = " << a - b << endl;
    }
    else if (oper == '*') {
        cout << "��������� = " << a * b << endl;
    }
    else if (oper == '/') {
        cout << "��������� = " << a / b << endl;
    }
    else if (oper == '%') {
        cout << "��������� = " << a % b << endl;
    }
    else {
        cout << "������: �������� ����. ��������!" << endl;
    }

    cin.get(); cin.get();
}


#include <iostream>
using namespace std;

/*
��������� ���������:
 A == B   - A ����� B
 A != B   - A �� ����� B
 A >  B   - A ������ B
 A >= B   - A ������ ��� ����� B; A �� ������ B
 A <  B   - A ������ B
 A <= B   - A ������ ��� ����� B; A �� ������ B
*/

/*
������ ����� "09-10. ���������� ��������� � ��������� ���������"

13. **�������� ���������-�����������.
������������ ������ ��� ����� � �������� ��������������
��������. ������� �� ����� ���������.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    char oper; // ������ ��������������� ���������: +-*/%
    cout << "������� ���������: ";
    cin >> a >> oper >> b; // 5 + 3 <ENTER>
    // 5 + 3 = 8
    cout << a << " " << oper << " " << b << " = ";
    if (oper == '+') { cout << a + b << endl; }
    else if (oper == '-') { cout << a - b << endl; }
    else if (oper == '*') { cout << a * b << endl; }
    else if (oper == '/') { cout << a / b << endl; }
    else if (oper == '%') { cout << a % b << endl; }
    else {
        cout << "������: �������� ����. ��������!" << endl;
    }
    cin.get(); cin.get();
}
