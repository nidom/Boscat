//
//  BOSConditionMaker.h
//  Boscat Example
//
//  Created by nidom on 16/3/3.
//  Copyright © 2016年 nidom. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_OPTIONS(NSInteger, BOSAttribute) {
    BOSAttributeType = 1 << 0,
    BOSAttributeLength = 1 << 1,
    BOSAttributeContain = 1 << 2,
    BOSAttributeRegexp = 1 << 3

};


@class  BOSCondition;
@interface BOSConditionMaker : NSObject

@property (nonatomic,strong,readonly)BOSCondition * type;
@property (nonatomic,strong,readonly)BOSCondition * length;
@property (nonatomic,strong,readonly)BOSCondition * contain;
@property (nonatomic,strong,readonly)BOSCondition * regexp;
@property (nonatomic, strong, readonly) BOSCondition *(^attributes)(BOSAttribute attrs);

@end
