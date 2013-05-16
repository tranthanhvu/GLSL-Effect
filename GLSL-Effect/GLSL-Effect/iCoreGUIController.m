//
//  iCoreGUIController.m
//  GLSL-Effect
//
//  Created by yoyo on 5/16/13.
//  Copyright (c) 2013 yoyo. All rights reserved.
//

#import "iCoreGUIController.h"
#import "MyViewController.h"

@implementation iCoreGUIController
@synthesize window = _window;

-(id)initWithWindow:(UIWindow *)aWindow {
    if (self = [super init]) {
        _window = aWindow;
    }
    
    return self;
}

-(void)startUp {
    UIViewController *viewController = [[MyViewController alloc] initWithNibName:@"MyViewController" bundle:nil];
    [_window setRootViewController:viewController];
    
    [viewController release];
}
@end