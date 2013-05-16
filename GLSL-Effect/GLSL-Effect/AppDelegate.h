//
//  AppDelegate.h
//  GLSL-Effect
//
//  Created by yoyo on 5/16/13.
//  Copyright (c) 2013 yoyo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class iCoreGUIController;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) iCoreGUIController *mainGUIController;

+(iCoreGUIController*)shareMainGUIController;
@end
