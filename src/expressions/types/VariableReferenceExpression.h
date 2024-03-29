#ifndef CPPLS1_EINDOPDRACHT_VARIABLEREFERENCEEXPRESSION_H
#define CPPLS1_EINDOPDRACHT_VARIABLEREFERENCEEXPRESSION_H


#include <expressions/IExpression.h>

class VariableReferenceExpression : public IExpression
{
    private:
        const std::string& label;
    public:
        VariableReferenceExpression() = delete;
        VariableReferenceExpression(const std::string& label);
        void Interpret(Context& context) override;
};


#endif //CPPLS1_EINDOPDRACHT_VARIABLEREFERENCEEXPRESSION_H
