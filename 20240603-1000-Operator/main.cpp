#include <iostream>

using namespace std;

// ���Ҽ� Ŭ����
class Complex {
private:
    int _real;
    int _imaginary;

public:
    Complex(int real, int imaginary)
        : _real(real), _imaginary(imaginary) {}

    int GetReal() {
        return _real;
    }

    int GetImaginay() {
        return _imaginary;
    }

    // + ��ȣ�� ���� ������ �����ε� ����Լ�
    // �ش� �����ȣ�� �������� ������� ���Ͽ�
    // ������.
    Complex& operator+(Complex& rightValue) {
        Complex temp(_real + rightValue._real, _imaginary + rightValue._imaginary);


        return temp;
    }


    // ���迬����
    // <, >, <= , >= , == , !=
    bool operator<(Complex& right) {

        return _real < right._real;
    }

    bool operator>(Complex& right) {
        return _real > right._real;
    }

    bool operator<=(Complex& right) {
        return _real <= right._real;
    }

    // >=

    bool operator==(Complex& right) {
        return _real == right._real;
    }

    // !=


    void Info() {
        cout << _real << showpos << _imaginary << "i";
        cout << noshowpos;
    }
};


int main() {
    Complex a(10, 10);
    Complex b(12, 12);
    Complex c(0, 0);

    a.Info();
    cout << endl;
    b.Info();
    cout << endl;

    //cout.operator<<("monster");

    // �⺻ ���� �����ڴ�
    // �⺻ ����Ÿ Ÿ�Կ� ���� ����� ������ �Ѵ�.
    // C++ ���� ����ڰ� ���� ����Ÿ Ÿ�Կ� ���� ���� ��ȣ�� 
    // ����ϴ� ����� �����ϰ� �ִ�.
    // ������ �����ε�.

    c = a + b;
    c = a.operator+(b);

    c.Info();

    bool ret = a < b;
    cout << "a < b  = " << ret << endl;

    ret = a > b;
    ret = a.operator>(b);
    cout << "a > b = " << ret << endl;


    return 0;
}