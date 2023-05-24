#include "using_define.h"

// *iter - ссылка на элемент
// iter->mem - обращение к значению итератора и выборка члена mem основного элемента.
//             эквивалентно (*iter).mem
// ++iter - инкремент итератора для обращения к следующему элементу
// --iter - декремент
// iter1 == iter2
// iter1 != iter2 - сравнение 

int main() {
    string s("some string");
    vector<int> v{11,12,13,14,15};
    vector<string> vs{"double", "two", "string-string"};

    if (s.begin() != s.end()) {
        auto iter_b = s.begin(), iter_e = s.end();
        cout << *iter_b << endl;
        cout << *(--iter_e) << endl;
    }

    if (v.begin() != v.end()) {
        auto iter_v_b = v.begin(), 
             iter_v_e = v.end();
        cout << *iter_v_b << endl;
    }

    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        *it = toupper(*it);

    cout << s << endl;

    // тип итератора: vector<int>::iterator
    //                vector<int>::const_iterator
    //                string::iterator, string::const_iterator
    // cbegin() и cend() возвращают константный тип итератора const_iterator,
    // если нужно только читать из обьекта
    
    auto cb = v.cbegin(), ce = v.cend();
    for (auto it = cb; it != ce; it++)
        cout << "const_iter " << *it << endl;

    //*cb = 5; //- тут ошибка

    // совмещение обращение к элементу вектора и к данным элемента
    auto vs_cb = vs.cbegin(), vs_ce = vs.cend();
    cout << "(*vs_cb).empty() = " << (*vs_cb).empty() << endl;
    ++vs_cb;
    cout << "vs_cb->empty() = " << vs_cb->empty() << endl;
    for (auto it = vs.cbegin(); it != vs.cend(); it++)
        cout << "vs elements: " << *it << endl;


}
