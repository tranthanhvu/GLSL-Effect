//
//  MyViewController.m
//  GLSL-Effect
//
//  Created by yoyo on 5/16/13.
//  Copyright (c) 2013 yoyo. All rights reserved.
//

#import "MyViewController.h"
#import "OpenGLView.h"

@interface MyViewController ()

@end

@implementation MyViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    OpenGLView *glView = [[OpenGLView alloc] initWithFrame:[UIScreen mainScreen].bounds];
    [self setView:glView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
