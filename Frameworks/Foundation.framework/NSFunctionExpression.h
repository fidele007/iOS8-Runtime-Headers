/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSExpression, NSArray;

@interface NSFunctionExpression : NSExpression  {
    NSExpression *_operand;
    SEL _selector;
    NSArray *_arguments;
}

+ (bool)supportsSecureCoding;

- (id)operand;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)arguments;
- (id)function;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (SEL)selector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)binaryOperatorForSelector;
- (id)initWithExpressionType:(unsigned long long)arg1 operand:(id)arg2 selector:(SEL)arg3 argumentArray:(id)arg4;
- (bool)_shouldUseParensWithDescription;
- (id)initWithSelector:(SEL)arg1 argumentArray:(id)arg2;
- (id)initWithTarget:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)predicateFormat;
- (void)allowEvaluation;
- (id)_mapKVCOperatorsToFunctionsInContext:(id)arg1;
- (id)minimalFormInContext:(id)arg1;

@end
