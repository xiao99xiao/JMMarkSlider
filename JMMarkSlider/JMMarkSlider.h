//
//  JMMarkSlider.h
//  JMMarkSlider
//
//  Created by JOSE MARTINEZ on 22/07/2014.
//  Copyright (c) 2014 desarrolloios. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface JMMarkSlider : UISlider
@property (nonatomic) IBInspectable UIColor *markColor;
@property (nonatomic) IBInspectable CGFloat markWidth;
@property (nonatomic) NSArray *markPositions;
@property (nonatomic) IBInspectable UIColor *selectedBarColor;
@property (nonatomic) IBInspectable UIColor *unselectedBarColor;
@property (nonatomic) IBInspectable UIImage *handlerImage;
@property (nonatomic) IBInspectable UIColor *handlerColor;
@end
