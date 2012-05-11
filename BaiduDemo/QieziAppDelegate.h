//
//  QieziAppDelegate.h
//  BaiduDemo
//
//  Created by jian zhang on 12-5-7.
//  Copyright (c) 2012年 txtws.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BMapKit.h"

@class QieziViewController;

@interface QieziAppDelegate : UIResponder <UIApplicationDelegate,BMKGeneralDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) QieziViewController *viewController;

@end
