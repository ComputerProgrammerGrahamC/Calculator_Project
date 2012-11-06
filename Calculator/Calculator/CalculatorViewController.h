//
//  CalculatorViewController.h
//  Calculator
//
//  Created by Graham Corke on 12-10-22.
//  Copyright (c) 2012 Graham Corke. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CalculatorViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *display;
@property (weak, nonatomic) IBOutlet UILabel *work;

@property (weak, nonatomic) IBOutlet UILabel *xNumber;
@property (weak, nonatomic) IBOutlet UILabel *aNumber;
@property (weak, nonatomic) IBOutlet UILabel *bNumber;
@end
