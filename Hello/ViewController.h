//
//  ViewController.h
//  Hello
// 
//  Created by Matthew Rawding on 4/5/13.
//  Copyright (c) 2013 Matthew Rawding. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{ 
    bool running;
    NSTimeInterval startTime;
}

@property (weak, nonatomic) IBOutlet UILabel *label;

- (IBAction)onButton:(UIButton *)sender;

@end
