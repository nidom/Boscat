//
//  UITextField+BOSAdditions.m
//  Boscat Example
//
//  Created by nidom on 16/3/3.
//  Copyright © 2016年 nidom. All rights reserved.
//

#import "UITextField+BOSAdditions.h"
#import "BOSConditionMaker.h"
#import <objc/runtime.h>
@implementation UITextField (BOSAdditions)
-(BOSConditionMaker *)bos_make{
    
    
    BOSConditionMaker * make =  objc_getAssociatedObject(self,_cmd);
    if (make == nil) {
        make = [BOSConditionMaker new];
        objc_setAssociatedObject(self,_cmd, make, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return  make;
}


@end
