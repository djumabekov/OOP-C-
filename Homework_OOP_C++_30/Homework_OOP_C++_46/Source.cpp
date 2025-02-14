
/*�������� �������
����: 33-34. ����������� �������. ����������� �����

������� 1
������� ����������� ������� ����� � ����������� �������� � ����� ���������.
������� ����������� ������:
1) ����� �������� ���������;
2) ����� ���������� ���������.
�������� �������, ������� �� ������ ������������ ������� ��������� ������ Liner ��� SquareEqu (������� "������� ������" �� �������� � CreateShape()) � ���������� ����� ��������� �� ������� ����� Equation.*/
/*
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <time.h>
#include <math.h>
using namespace std;

#define RAND(Min,Max)  (rand()%((Max)-(Min)+1)+(Min))
struct LC { LC() { system("chcp 1251 > nul"); srand(time(0)); }~LC() { cin.get(); cin.get(); } } _;


class RootsEquation {
protected:
    float x, a, b, c, d, D, x1, x2, x3;
public:
    RootsEquation() : a(), b(), c(), d(), D(), x1(), x2(), x3(){}
    virtual ~RootsEquation() {}

    virtual void Calc() = 0;
    virtual void Input() = 0;
    virtual void Show() = 0;
};

class Liner: virtual public RootsEquation {
protected:
    float a, b;
public:
    Liner() : a(), b(){}
    virtual void Calc() override {
        if (a == 0) {
            if (b == 0) cout << "����������� ����� ������" << endl;
            else        cout << "��� ������" << endl;
        }
        else {
            x = (-b / a == -0) ? b / a : -b / a;
        }
    }
    virtual void Input() override {
        cout << "������� A and B: ";
        (cin >> a >> b).ignore();
    }
    virtual void Show() {
        cout << typeid(*this).name() << endl;
        cout << "x = " << x << endl;
    }

};
class SquareEqu: virtual public RootsEquation {
protected:
    float x, a, b, c, d, D, x1, x2, x3;
public:
    SquareEqu() : a(), b(), c() {}
    virtual void Calc() override {
        D = b * b - 4 * a * (c - d);
        if (D > 0)
        {
            x1 = (-b - sqrt(D)) / (2 * a);
            x2 = (-b + sqrt(D)) / (2 * a);
        }
        else
        {
            if (D == 0)
            {
                x3 = (-b) / (2 * a);
            }
        }
    }
    virtual void Input() override {
        cout << "������� A, B, C, D: ";
        (cin >> a >> b >> c >> d).ignore();
    }

    virtual void Show() {
        cout << typeid(*this).name() << endl;
        if (D > 0) cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
        else if(D == 0) cout << "x3 = " << x3 << endl;
        else cout << "��� ������" << endl;
    }
};

RootsEquation * CreatRootsEquation() {
    cout << "1 - Liner" << endl;
    cout << "2 - SquareEqu" << endl;
    cout << "0 - Exit" << endl;
    int choose;
    (cin >> choose).ignore();
    switch (choose)
    {
    case 1: return new Liner;
    case 2: return new SquareEqu;
    case 0: return nullptr;
    default:
        cout << "�� ������ �����!" << endl;
        break;
    }
    return nullptr;
}

int main()
{
    RootsEquation* RE = nullptr;
    while (true)
    {
        RE = CreatRootsEquation();
        if (!RE) { break; }
        RE->Input();
        RE->Calc();
        RE->Show();
        delete RE;
    }
} // main()
*/

/*������� 2
��������� ������� �������������� ������������, ������������ ����� <����������, ��������� � �������>.*/
/*
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

#define RAND(Min,Max)  (rand()%((Max)-(Min)+1)+(Min))
struct LC { LC() { system("chcp 1251 > nul"); srand(time(0)); }~LC() { cin.get(); cin.get(); } } _;

class Cilcle {
private:
    float radius;
public:
    // ������
    Cilcle(float radius) :radius(radius) {}
    void setRadius(float radius) { this->radius = radius; }
    int getRadius() const { return radius; }
}; //Cilcle

class Square {
private:
    float side;
public:
    // ������
    Square(float side) :side(side) {}
    void setSide(float side) { this->side = side; }
    int getSide() const { return side; }
}; //Square

class CircleInSquare : public Cilcle, public Square
{
public:
    CircleInSquare(float side, float radius) : Square(side), Cilcle(radius) { }
};

int main(void)
{
    float side = 20;
    float radius = side/2;

    Square mySquare = Square(side);

    CircleInSquare circleInSquare = CircleInSquare(side, radius);
    cout << "circleInSquare: " << endl;
    cout << "Radius: " << circleInSquare.getRadius() << endl;
    cout << "Side: " << circleInSquare.getSide() << endl;
}
*/

/*�������������� �������

������� 4
������� ������� ����� ������.
����������� �� ���� ������ ���� � ������� � ������������ ��������� ������� � ������������.*/
/*
#include <iostream>
#include <initializer_list>
#include <time.h>
#include <Windows.h>
using namespace std;
#define RAND(Min,Max)  (rand()%((Max)-(Min)+1)+(Min))
// �������� ��� ��������� ������� � ���������� ��������� � ������ "_"
struct LC { LC() { system("chcp 1251 > nul"); srand(time(0)); }~LC() { cin.get(); cin.get(); } } _;

template <class T>
struct Element
{
    Element<T>* next;   // ��������� �� ��������� �������
    T data;             // �������� ������
    //
    Element() : next(), data() {}
    Element(T data, Element<T>* next = nullptr)
        :data(data), next(next) {}
    Element<T>* GetNext() { return next; }
    void SetNext(Element<T>* other) { next = other; }
    void SetData(T data) { this->data = data; }
    T GetData() { return data; }
};
template <class T>
class List
{
protected:
    Element<T>* head, * tail; // ��������� �� �������� � ������� �������� ������
    int cnt; // ������� ���������� ����� � ������
public:
    List() : head(), tail(), cnt() {
        //cout << "����������� ��������" << endl;
    }
    List(const T& val) :List() {
        AddHead(val);
    } // ����-��� ����� ���������

    ~List() {
        // cout << "���������� ��������" << endl;
        Clear();
    }
    // ������� ���� - ������� ���� ��������� ������
    void Clear() {
        while (cnt) {
            DeleteHead();
        }
    }
    virtual void Add(const T& val) = 0;
    virtual void DeleteHead() {};
    virtual void DeleteTail() {};
    virtual T Get() const = 0;
};

template <class T>
class Stack : virtual public List<T> {
protected:
    Element<T>* head, * tail; // ��������� �� �������� � ������� �������� ������
    int cnt; // ������� ���������� ����� � ������
public:
    Stack() :head(), tail(), cnt() {};
    virtual void Add(const T& val) override {
        Element<T>* newel = new Element<T>(val);
        if (!cnt) {
            head = tail = newel;
        }
        else {
            tail->next = newel;
            tail = newel;
        }
        cnt++;
    }

    virtual void DeleteTail() override {
        if (cnt) {
            Element<T>* temp = head->next;
            delete head;
            head = temp;
            //cnt--;
            if (!--cnt) { tail = nullptr; }
        }
        else {
            cout << "\nStack's empty\n";
        }
    }

    T Get() const override {
        if (cnt) {
            Element<T>* other = head;
            for (int i = 0; i < cnt-1; i++) {
                other = other->next;
            }
            return other->data;
        }
        //throw exception("uncorrect index");
        throw 1;
    }
};


template <class T>
class Queue : virtual public List<T> {
protected:
    Element<T>* head, * tail; // ��������� �� �������� � ������� �������� ������
    int cnt; // ������� ���������� ����� � ������
public:
    Queue() :head(), tail(), cnt() {};
    virtual void Add(const T& val) override {
        Element<T>* newel = new Element<T>(val);
        if (!cnt) {
            head = tail = newel;
        }
        else {
            tail->next = newel;
            tail = newel;
        }
        cnt++;
    }

    virtual void DeleteHead() override {
        if (cnt) {
            Element<T>* temp = head->next;
            delete head;
            head = temp;
            //cnt--;
            if (!--cnt) { tail = nullptr; }
        }
        else {
            cout << "\nQueue's empty\n";
        }

    };

    T Get() const override {
        if (cnt) {
            return head->data;
        }
        //throw exception("uncorrect index");
        throw 1;
    }
};


int main()
{
    // ����:
    cout << "����: " << endl;
    Stack<int> stack;
    for (int i = 0; i < 10; i++)
    {
        stack.Add(i);
        cout << "������� [" << i << "] = " << i << endl;
    }
    cout << "\n��������� ��������� ������� �� �����  = " << stack.Get() << endl;
    stack.DeleteTail();

    // �������:
    cout << "\n�������: " << endl;
    Queue<int> queue;
    for (int i = 0; i < 10; i++)
    {
        queue.Add(i + 10);
        cout << "������� [" << i << "] = " << i+10 << endl;
    }
    cout << "\n��������� ������ ������� c �������  = " << queue.Get() << endl;
    queue.DeleteHead();
}
*/

