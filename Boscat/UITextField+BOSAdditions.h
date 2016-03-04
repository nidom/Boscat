//
//  UITextField+BOSAdditions.h
//  Boscat Example
//
//  Created by nidom on 16/3/3.
//  Copyright © 2016年 nidom. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BOSConditionMaker;
@interface UITextField (BOSAdditions)
@property(nonatomic,strong,readonly) BOSConditionMaker * bos_make;
@end
