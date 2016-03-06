//
//  BOSConditionMaker.h
//  Boscat Example
//
//  Created by nidom on 16/3/3.
//  Copyright © 2016年 nidom. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,BOSRegexpType){
    
    BOSRegexpTypeInteger,
    BOSRegexpTypePureNumber,
    BOSRegexpTypeFloatNumber,
    BOSRegexpTypeUrl,
    BOSRegexpTypeEmail
};

@class  BOSCondition;
@interface BOSConditionMaker : NSObject


-(BOSConditionMaker * (^)(BOSRegexpType regexpType))type;
-(BOSConditionMaker * (^)(BOSRegexpType regexpType))numberInterval;
-(BOSConditionMaker * (^)(NSUInteger equalsNumber))lengthEquals;
-(BOSConditionMaker * (^)(NSUInteger equalsNumber))lengthEquals;
-(BOSConditionMaker * (^)(NSUInteger greaterOrEquals,NSUInteger lessOrEquals))lengthInterval;
-(BOSConditionMaker * (^)(NSString * regexpString))regexp;
-(BOSConditionMaker * (^)(NSString * containedString))contains;
-(BOSConditionMaker * (^)(NSString * tagString))regexpWithTag;


@end
