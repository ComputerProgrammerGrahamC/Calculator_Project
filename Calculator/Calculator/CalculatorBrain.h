//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Graham Corke on 12-10-22.
//  Copyright (c) 2012 Graham Corke. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)preformOperation:(NSString *)operation;

@property (readonly) id program;

+ (double)runProgram:(id)program;
+ (NSString *)descriptionOfProgram:(id)program;

@end
