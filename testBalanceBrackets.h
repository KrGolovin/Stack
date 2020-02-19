//
// Created by Macbook Pro on 19/02/2020.
//

#ifndef STACK_TESTBALANCEBRACKETS_H
#define STACK_TESTBALANCEBRACKETS_H

#include "StackArray.h"

bool testBalanceBrackets(const char* text, int maxDeep = 30);

bool testBalanceBrackets(const char* text, int maxDeep)
{
    Stack<char>* stack = new StackArray<char>(maxDeep);
    bool isBalanceBrackets = true; // изменим на false при обнаружении ошибки
    // если в структуре скобок есть ошибки,
    // может возникнуть прерывание при работе со стеком
    try {
        char cText = '\0';    // очередной символ текста
        for (int i = 0; ((cText = text[i]) != '\0') && (isBalanceBrackets == true); i++) {
            switch (cText) {
                case '(':
                case '[':
                case '{':
                    stack->push(cText);    // любая левая скобка помещается в стек
                    break;
                case ')': // правая скобка проверяется на соответствие со скобкой в
                    if (stack->pop() != '(') {
                        isBalanceBrackets = false;
                    }
                    break;
                case ']':
                    if (stack->pop() != '[') {
                        isBalanceBrackets = false;
                    }
                    break;
                case '}':
                    if (stack->pop() != '{') {
                        isBalanceBrackets = false;
                    }
                    break;
            }
        }
        isBalanceBrackets = isBalanceBrackets && stack->isEmpty();
    }
    catch (StackUnderflow) {
        isBalanceBrackets = false;
    }
    catch (StackOverflow) {
        isBalanceBrackets = false;
    }
    delete stack;
    return isBalanceBrackets;
}

#endif //STACK_TESTBALANCEBRACKETS_H
