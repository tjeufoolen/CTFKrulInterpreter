#ifndef CPPLS1_EINDOPDRACHT_DUPLICATEEXPRESSION_H
#define CPPLS1_EINDOPDRACHT_DUPLICATEEXPRESSION_H


#include <expressions/AbstractExpression.h>

class DuplicateExpression : public AbstractExpression
{
    public:
        void Interpret(Context& context) override;
};


#endif //CPPLS1_EINDOPDRACHT_DUPLICATEEXPRESSION_H