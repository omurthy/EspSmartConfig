//
//  ESPViewController.h
//  EspTouchDemo
//
//  Created by 白 桦 on 3/23/15.
//  Copyright (c) 2015 白 桦. All rights reserved.
//

#import <UIKit/UIKit.h>

// TODO(smaho): We don't need view controllers as it's a Flutter Plugin. Remove ESPViewController.
@interface ESPViewController : UIViewController <UITextFieldDelegate>

@property(weak, nonatomic) IBOutlet UILabel *ssidLabel;
@property(weak, nonatomic) IBOutlet UILabel *bssidLabel;
@property(weak, nonatomic) IBOutlet UISegmentedControl *broadcastSC;

@end
