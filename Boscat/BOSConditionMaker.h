//
//  BOSConditionMaker.h
//  Boscat Example
//
//  Created by nidom on 16/3/3.
//  Copyright © 2016年 nidom. All rights reserved.
//

#import <Foundation/Foundation.h>


#if defined(__LP64__) && __LP64__
# define CGFLOAT_BOS_TYPE double
#else
# define CGFLOAT_BOS_TYPE float
#endif
typedef CGFLOAT_BOS_TYPE BOSFloat;

typedef NS_ENUM(NSInteger,BOSRegexpType){
    
    BOSRegexpTypeInteger,
    BOSRegexpTypePureNumber,
    BOSRegexpTypeFloatNumber,
    BOSRegexpTypeUrl,
    BOSRegexpTypeEmail
};
@interface BOSConditionMaker : NSObject

-(BOSConditionMaker * (^)(NSString * regexpString))regexp;
-(BOSConditionMaker * (^)(NSString * containedString))contains;
-(BOSConditionMaker * (^)(NSString * tagString))regexpWithTag;

#pragma mark-
#pragma mark-LengthCondditons

-(BOSConditionMaker * (^)(NSUInteger greaterThan))lengthGreaterThan;
-(BOSConditionMaker * (^)(NSUInteger greaterOrEquals))lengthGreaterOrEquals;
-(BOSConditionMaker * (^)(NSUInteger lessThan))lengthLessThan;
-(BOSConditionMaker * (^)(NSUInteger lessThanOrEquals))lengthLessThanOrEquals;
-(BOSConditionMaker * (^)(NSUInteger equals))lengthEquals;

#pragma mark-
#pragma mark-TypeConddtions

-(BOSConditionMaker * (^)(BOSRegexpType regexpType))type;
#pragma mark-
#pragma mark-NumberConddtions

-(BOSConditionMaker * (^)(BOSFloat greaterThan))numherGreaterThan;
-(BOSConditionMaker * (^)(BOSFloat greaterThanOrEquals))numherGreaterThanOrEquals;
-(BOSConditionMaker * (^)(BOSFloat lessThen))numherLessThen;
-(BOSConditionMaker * (^)(BOSFloat lessThenOrEquals))numherLessThenOrEquals;
-(BOSConditionMaker * (^)(BOSFloat equals))numherEquals;


#pragma mark-
#pragma mark-NumberConddtions

-(BOSConditionMaker * (^)(BOSFloat equals))failed;

@end
