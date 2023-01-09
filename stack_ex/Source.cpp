#include <iostream>
#include <stack>
using namespace std;

// function prototype for display_stack utility
void display_stack(stack<string> st);

int main() {

    // создание стрингового стэка
    stack<string> colors;

    // закидывание в стэк элементов
    colors.push("Red");
    colors.push("Orange");
    colors.push("Blue");

    cout << "Initial Stack: ";
    // распечатка элементов стэка
    display_stack(colors);

    // удаление последнего элемента стэка
    colors.pop();

    cout << "Final Stack: ";

    // распечатка элементов стэка
    display_stack(colors);

    return 0;
}

// функция для печати стэка
void display_stack(stack<string> st) {

    while (!st.empty()) {
        cout << st.top() << ", ";
        st.pop();
    }

    cout << endl;
}