//
//  ModalViewController.h
//  o.44 실습
//
//  Created by SDT-1 on 2014. 1. 10..
//  Copyright (c) 2014년 SDT-1. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ModalViewController : UIViewController<UITextFieldDelegate>

@property (weak, nonatomic)IBOutlet UITextField *modalInput;
@property (strong, nonatomic)NSString *msg;

@end
