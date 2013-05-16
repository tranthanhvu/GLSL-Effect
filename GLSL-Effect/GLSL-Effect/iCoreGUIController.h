//
//  iCoreGUIController.h
//  GLSL-Effect
//
//  Created by yoyo on 5/16/13.
//  Copyright (c) 2013 yoyo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface iCoreGUIController : NSObject

@property (nonatomic, retain) UIWindow *window;

-(id)initWithWindow:(UIWindow*)aWindow;
-(void)startUp;
@end
