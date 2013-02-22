//
//  TCSSettingsViewController.h
//  vinylogue
//
//  Created by Christopher Trott on 2/21/13.
//  Copyright (c) 2013 TwoCentStudios. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RACSubject;

@interface TCSSettingsViewController : UIViewController

@property (nonatomic, strong) RACSubject *playCountFilterSignal;

- (id)initWithPlayCountFilter:(NSUInteger)playCountFilter;

@end