#include "std_move.hpp"

RValue get() {
    RValue a;
    return a;
}

void put(RValue){}

int main()
{
    RValue a = get();
    cout << "-------" << endl;
    put(RValue());
    return 0;
}
