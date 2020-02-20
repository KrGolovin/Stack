#include <iostream>
#include "testBalanceBrackets.h"
using namespace std;

int main() {
    const char* text00 = " ok ";
    cout << text00 << ": " << (testBalanceBrackets(text00, true) ? "right" : "wrong") << endl;
    cout << text00 << ": " << testBalanceBrackets2(text00, true)  << endl;
    const char* text01 = "(  )  ok ";
    cout << text01 << ": " << (testBalanceBrackets(text01, true) ? "right" : "wrong") << endl;
    cout << text01 << ": " << testBalanceBrackets2(text01, true)  << endl;
    const char* text02 = "(([])) ok";
    cout << text02 << ": " << (testBalanceBrackets(text02, true) ? "right" : "wrong") << endl;
    cout << text02 << ": " << testBalanceBrackets2(text02, true)  << endl;
    const char* text03 = "(([{}[]([])])) OK";
    cout << text03 << ": " << (testBalanceBrackets(text03, true) ? "right" : "wrong") << endl;
    cout << text03 << ": " << testBalanceBrackets2(text03, true)  << endl;
    const char* text04 = "(([{}[]([])])) )extra right parenthesis";
    cout << text04 << ": " << (testBalanceBrackets(text04, true) ? "right" : "wrong") << endl;
    cout << text04 << ": " << testBalanceBrackets2(text04, true)  << endl;
    const char* text05 = "( ( [{ }[ ]([ ])] ) extra left parenthesis ";
    cout << text05 << ": " << (testBalanceBrackets(text05, true) ? "right" : "wrong") << endl;
    cout << text05 << ": " << testBalanceBrackets2(text05, true)  << endl;
    const char* text06 = "( ( [{ ][ ]([ ])]) ) unpaired bracket ";
    cout << text06 << ": " << (testBalanceBrackets(text06, true) ? "right" : "wrong") << endl;
    cout << text06 << ": " << testBalanceBrackets2(text06, true)  << endl;
    return 0;
}
