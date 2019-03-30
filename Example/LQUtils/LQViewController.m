//
//  LQViewController.m
//  LQUtils
//
//  Created by Little on 03/30/2019.
//  Copyright (c) 2019 Little. All rights reserved.
//

#import "LQViewController.h"

@interface LQViewController ()

@end

@implementation LQViewController

- (void)viewDidLoad {
  [super viewDidLoad];
  // Do any additional setup after loading the view, typically from a nib.
  UIView *view = [[UIView alloc] initWithFrame:CGRectMake(0, 0, LQ_SCREEN_WIDTH, LQ_SCREEN_HEIGHT)];
  view.backgroundColor = [UIColor blueColor];
  [self.view addSubview:view];

  UIView *statusBar = [[UIView alloc]
      initWithFrame:CGRectMake(0, 0, LQ_SCREEN_WIDTH, LQ_STATUS_BAR_HEIGHT)];

  statusBar.backgroundColor = [UIColor redColor];

  [view addSubview:statusBar];
  // not complete.
  LQ_VIEW_SAFE_ARE_INSETS(view);
}

- (void)didReceiveMemoryWarning {
  [super didReceiveMemoryWarning];
  // Dispose of any resources that can be recreated.
}

@end
