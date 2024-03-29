#ifndef CPPLS1_EINDOPDRACHT_DIGITSEXPRESSION_H
#define CPPLS1_EINDOPDRACHT_DIGITSEXPRESSION_H


#include <expressions/IExpression.h>

class DigitsExpression : public IExpression
{
    private:
        const std::string& expression;
    public:
        DigitsExpression() = delete;
        DigitsExpression(const std::string& expression);
        void Interpret(Context& context) override;
};


#endif //CPPLS1_EINDOPDRACHT_DIGITSEXPRESSION_H
