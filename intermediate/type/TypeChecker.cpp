/**
 * <h1>TypeChecker</h1>
 *
 * <p>Perform type checking.</p>
 *
 * <p>Copyright (c) 2020 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include "intermediate/symtab/Predefined.h"
#include "intermediate/type/TypeChecker.h"
#include "intermediate/type/Typespec.h"

namespace intermediate { namespace type {

using namespace std;
using namespace intermediate::symtab;
using namespace intermediate::type;

bool TypeChecker::isInteger(Typespec *typespec)
{
    return    (typespec != nullptr)
           && (typespec->baseType() == Predefined::integerType);
}

bool TypeChecker::areBothInteger(Typespec *typespec1, Typespec *typespec2)
{
    return isInteger(typespec1) && isInteger(typespec2);
}

bool TypeChecker::isReal(Typespec *typespec)
{
    return    (typespec != nullptr)
           && (typespec->baseType() == Predefined::realType);
}

bool TypeChecker::isIntegerOrReal(Typespec *typespec)
{
    return isInteger(typespec) || isReal(typespec);
}

bool TypeChecker::isAtLeastOneReal(Typespec *typespec1, Typespec *typespec2)
{
    return (isReal(typespec1) && isReal(typespec2)) ||
           (isReal(typespec1) && isIntegerOrChar(typespec2)) ||
           (isIntegerOrChar(typespec1) && isReal(typespec2));
}

bool TypeChecker::isBoolean(Typespec *typespec)
{
    return    (typespec != nullptr)
           && (typespec->baseType() == Predefined::booleanType);
}

bool TypeChecker::areBothBoolean(Typespec *typespec1, Typespec *typespec2)
{
    return isBoolean(typespec1) && isBoolean(typespec2);
}

bool TypeChecker::isChar(Typespec *typespec)
{
    return    (typespec != nullptr)
           && (typespec->baseType() == Predefined::charType);
}

bool TypeChecker::isString(Typespec *typespec)
{
    return    (typespec != nullptr)
           && (typespec->baseType() == Predefined::stringType);
}

bool TypeChecker::areBothString(Typespec *typespec1, Typespec *typespec2)
{
    return isString(typespec1) && isString(typespec2);
}

bool TypeChecker::isIntegerOrChar(Typespec *type) {
    return isInteger(type) || isChar(type);
}

bool TypeChecker::isNumeric(Typespec *type) {
    return isIntegerOrChar(type) || isReal(type);
}

bool TypeChecker::areAssignmentCompatible(Typespec *targetType,
                                          Typespec *valueType)
{
    if ((targetType == nullptr) || (valueType == nullptr)) return false;

    targetType = targetType->baseType();
    valueType  = valueType->baseType();

    // Identical types.
    if (targetType == valueType) return true;

    // real := integer
    return isNumeric(targetType) && isNumeric(valueType);
}

bool TypeChecker::areComparisonCompatible(Typespec *type1,
                                          Typespec *type2)
{
    if ((type1 == nullptr) || (type2 == nullptr))  return false;

    type1 = type1->baseType();
    type2 = type2->baseType();
    Form form = type1->getForm();

    bool compatible = false;

    // Two identical scalar or enumeration types.
    if (   (type1 == type2)
        && ((form == SCALAR) || (form == ENUMERATION)))
    {
        compatible = true;
    }

    // One integer and one real.
    else if (isAtLeastOneReal(type1, type2)) compatible = true;

    return compatible;
}

}}  // namespace :intermediate::typ
