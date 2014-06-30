//
//  TickleGestureRecognizer.h
//  MonkeyPinch
//
//  Created by Jesus Magana on 6/29/14.
//  Copyright (c) 2014 ZeroLinux5. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    DirectionUnknown = 0,
    DirectionLeft,
    DirectionRight
} Direction;

@interface TickleGestureRecognizer : UIGestureRecognizer

@property (assign) int tickleCount;
@property (assign) CGPoint curTickleStart;
@property (assign) Direction lastDirection;

@end
