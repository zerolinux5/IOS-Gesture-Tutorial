//
//  ViewController.h
//  MonkeyPinch
//
//  Created by Jesus Magana on 6/29/14.
//  Copyright (c) 2014 ZeroLinux5. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <UIGestureRecognizerDelegate>
@property (strong) AVAudioPlayer * chompPlayer;
- (void)handleTap:(UITapGestureRecognizer *)recognizer;
- (IBAction)handlePan:(UIPanGestureRecognizer *)recognizer;
- (IBAction)handlePinch:(UIPinchGestureRecognizer *)recognizer;
- (IBAction)handleRotate:(UIRotationGestureRecognizer *)recognizer;

@end
