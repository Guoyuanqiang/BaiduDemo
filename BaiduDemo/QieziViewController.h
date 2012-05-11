//
//  QieziViewController.h
//  BaiduDemo
//
//  Created by jian zhang on 12-5-7.
//  Copyright (c) 2012年 txtws.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BMapKit.h"

@interface QieziViewController : UIViewController
<BMKMapViewDelegate,BMKSearchDelegate>
{

    IBOutlet BMKMapView* _mapView;
    
    BMKSearch* _search;
}

@property(nonatomic,retain)BMKSearch* _search;





@end
