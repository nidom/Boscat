//
//  NSString+BOSAdditions.h
//  Boscat Example
//
//  Created by nidom on 16/3/7.
//  Copyright © 2016年 nidom. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BOSConditionMaker;
@interface NSString (BOSAdditions)
@property(nonatomic,strong,readonly) BOSConditionMaker * bos_make;
@end
