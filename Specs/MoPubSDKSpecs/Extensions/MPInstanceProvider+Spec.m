//
//  MPInstanceProvider+Spec.m
//  MoPub
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import "MPInstanceProvider.h"

@implementation MPInstanceProvider (Spec)

+ (MPInstanceProvider *)sharedProvider
{
    return fakeProvider;
}

@end
