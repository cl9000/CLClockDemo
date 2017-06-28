//
//  ViewController.h
//  0628布局时钟视图demo
//
//  Created by weichanglu on 2017/6/28.
//  Copyright © 2017年 clwei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *hourHand;
@property (weak, nonatomic) IBOutlet UIImageView *minuteHand;
@property (weak, nonatomic) IBOutlet UIImageView *secondHand;
@property (nonatomic, weak) NSTimer *timer;

@end

