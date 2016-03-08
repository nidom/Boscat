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
typedef NS_OPTIONS(NSInteger, BOSOptions) {

     BOSOptionsRegexp =1<<0,
     BOSOptionsContains =1<<1,
     BOSOptionsLength =1<<2,
     BOSOptionsNumber =1<<3,
     BOSOptionsType =1<<4,

};



@interface BOSConditionMaker : NSObject

-(BOSConditionMaker * (^)(NSString * regexpString))regexp;
-(BOSConditionMaker * (^)(NSString * containedString))contains;
-(BOSConditionMaker * (^)(BOSRegexpType regexpType))type;
-(BOSConditionMaker * (^)(void))length;
-(BOSConditionMaker * (^)(void))number;
-(BOSConditionMaker * (^)(id arttribute))bos_equals;
-(BOSConditionMaker * (^)(id arttribute))bos_greaterThan;
-(BOSConditionMaker * (^)(id arttribute))bos_lessThan;
-(BOSConditionMaker * (^)(id arttribute))bos_greaterThanOrEquals;
-(BOSConditionMaker * (^)(id arttribute))bos_lessThanOrEquals;
#pragma mark-
#pragma mark-FailedBlock
//-(BOSConditionMaker * (^)(BOSOptions options))failed;
@end
