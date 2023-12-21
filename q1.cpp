#include <iostream>
#include <stdio.h>

using namespace std;

class C;

class A{
    friend class C;

    const int* x = new int(4);
    int y = 1000;

    protected:
        char c = 'Y';

    public:
        void f(A &a) {
            try {
                if (a.x > this->x) {
                    throw *(x) - y;
                }
                else if (a.y > this->y) {
                    throw y * *(x);
                }
                else if (this->c == 'R') {
                    cout << "Color Red" << endl;
                }
                printf("%d\n", this->y);
            }
            catch(int x) {
                this->x = &x;

                this->c = a.c;
            }
        }

        void f(int y, char* a) {
            this->y = y;
            this->c = *(a);
        }

        int operator+(int y) {
            this->y = y;

            cout << "Hello" << endl;

            return this->y - 2;
        }

        void operator-(int y) {
            this->y = 69 - y;

            y = y - y * *(x);
        }

        void operator+=(A &a) {
            if(this!=&a) {
                this->x = &a.y;
                this->y = this->y++;
            }
        }

        virtual ~A() {
            cout << "Bye bye A" << endl;
        }
};

class C : private A{
    private:
        C() {
            f(9,"Y");
            cout << "p c C" <<  endl;
        }
    
    public:
        C(int x, char* c) {
            f(x, c);
            C();
            cout << "v c c" << endl;
        }

        C(char *c) = delete;

        C(int y) {
            this->operator+(y);
            cout << "v c c ++" << endl;
        }

        C(A &a) {
            f(a);
        }

        C (C &c){
            this->operator-(10);
            switch(c+10){
                case 1:
                    cout << "1!" << endl;
                    break;
                case 2:
                    cout << "2!" << endl;
                case 3:
                    cout << "3!" << endl;
                    break;
                case 4:
                    cout << "4!" << endl;
                default:
                    A tmp(c);
                    f(tmp);
            }

            C();

        }

        void operator++(int a) const {
            cout << "X: " << *(this->x) << "\nY: " << this->y << "\nC: " << this->c << endl;
        }

        ~C() {
            cout << "Good night" << endl;
        }
}; 

int main(){
    C* c;
    C* d = new C(1000, "R");
    
    c = new C(*(d));

    A a;
    A b;

    a += b;

    b.f(a);

    c->operator++(0);
    d->operator++(1);

    delete d;
    delete c;

    return 0;

}
