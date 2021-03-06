//
//  NProgressIshView.h
//  NProgressIsh
//
//  Created by Josh Holtz on 1/31/14.
//  Copyright (c) 2014 Josh Holtz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NProgressIshView : UIView

@property (nonatomic, strong) UIColor *foregroundColor;
@property (nonatomic, assign) float progress;
@property (nonatomic, assign) float animationTime;
@property (nonatomic, assign) BOOL removeFromSuperviewOnHide;

@property (nonatomic, assign) float trickleRate;
@property (nonatomic, assign) float trickleSpeed;

+ (NProgressIshView*)showAtTopOfView:(UIView*)view;
+ (NProgressIshView*)showAtBottomOfView:(UIView*)view;
+ (BOOL)hideProgressForView:(UIView*)view;
+ (NSInteger)hideAllProgressForView:(UIView*)view;
+ (NProgressIshView*)progressForView:(UIView*)view;
+ (NSArray*)allProgressForView:(UIView*)view;

- (void)setGlow:(CGSize)size opacity:(CGFloat)opacity raidus:(CGFloat)radius;

- (void)trickle:(BOOL)trickle;
- (void)indeterminate:(BOOL)indeterminate;
- (void)indeterminate:(BOOL)indeterminate startFull:(BOOL)startFull;
- (void)done;
- (void)setProgress:(float)progress animated:(BOOL)animated;

@end
